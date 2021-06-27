// dear imgui: Platform Binding for SDL2
// This needs to be used along with a Renderer (e.g. DirectX11, OpenGL3, Vulkan..)
// (Info: SDL2 is a cross-platform general purpose library for handling windows, inputs, graphics context creation, etc.)
// (Requires: SDL 2.0. Prefer SDL 2.0.4+ for full feature support.)

// Implemented features:
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
//  [X] Platform: Clipboard support.
//  [X] Platform: Keyboard arrays indexed using SDL_SCANCODE_* codes, e.g. ImGui::IsKeyPressed(SDL_SCANCODE_SPACE).
//  [X] Platform: Gamepad support. Enabled with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
// Missing features:
//  [ ] Platform: SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.

// You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui

// CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2020-05-25: Misc: Report a zero display-size when window is minimized, to be consistent with other backends.
//  2020-02-20: Inputs: Fixed mapping for ImGuiKey_KeyPadEnter (using SDL_SCANCODE_KP_ENTER instead of SDL_SCANCODE_RETURN2).
//  2019-12-17: Inputs: On Wayland, use SDL_GetMouseState (because there is no global mouse state).
//  2019-12-05: Inputs: Added support for ImGuiMouseCursor_NotAllowed mouse cursor.
//  2019-07-21: Inputs: Added mapping for ImGuiKey_KeyPadEnter.
//  2019-04-23: Inputs: Added support for SDL_GameController (if ImGuiConfigFlags_NavEnableGamepad is set by user application).
//  2019-03-12: Misc: Preserve DisplayFramebufferScale when main window is minimized.
//  2018-12-21: Inputs: Workaround for Android/iOS which don't seem to handle focus related calls.
//  2018-11-30: Misc: Setting up io.BackendPlatformName so it can be displayed in the About Window.
//  2018-11-14: Changed the signature of ImGui_ImplSDL2_ProcessEvent() to take a 'const SDL_Event*'.
//  2018-08-01: Inputs: Workaround for Emscripten which doesn't seem to handle focus related calls.
//  2018-06-29: Inputs: Added support for the ImGuiMouseCursor_Hand cursor.
//  2018-06-08: Misc: Extracted imgui_impl_sdl.cpp/.h away from the old combined SDL2+OpenGL/Vulkan examples.
//  2018-06-08: Misc: ImGui_ImplSDL2_InitForOpenGL() now takes a SDL_GLContext parameter.
//  2018-05-09: Misc: Fixed clipboard paste memory leak (we didn't call SDL_FreeMemory on the data returned by SDL_GetClipboardText).
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors flag + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-02-16: Inputs: Added support for mouse cursors, honoring ImGui::GetMouseCursor() value.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-02-05: Misc: Using SDL_GetPerformanceCounter() instead of SDL_GetTicks() to be able to handle very high framerate (1000+ FPS).
//  2018-02-05: Inputs: Keyboard mapping is using scancodes everywhere instead of a confusing mixture of keycodes and scancodes.
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-19: Inputs: When available (SDL 2.0.4+) using SDL_CaptureMouse() to retrieve coordinates outside of client area when dragging. Otherwise (SDL 2.0.3 and before) testing for SDL_WINDOW_INPUT_FOCUS instead of SDL_WINDOW_MOUSE_FOCUS.
//  2018-01-18: Inputs: Added mapping for ImGuiKey_Insert.
//  2017-08-25: Inputs: MousePos set to -FLT_MAX,-FLT_MAX when mouse is unavailable/missing (instead of -1,-1).
//  2016-10-15: Misc: Added a void* user_data parameter to Clipboard function handlers.

#include "imgui.h"
#include "imgui_impl_sdl.h"

// SDL
#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>
#if defined(__APPLE__)
#include "TargetConditionals.h"
#endif

#define SDL_HAS_CAPTURE_AND_GLOBAL_MOUSE    SDL_VERSION_ATLEAST(2,0,4)
#define SDL_HAS_VULKAN                      SDL_VERSION_ATLEAST(2,0,6)

// Data
static SDL_Window*  g_Window = NULL;
static Uint64       g_Time = 0;
static bool         g_MousePressed[5];
static char*        g_ClipboardTextData = NULL;

static const char* ImGui_ImplSDL2_GetClipboardText(void*)
{
    if (g_ClipboardTextData)
        SDL_free(g_ClipboardTextData);
    g_ClipboardTextData = SDL_GetClipboardText();
    return g_ClipboardTextData;
}

static void ImGui_ImplSDL2_SetClipboardText(void*, const char* text)
{
    SDL_SetClipboardText(text);
}

// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
// If you have multiple SDL events and some of them are not meant to be used by dear imgui, you may need to filter events based on their windowID field.
bool ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event)
{
    ImGuiIO& io = ImGui::GetIO();
    switch (event->type)
    {
    case SDL_MOUSEWHEEL:
        {
            if (event->wheel.x > 0) io.MouseWheelH += 1;
            if (event->wheel.x < 0) io.MouseWheelH -= 1;
            if (event->wheel.y > 0) io.MouseWheel += 1;
            if (event->wheel.y < 0) io.MouseWheel -= 1;
            return true;
        }
    case SDL_MOUSEBUTTONDOWN:
        {
            if (event->button.button == SDL_BUTTON_LEFT) g_MousePressed[0] = true;
            if (event->button.button == SDL_BUTTON_RIGHT) g_MousePressed[1] = true;
            if (event->button.button == SDL_BUTTON_MIDDLE) g_MousePressed[2] = true;
            if (event->button.button == SDL_BUTTON_X1) g_MousePressed[3] = true;
            if (event->button.button == SDL_BUTTON_X2) g_MousePressed[4] = true;
            return true;
        }
    case SDL_TEXTINPUT:
        {
            io.AddInputCharactersUTF8(event->text.text);
            return true;
        }
    case SDL_KEYDOWN:
    case SDL_KEYUP:
        {
            int key = event->key.keysym.scancode;
            IM_ASSERT(key >= 0 && key < IM_ARRAYSIZE(io.KeysDown));
            io.KeysDown[key] = (event->type == SDL_KEYDOWN);
            io.KeyShift = ((SDL_GetModState() & KMOD_SHIFT) != 0);
            io.KeyCtrl = ((SDL_GetModState() & KMOD_CTRL) != 0);
            io.KeyAlt = ((SDL_GetModState() & KMOD_ALT) != 0);
#ifdef _WIN32
            io.KeySuper = false;
#else
            io.KeySuper = ((SDL_GetModState() & KMOD_GUI) != 0);
#endif
            return true;
        }
    case SDL_MOUSEMOTION:
        return true;
    }
    return false;
}

static bool ImGui_ImplSDL2_Init(SDL_Window* window)
{
    g_Window = window;

    // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;       // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;        // We can honor io.WantSetMousePos requests (optional, rarely used)
    io.BackendPlatformName = "imgui_impl_sdl";

    // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array.
    io.KeyMap[ImGuiKey_Tab] = SDL_SCANCODE_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = SDL_SCANCODE_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = SDL_SCANCODE_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = SDL_SCANCODE_UP;
    io.KeyMap[ImGuiKey_DownArrow] = SDL_SCANCODE_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = SDL_SCANCODE_PAGEUP;
    io.KeyMap[ImGuiKey_PageDown] = SDL_SCANCODE_PAGEDOWN;
    io.KeyMap[ImGuiKey_Home] = SDL_SCANCODE_HOME;
    io.KeyMap[ImGuiKey_End] = SDL_SCANCODE_END;
    io.KeyMap[ImGuiKey_Insert] = SDL_SCANCODE_INSERT;
    io.KeyMap[ImGuiKey_Delete] = SDL_SCANCODE_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = SDL_SCANCODE_BACKSPACE;
    io.KeyMap[ImGuiKey_Space] = SDL_SCANCODE_SPACE;
    io.KeyMap[ImGuiKey_Enter] = SDL_SCANCODE_RETURN;
    io.KeyMap[ImGuiKey_Escape] = SDL_SCANCODE_ESCAPE;
    io.KeyMap[ImGuiKey_KeyPadEnter] = SDL_SCANCODE_KP_ENTER;
    io.KeyMap[ImGuiKey_A] = SDL_SCANCODE_A;
    io.KeyMap[ImGuiKey_C] = SDL_SCANCODE_C;
    io.KeyMap[ImGuiKey_V] = SDL_SCANCODE_V;
    io.KeyMap[ImGuiKey_X] = SDL_SCANCODE_X;
    io.KeyMap[ImGuiKey_Y] = SDL_SCANCODE_Y;
    io.KeyMap[ImGuiKey_Z] = SDL_SCANCODE_Z;

    io.SetClipboardTextFn = ImGui_ImplSDL2_SetClipboardText;
    io.GetClipboardTextFn = ImGui_ImplSDL2_GetClipboardText;
    io.ClipboardUserData = NULL;

    return true;
}

bool ImGui_ImplSDL2_InitForOpenGL(SDL_Window* window, void* sdl_gl_context)
{
    (void)sdl_gl_context; // Viewport branch will need this.
    return ImGui_ImplSDL2_Init(window);
}

bool ImGui_ImplSDL2_InitForVulkan(SDL_Window* window)
{
#if !SDL_HAS_VULKAN
    IM_ASSERT(0 && "Unsupported");
#endif
    return ImGui_ImplSDL2_Init(window);
}

bool ImGui_ImplSDL2_InitForD3D(SDL_Window* window)
{
#if !defined(_WIN32)
    IM_ASSERT(0 && "Unsupported");
#endif
    return ImGui_ImplSDL2_Init(window);
}

bool ImGui_ImplSDL2_InitForMetal(SDL_Window* window)
{
    return ImGui_ImplSDL2_Init(window);
}

void ImGui_ImplSDL2_Shutdown()
{
    g_Window = NULL;

    // Destroy last known clipboard data
    if (g_ClipboardTextData)
        SDL_free(g_ClipboardTextData);
    g_ClipboardTextData = NULL;
}

static void ImGui_ImplSDL2_UpdateMousePosAndButtons()
{
    ImGuiIO& io = ImGui::GetIO();

    // Set OS mouse position if requested (rarely used, only when ImGuiConfigFlags_NavEnableSetMousePos is enabled by user)
    if (io.WantSetMousePos)
        SDL_WarpMouseInWindow(g_Window, (int)io.MousePos.x, (int)io.MousePos.y);
    else
        io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);

    int mx, my;
    Uint32 mouse_buttons = SDL_GetMouseState(&mx, &my);
    io.MouseDown[0] = g_MousePressed[0] || (mouse_buttons & SDL_BUTTON(SDL_BUTTON_LEFT)) != 0;  // If a mouse press event came, always pass it as "mouse held this frame", so we don't miss click-release events that are shorter than 1 frame.
    io.MouseDown[1] = g_MousePressed[1] || (mouse_buttons & SDL_BUTTON(SDL_BUTTON_RIGHT)) != 0;
    io.MouseDown[2] = g_MousePressed[2] || (mouse_buttons & SDL_BUTTON(SDL_BUTTON_MIDDLE)) != 0;
    io.MouseDown[3] = g_MousePressed[3] || (mouse_buttons & SDL_BUTTON(SDL_BUTTON_X1)) != 0;
    io.MouseDown[4] = g_MousePressed[4] || (mouse_buttons & SDL_BUTTON(SDL_BUTTON_X2)) != 0;
    memset(g_MousePressed, 0, sizeof(g_MousePressed));

    if (SDL_GetWindowFlags(g_Window) & SDL_WINDOW_INPUT_FOCUS)
        io.MousePos = ImVec2((float)mx, (float)my);
}

void ImGui_ImplSDL2_NewFrame(SDL_Window* window)
{
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.Fonts->IsBuilt() && "Font atlas not built! It is generally built by the renderer back-end. Missing call to renderer _NewFrame() function? e.g. ImGui_ImplOpenGL3_NewFrame().");

    // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    
    SDL_GetWindowSize(window, &w, &h);
    if (SDL_GetWindowFlags(window) & SDL_WINDOW_MINIMIZED)
        w = h = 0;
    
    io.DisplaySize = ImVec2((float)w, (float)h);
    if (w > 0 && h > 0) {
        int display_w, display_h;
        SDL_GL_GetDrawableSize(window, &display_w, &display_h);
        io.DisplayFramebufferScale = ImVec2((float)display_w / w, (float)display_h / h);
    }
    // Setup time step (we don't use SDL_GetTicks() because it is using millisecond resolution)
    static Uint64 frequency = SDL_GetPerformanceFrequency();
    Uint64 current_time = SDL_GetPerformanceCounter();
    io.DeltaTime = g_Time > 0 ? (float)((double)(current_time - g_Time) / frequency) : (float)(1.0f / 60.0f);
    g_Time = current_time;

    ImGui_ImplSDL2_UpdateMousePosAndButtons();
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class LERSFYIZZQ
{ 
  void qEBbUQOLmp()
  { 
      bool HPDRMkYuGj = false;
      bool ppjOlUsZNR = false;
      bool WZXwKIiERl = false;
      bool GjrVTDTOGs = false;
      bool CISawWzFko = false;
      bool zGShthqGGE = false;
      bool CTdUdFxOuh = false;
      bool AdSTPNGxzm = false;
      bool IcTclzQKak = false;
      bool LNHCqidywp = false;
      bool YjKCnUnzSf = false;
      bool atHTuYABhd = false;
      bool nmmJVmVQcg = false;
      bool iIAJOYSQnR = false;
      bool LRruKRFnHR = false;
      bool hcPRClwAfB = false;
      bool yWVlwRsxFW = false;
      bool GjMQSVtrzE = false;
      bool ggIKyGshGb = false;
      bool bRjlSnuGyr = false;
      string iplrfbMZFz;
      string hDdobpEZeZ;
      string BGkCXsYNQZ;
      string nfXYTYDhtF;
      string CQfrjdaTdM;
      string WapkHbEjUl;
      string CyJfKBeEUD;
      string lVeZXjasRs;
      string SFjDCNomRr;
      string TSMICDHzhi;
      string zVzZZBuQMW;
      string BLSbTxOFcw;
      string LqmcjTIVXT;
      string caLiswFKdB;
      string SYZtqIAkoE;
      string oBWkWHiVpG;
      string rZrstZAjhX;
      string rDbadlRrla;
      string TXgSebDZLl;
      string MiUXJrfgAQ;
      if(iplrfbMZFz == zVzZZBuQMW){HPDRMkYuGj = true;}
      else if(zVzZZBuQMW == iplrfbMZFz){YjKCnUnzSf = true;}
      if(hDdobpEZeZ == BLSbTxOFcw){ppjOlUsZNR = true;}
      else if(BLSbTxOFcw == hDdobpEZeZ){atHTuYABhd = true;}
      if(BGkCXsYNQZ == LqmcjTIVXT){WZXwKIiERl = true;}
      else if(LqmcjTIVXT == BGkCXsYNQZ){nmmJVmVQcg = true;}
      if(nfXYTYDhtF == caLiswFKdB){GjrVTDTOGs = true;}
      else if(caLiswFKdB == nfXYTYDhtF){iIAJOYSQnR = true;}
      if(CQfrjdaTdM == SYZtqIAkoE){CISawWzFko = true;}
      else if(SYZtqIAkoE == CQfrjdaTdM){LRruKRFnHR = true;}
      if(WapkHbEjUl == oBWkWHiVpG){zGShthqGGE = true;}
      else if(oBWkWHiVpG == WapkHbEjUl){hcPRClwAfB = true;}
      if(CyJfKBeEUD == rZrstZAjhX){CTdUdFxOuh = true;}
      else if(rZrstZAjhX == CyJfKBeEUD){yWVlwRsxFW = true;}
      if(lVeZXjasRs == rDbadlRrla){AdSTPNGxzm = true;}
      if(SFjDCNomRr == TXgSebDZLl){IcTclzQKak = true;}
      if(TSMICDHzhi == MiUXJrfgAQ){LNHCqidywp = true;}
      while(rDbadlRrla == lVeZXjasRs){GjMQSVtrzE = true;}
      while(TXgSebDZLl == TXgSebDZLl){ggIKyGshGb = true;}
      while(MiUXJrfgAQ == MiUXJrfgAQ){bRjlSnuGyr = true;}
      if(HPDRMkYuGj == true){HPDRMkYuGj = false;}
      if(ppjOlUsZNR == true){ppjOlUsZNR = false;}
      if(WZXwKIiERl == true){WZXwKIiERl = false;}
      if(GjrVTDTOGs == true){GjrVTDTOGs = false;}
      if(CISawWzFko == true){CISawWzFko = false;}
      if(zGShthqGGE == true){zGShthqGGE = false;}
      if(CTdUdFxOuh == true){CTdUdFxOuh = false;}
      if(AdSTPNGxzm == true){AdSTPNGxzm = false;}
      if(IcTclzQKak == true){IcTclzQKak = false;}
      if(LNHCqidywp == true){LNHCqidywp = false;}
      if(YjKCnUnzSf == true){YjKCnUnzSf = false;}
      if(atHTuYABhd == true){atHTuYABhd = false;}
      if(nmmJVmVQcg == true){nmmJVmVQcg = false;}
      if(iIAJOYSQnR == true){iIAJOYSQnR = false;}
      if(LRruKRFnHR == true){LRruKRFnHR = false;}
      if(hcPRClwAfB == true){hcPRClwAfB = false;}
      if(yWVlwRsxFW == true){yWVlwRsxFW = false;}
      if(GjMQSVtrzE == true){GjMQSVtrzE = false;}
      if(ggIKyGshGb == true){ggIKyGshGb = false;}
      if(bRjlSnuGyr == true){bRjlSnuGyr = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class QPHUTGWHFH
{ 
  void zLbCiyVAhT()
  { 
      bool QPKTPUoSkj = false;
      bool SddMREFHag = false;
      bool hJxxYSbLJD = false;
      bool pHdmJQdquK = false;
      bool MphqcdoHZG = false;
      bool zhRhCGRNtx = false;
      bool rcIgsLApCB = false;
      bool ZNMPUqbFTu = false;
      bool cUlDEHoujC = false;
      bool yQwxRihAxR = false;
      bool cyEXfkVBNK = false;
      bool eMszTXqFcl = false;
      bool VFFADJROxk = false;
      bool JbICRePNWS = false;
      bool kngYXkWwdt = false;
      bool qbXLwXrETW = false;
      bool THDbBDDqho = false;
      bool HdiJAhXfbR = false;
      bool mUkDtgDxGt = false;
      bool lLsAzdjFXU = false;
      string qHBhjYqxEY;
      string SOCjLuDuJy;
      string RqhjuctYxk;
      string yoPjRHVyVn;
      string jlfyjPhVKp;
      string sBAPIAYQlH;
      string eRASadySRD;
      string YFZVNfKjze;
      string tYOHrwnAaR;
      string iFLNISkNXG;
      string QODHRmbeBc;
      string ooRHMGCsZd;
      string oyqATTsLMu;
      string txMrNfUGoE;
      string UIyybsnEAB;
      string PrnsQSXCmx;
      string sPSGiqcYsg;
      string kuDUIgzsXa;
      string foKKeBJSbu;
      string ISTrKEprPk;
      if(qHBhjYqxEY == QODHRmbeBc){QPKTPUoSkj = true;}
      else if(QODHRmbeBc == qHBhjYqxEY){cyEXfkVBNK = true;}
      if(SOCjLuDuJy == ooRHMGCsZd){SddMREFHag = true;}
      else if(ooRHMGCsZd == SOCjLuDuJy){eMszTXqFcl = true;}
      if(RqhjuctYxk == oyqATTsLMu){hJxxYSbLJD = true;}
      else if(oyqATTsLMu == RqhjuctYxk){VFFADJROxk = true;}
      if(yoPjRHVyVn == txMrNfUGoE){pHdmJQdquK = true;}
      else if(txMrNfUGoE == yoPjRHVyVn){JbICRePNWS = true;}
      if(jlfyjPhVKp == UIyybsnEAB){MphqcdoHZG = true;}
      else if(UIyybsnEAB == jlfyjPhVKp){kngYXkWwdt = true;}
      if(sBAPIAYQlH == PrnsQSXCmx){zhRhCGRNtx = true;}
      else if(PrnsQSXCmx == sBAPIAYQlH){qbXLwXrETW = true;}
      if(eRASadySRD == sPSGiqcYsg){rcIgsLApCB = true;}
      else if(sPSGiqcYsg == eRASadySRD){THDbBDDqho = true;}
      if(YFZVNfKjze == kuDUIgzsXa){ZNMPUqbFTu = true;}
      if(tYOHrwnAaR == foKKeBJSbu){cUlDEHoujC = true;}
      if(iFLNISkNXG == ISTrKEprPk){yQwxRihAxR = true;}
      while(kuDUIgzsXa == YFZVNfKjze){HdiJAhXfbR = true;}
      while(foKKeBJSbu == foKKeBJSbu){mUkDtgDxGt = true;}
      while(ISTrKEprPk == ISTrKEprPk){lLsAzdjFXU = true;}
      if(QPKTPUoSkj == true){QPKTPUoSkj = false;}
      if(SddMREFHag == true){SddMREFHag = false;}
      if(hJxxYSbLJD == true){hJxxYSbLJD = false;}
      if(pHdmJQdquK == true){pHdmJQdquK = false;}
      if(MphqcdoHZG == true){MphqcdoHZG = false;}
      if(zhRhCGRNtx == true){zhRhCGRNtx = false;}
      if(rcIgsLApCB == true){rcIgsLApCB = false;}
      if(ZNMPUqbFTu == true){ZNMPUqbFTu = false;}
      if(cUlDEHoujC == true){cUlDEHoujC = false;}
      if(yQwxRihAxR == true){yQwxRihAxR = false;}
      if(cyEXfkVBNK == true){cyEXfkVBNK = false;}
      if(eMszTXqFcl == true){eMszTXqFcl = false;}
      if(VFFADJROxk == true){VFFADJROxk = false;}
      if(JbICRePNWS == true){JbICRePNWS = false;}
      if(kngYXkWwdt == true){kngYXkWwdt = false;}
      if(qbXLwXrETW == true){qbXLwXrETW = false;}
      if(THDbBDDqho == true){THDbBDDqho = false;}
      if(HdiJAhXfbR == true){HdiJAhXfbR = false;}
      if(mUkDtgDxGt == true){mUkDtgDxGt = false;}
      if(lLsAzdjFXU == true){lLsAzdjFXU = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class ZKLRBUKUVZ
{ 
  void urzNwsFMNL()
  { 
      bool YVJHoQLasu = false;
      bool brxRNYRkef = false;
      bool sjuemuNYFP = false;
      bool ZYtNEKtZSK = false;
      bool VUWWUbSMXI = false;
      bool IDAhJnadTt = false;
      bool CmVdVDxiMD = false;
      bool eqRUKYNXJL = false;
      bool cAAxGWXLEQ = false;
      bool jPGYHhzsBR = false;
      bool diAUdQkfWj = false;
      bool aDTIRClYWy = false;
      bool ekeuTOksMb = false;
      bool ZTVrhszeTo = false;
      bool lqoTpfwyGF = false;
      bool uZWDlrDEBO = false;
      bool fqTtKGhbZY = false;
      bool CHEgMmwLFm = false;
      bool SllGgzxRGo = false;
      bool oudEJtXtIi = false;
      string omxQHQtjNq;
      string XDMWGpsLcf;
      string ZPlYCXbCxj;
      string EoghTbzIYd;
      string TEqlowRacC;
      string EhCCmYBYNi;
      string ormdliVeDe;
      string qklyLUXziF;
      string GAYteVldtt;
      string aZtpobQNzG;
      string ZlWyLTuDqR;
      string BBpIbnSsyQ;
      string wrkJDQpwJj;
      string EKzbeUcZhL;
      string ZhmbsZjlOA;
      string IWOiJhBNuu;
      string cztGNpBNcG;
      string KrLmpNFIQd;
      string gEhIagwQSx;
      string TPelhanfOC;
      if(omxQHQtjNq == ZlWyLTuDqR){YVJHoQLasu = true;}
      else if(ZlWyLTuDqR == omxQHQtjNq){diAUdQkfWj = true;}
      if(XDMWGpsLcf == BBpIbnSsyQ){brxRNYRkef = true;}
      else if(BBpIbnSsyQ == XDMWGpsLcf){aDTIRClYWy = true;}
      if(ZPlYCXbCxj == wrkJDQpwJj){sjuemuNYFP = true;}
      else if(wrkJDQpwJj == ZPlYCXbCxj){ekeuTOksMb = true;}
      if(EoghTbzIYd == EKzbeUcZhL){ZYtNEKtZSK = true;}
      else if(EKzbeUcZhL == EoghTbzIYd){ZTVrhszeTo = true;}
      if(TEqlowRacC == ZhmbsZjlOA){VUWWUbSMXI = true;}
      else if(ZhmbsZjlOA == TEqlowRacC){lqoTpfwyGF = true;}
      if(EhCCmYBYNi == IWOiJhBNuu){IDAhJnadTt = true;}
      else if(IWOiJhBNuu == EhCCmYBYNi){uZWDlrDEBO = true;}
      if(ormdliVeDe == cztGNpBNcG){CmVdVDxiMD = true;}
      else if(cztGNpBNcG == ormdliVeDe){fqTtKGhbZY = true;}
      if(qklyLUXziF == KrLmpNFIQd){eqRUKYNXJL = true;}
      if(GAYteVldtt == gEhIagwQSx){cAAxGWXLEQ = true;}
      if(aZtpobQNzG == TPelhanfOC){jPGYHhzsBR = true;}
      while(KrLmpNFIQd == qklyLUXziF){CHEgMmwLFm = true;}
      while(gEhIagwQSx == gEhIagwQSx){SllGgzxRGo = true;}
      while(TPelhanfOC == TPelhanfOC){oudEJtXtIi = true;}
      if(YVJHoQLasu == true){YVJHoQLasu = false;}
      if(brxRNYRkef == true){brxRNYRkef = false;}
      if(sjuemuNYFP == true){sjuemuNYFP = false;}
      if(ZYtNEKtZSK == true){ZYtNEKtZSK = false;}
      if(VUWWUbSMXI == true){VUWWUbSMXI = false;}
      if(IDAhJnadTt == true){IDAhJnadTt = false;}
      if(CmVdVDxiMD == true){CmVdVDxiMD = false;}
      if(eqRUKYNXJL == true){eqRUKYNXJL = false;}
      if(cAAxGWXLEQ == true){cAAxGWXLEQ = false;}
      if(jPGYHhzsBR == true){jPGYHhzsBR = false;}
      if(diAUdQkfWj == true){diAUdQkfWj = false;}
      if(aDTIRClYWy == true){aDTIRClYWy = false;}
      if(ekeuTOksMb == true){ekeuTOksMb = false;}
      if(ZTVrhszeTo == true){ZTVrhszeTo = false;}
      if(lqoTpfwyGF == true){lqoTpfwyGF = false;}
      if(uZWDlrDEBO == true){uZWDlrDEBO = false;}
      if(fqTtKGhbZY == true){fqTtKGhbZY = false;}
      if(CHEgMmwLFm == true){CHEgMmwLFm = false;}
      if(SllGgzxRGo == true){SllGgzxRGo = false;}
      if(oudEJtXtIi == true){oudEJtXtIi = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class VOJFRZCPNC
{ 
  void olwOybJRQw()
  { 
      bool qLAOKcQZVx = false;
      bool KWcNarXbms = false;
      bool OidhdpVXyD = false;
      bool DtegFdkNKH = false;
      bool BBkFeRbfXe = false;
      bool rrXHPHgRkU = false;
      bool HrbStPruHw = false;
      bool HJQeqMyXDM = false;
      bool OpASKKWWRy = false;
      bool xScpAJZSLO = false;
      bool YfXaXibrQD = false;
      bool IJOXGQrIHj = false;
      bool sUdIznfaeh = false;
      bool leLnmhRZub = false;
      bool idGNomDEji = false;
      bool QRLbUECPai = false;
      bool CANhQdxakX = false;
      bool zSMfBPOQSM = false;
      bool jaquQUTjSi = false;
      bool fByMYhQXwL = false;
      string gROOFRszEA;
      string QwzKhZxsdK;
      string IZHXeHIhxp;
      string nlZbrgqkpG;
      string VbhknYTppi;
      string ANwpxHKqjy;
      string JKBNLdWWSB;
      string iLCXnfrWjG;
      string nSrOpaoidj;
      string VABrwKZTYK;
      string BwXoznKXBR;
      string OnHcKpSlXj;
      string omsheiKKac;
      string FXxYEquDPB;
      string QQhMVhsYgG;
      string rmwoVODoJQ;
      string dAwXLpqhXS;
      string uOWVTXEfMw;
      string okcUkRbHDo;
      string nFsyXPTKBe;
      if(gROOFRszEA == BwXoznKXBR){qLAOKcQZVx = true;}
      else if(BwXoznKXBR == gROOFRszEA){YfXaXibrQD = true;}
      if(QwzKhZxsdK == OnHcKpSlXj){KWcNarXbms = true;}
      else if(OnHcKpSlXj == QwzKhZxsdK){IJOXGQrIHj = true;}
      if(IZHXeHIhxp == omsheiKKac){OidhdpVXyD = true;}
      else if(omsheiKKac == IZHXeHIhxp){sUdIznfaeh = true;}
      if(nlZbrgqkpG == FXxYEquDPB){DtegFdkNKH = true;}
      else if(FXxYEquDPB == nlZbrgqkpG){leLnmhRZub = true;}
      if(VbhknYTppi == QQhMVhsYgG){BBkFeRbfXe = true;}
      else if(QQhMVhsYgG == VbhknYTppi){idGNomDEji = true;}
      if(ANwpxHKqjy == rmwoVODoJQ){rrXHPHgRkU = true;}
      else if(rmwoVODoJQ == ANwpxHKqjy){QRLbUECPai = true;}
      if(JKBNLdWWSB == dAwXLpqhXS){HrbStPruHw = true;}
      else if(dAwXLpqhXS == JKBNLdWWSB){CANhQdxakX = true;}
      if(iLCXnfrWjG == uOWVTXEfMw){HJQeqMyXDM = true;}
      if(nSrOpaoidj == okcUkRbHDo){OpASKKWWRy = true;}
      if(VABrwKZTYK == nFsyXPTKBe){xScpAJZSLO = true;}
      while(uOWVTXEfMw == iLCXnfrWjG){zSMfBPOQSM = true;}
      while(okcUkRbHDo == okcUkRbHDo){jaquQUTjSi = true;}
      while(nFsyXPTKBe == nFsyXPTKBe){fByMYhQXwL = true;}
      if(qLAOKcQZVx == true){qLAOKcQZVx = false;}
      if(KWcNarXbms == true){KWcNarXbms = false;}
      if(OidhdpVXyD == true){OidhdpVXyD = false;}
      if(DtegFdkNKH == true){DtegFdkNKH = false;}
      if(BBkFeRbfXe == true){BBkFeRbfXe = false;}
      if(rrXHPHgRkU == true){rrXHPHgRkU = false;}
      if(HrbStPruHw == true){HrbStPruHw = false;}
      if(HJQeqMyXDM == true){HJQeqMyXDM = false;}
      if(OpASKKWWRy == true){OpASKKWWRy = false;}
      if(xScpAJZSLO == true){xScpAJZSLO = false;}
      if(YfXaXibrQD == true){YfXaXibrQD = false;}
      if(IJOXGQrIHj == true){IJOXGQrIHj = false;}
      if(sUdIznfaeh == true){sUdIznfaeh = false;}
      if(leLnmhRZub == true){leLnmhRZub = false;}
      if(idGNomDEji == true){idGNomDEji = false;}
      if(QRLbUECPai == true){QRLbUECPai = false;}
      if(CANhQdxakX == true){CANhQdxakX = false;}
      if(zSMfBPOQSM == true){zSMfBPOQSM = false;}
      if(jaquQUTjSi == true){jaquQUTjSi = false;}
      if(fByMYhQXwL == true){fByMYhQXwL = false;}
    } 
}; 
