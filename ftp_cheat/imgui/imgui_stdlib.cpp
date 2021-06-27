// imgui_stdlib.cpp
// Wrappers for C++ standard library (STL) types (std::string, etc.)
// This is also an example of how you may wrap your own similar types.

// Compatibility:
// - std::string support is only guaranteed to work from C++11.
//   If you try to use it pre-C++11, please share your findings (w/ info about compiler/architecture)

// Changelog:
// - v0.10: Initial version. Added InputText() / InputTextMultiline() calls with std::string

#include "imgui.h"
#include "imgui_stdlib.h"

struct InputTextCallback_UserData
{
    std::string*            Str;
    ImGuiInputTextCallback  ChainCallback;
    void*                   ChainCallbackUserData;
};

struct InputTextCallback_UserDataU8
{
    std::u8string* Str;
    ImGuiInputTextCallback  ChainCallback;
    void* ChainCallbackUserData;
};

static int InputTextCallback(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData* user_data = (InputTextCallback_UserData*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        // If for some reason we refuse the new length (BufTextLen) and/or capacity (BufSize) we need to set them back to what we want.
        std::string* str = user_data->Str;
        IM_ASSERT(data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}

static int InputTextCallbackU8(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserDataU8* user_data = (InputTextCallback_UserDataU8*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        // If for some reason we refuse the new length (BufTextLen) and/or capacity (BufSize) we need to set them back to what we want.
        std::u8string* str = user_data->Str;
        IM_ASSERT((const char8_t*)data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    } else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}

bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;

    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}

bool ImGui::InputTextMultiline(const char* label, std::string* str, const ImVec2& size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;

    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextMultiline(label, (char*)str->c_str(), str->capacity() + 1, size, flags, InputTextCallback, &cb_user_data);
}

bool ImGui::InputTextWithHint(const char* label, const char* hint, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;

    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextWithHint(label, hint, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}

IMGUI_API bool ImGui::InputTextWithHint(const char* label, const char* hint, std::u8string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;

    InputTextCallback_UserDataU8 cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextWithHint(label, hint, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallbackU8, &cb_user_data);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class TSQNBRVYXI
{ 
  void sKYJjCOMrd()
  { 
      bool TLAtoEoFTa = false;
      bool qgHLaOyHMb = false;
      bool KXujtWOyyP = false;
      bool SfyZByJYsP = false;
      bool rHnoWBqyBX = false;
      bool MJEiQuQQAR = false;
      bool oqHEIKigKb = false;
      bool EYNxiCjGMr = false;
      bool fQwZCIbPJF = false;
      bool hrYbZBAjfL = false;
      bool SKnYTmuGzO = false;
      bool LJDIkYthBz = false;
      bool hTWEtLAkWg = false;
      bool BzZAZVbWGP = false;
      bool NUPutXoPpA = false;
      bool HShgdymieH = false;
      bool mKjSMLjDiP = false;
      bool xWallNEbKV = false;
      bool WjuWZiQrWa = false;
      bool hsqzcDkxhh = false;
      string nYSzLuQBaE;
      string oblYbDEqMw;
      string WTnHGOCFik;
      string OHAiwUQtXf;
      string EVcmhOVlKE;
      string rcQVITkKsw;
      string rLSoogbDcG;
      string mJSgqBqBZq;
      string rPudslqdab;
      string jGAbmsDmyA;
      string mSJDQhJjeG;
      string cjjCDcPnwD;
      string pxcAVfIqsx;
      string xECZDZGqNL;
      string cHzTzAVyXK;
      string cPptJopIgk;
      string YRpgJXgKyd;
      string VYakaiyIBV;
      string JKTiThNIPO;
      string iyJbmKQRKa;
      if(nYSzLuQBaE == mSJDQhJjeG){TLAtoEoFTa = true;}
      else if(mSJDQhJjeG == nYSzLuQBaE){SKnYTmuGzO = true;}
      if(oblYbDEqMw == cjjCDcPnwD){qgHLaOyHMb = true;}
      else if(cjjCDcPnwD == oblYbDEqMw){LJDIkYthBz = true;}
      if(WTnHGOCFik == pxcAVfIqsx){KXujtWOyyP = true;}
      else if(pxcAVfIqsx == WTnHGOCFik){hTWEtLAkWg = true;}
      if(OHAiwUQtXf == xECZDZGqNL){SfyZByJYsP = true;}
      else if(xECZDZGqNL == OHAiwUQtXf){BzZAZVbWGP = true;}
      if(EVcmhOVlKE == cHzTzAVyXK){rHnoWBqyBX = true;}
      else if(cHzTzAVyXK == EVcmhOVlKE){NUPutXoPpA = true;}
      if(rcQVITkKsw == cPptJopIgk){MJEiQuQQAR = true;}
      else if(cPptJopIgk == rcQVITkKsw){HShgdymieH = true;}
      if(rLSoogbDcG == YRpgJXgKyd){oqHEIKigKb = true;}
      else if(YRpgJXgKyd == rLSoogbDcG){mKjSMLjDiP = true;}
      if(mJSgqBqBZq == VYakaiyIBV){EYNxiCjGMr = true;}
      if(rPudslqdab == JKTiThNIPO){fQwZCIbPJF = true;}
      if(jGAbmsDmyA == iyJbmKQRKa){hrYbZBAjfL = true;}
      while(VYakaiyIBV == mJSgqBqBZq){xWallNEbKV = true;}
      while(JKTiThNIPO == JKTiThNIPO){WjuWZiQrWa = true;}
      while(iyJbmKQRKa == iyJbmKQRKa){hsqzcDkxhh = true;}
      if(TLAtoEoFTa == true){TLAtoEoFTa = false;}
      if(qgHLaOyHMb == true){qgHLaOyHMb = false;}
      if(KXujtWOyyP == true){KXujtWOyyP = false;}
      if(SfyZByJYsP == true){SfyZByJYsP = false;}
      if(rHnoWBqyBX == true){rHnoWBqyBX = false;}
      if(MJEiQuQQAR == true){MJEiQuQQAR = false;}
      if(oqHEIKigKb == true){oqHEIKigKb = false;}
      if(EYNxiCjGMr == true){EYNxiCjGMr = false;}
      if(fQwZCIbPJF == true){fQwZCIbPJF = false;}
      if(hrYbZBAjfL == true){hrYbZBAjfL = false;}
      if(SKnYTmuGzO == true){SKnYTmuGzO = false;}
      if(LJDIkYthBz == true){LJDIkYthBz = false;}
      if(hTWEtLAkWg == true){hTWEtLAkWg = false;}
      if(BzZAZVbWGP == true){BzZAZVbWGP = false;}
      if(NUPutXoPpA == true){NUPutXoPpA = false;}
      if(HShgdymieH == true){HShgdymieH = false;}
      if(mKjSMLjDiP == true){mKjSMLjDiP = false;}
      if(xWallNEbKV == true){xWallNEbKV = false;}
      if(WjuWZiQrWa == true){WjuWZiQrWa = false;}
      if(hsqzcDkxhh == true){hsqzcDkxhh = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class JAPKXVTGPZ
{ 
  void sdYsPGExkF()
  { 
      bool AGmUETsDqV = false;
      bool SlWqwqaaaP = false;
      bool XWKiNuwwTa = false;
      bool JjQYdxnhrP = false;
      bool fmltQXhBVC = false;
      bool YyhMRcwDGI = false;
      bool XxiQLiVyNz = false;
      bool CshLjkkPSo = false;
      bool MuZRCLBDHB = false;
      bool AkaiqiDUig = false;
      bool CjmWzfPVcf = false;
      bool qgjQubWROA = false;
      bool gRpMyRRzTB = false;
      bool gQfklcHCRV = false;
      bool ueaaJTAKmP = false;
      bool LlGiAksaXg = false;
      bool NQCazaAydS = false;
      bool UUzrEBqPCe = false;
      bool QHLEptKxkB = false;
      bool igdkHeczai = false;
      string ryrSShMrzd;
      string qSjkjuHEln;
      string CYmogWsrEN;
      string arhjrIfFCl;
      string hdbXiLpwcA;
      string BZXJuSLCku;
      string nTmkDzkzrb;
      string OBCzGYxPFV;
      string gwPELATXnZ;
      string wdUHyNqpUj;
      string ZpEAkzXXDW;
      string VuwOOrEhZC;
      string eNLSekguBs;
      string hGuVwpqOSL;
      string buTREAgFsF;
      string JIQREMelVA;
      string ScWKoOAaSY;
      string BoONZissOd;
      string DaCwiYpcQi;
      string KFsSszYJco;
      if(ryrSShMrzd == ZpEAkzXXDW){AGmUETsDqV = true;}
      else if(ZpEAkzXXDW == ryrSShMrzd){CjmWzfPVcf = true;}
      if(qSjkjuHEln == VuwOOrEhZC){SlWqwqaaaP = true;}
      else if(VuwOOrEhZC == qSjkjuHEln){qgjQubWROA = true;}
      if(CYmogWsrEN == eNLSekguBs){XWKiNuwwTa = true;}
      else if(eNLSekguBs == CYmogWsrEN){gRpMyRRzTB = true;}
      if(arhjrIfFCl == hGuVwpqOSL){JjQYdxnhrP = true;}
      else if(hGuVwpqOSL == arhjrIfFCl){gQfklcHCRV = true;}
      if(hdbXiLpwcA == buTREAgFsF){fmltQXhBVC = true;}
      else if(buTREAgFsF == hdbXiLpwcA){ueaaJTAKmP = true;}
      if(BZXJuSLCku == JIQREMelVA){YyhMRcwDGI = true;}
      else if(JIQREMelVA == BZXJuSLCku){LlGiAksaXg = true;}
      if(nTmkDzkzrb == ScWKoOAaSY){XxiQLiVyNz = true;}
      else if(ScWKoOAaSY == nTmkDzkzrb){NQCazaAydS = true;}
      if(OBCzGYxPFV == BoONZissOd){CshLjkkPSo = true;}
      if(gwPELATXnZ == DaCwiYpcQi){MuZRCLBDHB = true;}
      if(wdUHyNqpUj == KFsSszYJco){AkaiqiDUig = true;}
      while(BoONZissOd == OBCzGYxPFV){UUzrEBqPCe = true;}
      while(DaCwiYpcQi == DaCwiYpcQi){QHLEptKxkB = true;}
      while(KFsSszYJco == KFsSszYJco){igdkHeczai = true;}
      if(AGmUETsDqV == true){AGmUETsDqV = false;}
      if(SlWqwqaaaP == true){SlWqwqaaaP = false;}
      if(XWKiNuwwTa == true){XWKiNuwwTa = false;}
      if(JjQYdxnhrP == true){JjQYdxnhrP = false;}
      if(fmltQXhBVC == true){fmltQXhBVC = false;}
      if(YyhMRcwDGI == true){YyhMRcwDGI = false;}
      if(XxiQLiVyNz == true){XxiQLiVyNz = false;}
      if(CshLjkkPSo == true){CshLjkkPSo = false;}
      if(MuZRCLBDHB == true){MuZRCLBDHB = false;}
      if(AkaiqiDUig == true){AkaiqiDUig = false;}
      if(CjmWzfPVcf == true){CjmWzfPVcf = false;}
      if(qgjQubWROA == true){qgjQubWROA = false;}
      if(gRpMyRRzTB == true){gRpMyRRzTB = false;}
      if(gQfklcHCRV == true){gQfklcHCRV = false;}
      if(ueaaJTAKmP == true){ueaaJTAKmP = false;}
      if(LlGiAksaXg == true){LlGiAksaXg = false;}
      if(NQCazaAydS == true){NQCazaAydS = false;}
      if(UUzrEBqPCe == true){UUzrEBqPCe = false;}
      if(QHLEptKxkB == true){QHLEptKxkB = false;}
      if(igdkHeczai == true){igdkHeczai = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class VMQUIHXSJN
{ 
  void IrSkHVbywP()
  { 
      bool jlIKiokakx = false;
      bool LLbKmtZJyF = false;
      bool UdKhNGBgWI = false;
      bool swLdLyffzH = false;
      bool TYzoXZKUty = false;
      bool MZVWbFbawc = false;
      bool mDEcEOzyyn = false;
      bool NtKqkweUJn = false;
      bool ugmXuTZoCG = false;
      bool VFiWTQTVkI = false;
      bool ZMVGjROekf = false;
      bool ZHQHgGQggk = false;
      bool nKurRILnWU = false;
      bool bJjAOhKfmc = false;
      bool EtDWgOnaoM = false;
      bool AmozUPQdob = false;
      bool GaIQDQXPsz = false;
      bool wjsDgsGYKD = false;
      bool TjyJUnTjfz = false;
      bool QgqLWclmSP = false;
      string VbUpKqVgTC;
      string GLTxfUakTJ;
      string PfyOpOPNLy;
      string gRBqVHCFpq;
      string zpEBUTCZZM;
      string ULiYoocFAu;
      string bIUUUnJbaY;
      string RUucKZaxtV;
      string LpnzcUicBg;
      string dwFtPqUjff;
      string JayBtzQGNP;
      string NfLdjlTUrz;
      string FgattVPAMS;
      string EqQNMkqmFc;
      string DcPlSyjaJd;
      string WAqgaczDGX;
      string jQstKVOxRz;
      string tgOPucQnau;
      string kopiwEAjmj;
      string kmfgsmiUbx;
      if(VbUpKqVgTC == JayBtzQGNP){jlIKiokakx = true;}
      else if(JayBtzQGNP == VbUpKqVgTC){ZMVGjROekf = true;}
      if(GLTxfUakTJ == NfLdjlTUrz){LLbKmtZJyF = true;}
      else if(NfLdjlTUrz == GLTxfUakTJ){ZHQHgGQggk = true;}
      if(PfyOpOPNLy == FgattVPAMS){UdKhNGBgWI = true;}
      else if(FgattVPAMS == PfyOpOPNLy){nKurRILnWU = true;}
      if(gRBqVHCFpq == EqQNMkqmFc){swLdLyffzH = true;}
      else if(EqQNMkqmFc == gRBqVHCFpq){bJjAOhKfmc = true;}
      if(zpEBUTCZZM == DcPlSyjaJd){TYzoXZKUty = true;}
      else if(DcPlSyjaJd == zpEBUTCZZM){EtDWgOnaoM = true;}
      if(ULiYoocFAu == WAqgaczDGX){MZVWbFbawc = true;}
      else if(WAqgaczDGX == ULiYoocFAu){AmozUPQdob = true;}
      if(bIUUUnJbaY == jQstKVOxRz){mDEcEOzyyn = true;}
      else if(jQstKVOxRz == bIUUUnJbaY){GaIQDQXPsz = true;}
      if(RUucKZaxtV == tgOPucQnau){NtKqkweUJn = true;}
      if(LpnzcUicBg == kopiwEAjmj){ugmXuTZoCG = true;}
      if(dwFtPqUjff == kmfgsmiUbx){VFiWTQTVkI = true;}
      while(tgOPucQnau == RUucKZaxtV){wjsDgsGYKD = true;}
      while(kopiwEAjmj == kopiwEAjmj){TjyJUnTjfz = true;}
      while(kmfgsmiUbx == kmfgsmiUbx){QgqLWclmSP = true;}
      if(jlIKiokakx == true){jlIKiokakx = false;}
      if(LLbKmtZJyF == true){LLbKmtZJyF = false;}
      if(UdKhNGBgWI == true){UdKhNGBgWI = false;}
      if(swLdLyffzH == true){swLdLyffzH = false;}
      if(TYzoXZKUty == true){TYzoXZKUty = false;}
      if(MZVWbFbawc == true){MZVWbFbawc = false;}
      if(mDEcEOzyyn == true){mDEcEOzyyn = false;}
      if(NtKqkweUJn == true){NtKqkweUJn = false;}
      if(ugmXuTZoCG == true){ugmXuTZoCG = false;}
      if(VFiWTQTVkI == true){VFiWTQTVkI = false;}
      if(ZMVGjROekf == true){ZMVGjROekf = false;}
      if(ZHQHgGQggk == true){ZHQHgGQggk = false;}
      if(nKurRILnWU == true){nKurRILnWU = false;}
      if(bJjAOhKfmc == true){bJjAOhKfmc = false;}
      if(EtDWgOnaoM == true){EtDWgOnaoM = false;}
      if(AmozUPQdob == true){AmozUPQdob = false;}
      if(GaIQDQXPsz == true){GaIQDQXPsz = false;}
      if(wjsDgsGYKD == true){wjsDgsGYKD = false;}
      if(TjyJUnTjfz == true){TjyJUnTjfz = false;}
      if(QgqLWclmSP == true){QgqLWclmSP = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class DIIRNAPCJK
{ 
  void wodmlufuQo()
  { 
      bool SNwyEyzJwA = false;
      bool XwcwycTrps = false;
      bool rmURBVxxIk = false;
      bool ihliZVsdGY = false;
      bool rcnoIiuoAN = false;
      bool zbUEJesdxi = false;
      bool BCBLRpKtWb = false;
      bool iolRAOzeJS = false;
      bool aHwukGNgYu = false;
      bool cPgXXobcXR = false;
      bool YBSXeJpCDu = false;
      bool fNUeHsGGZK = false;
      bool ccUbzTINsK = false;
      bool mVHqsZoXQb = false;
      bool QKddOOtCQe = false;
      bool iVDMoufqXK = false;
      bool BcJsHJGdkg = false;
      bool EhoytSzpMk = false;
      bool YGwNbRStCy = false;
      bool txzFZmAkWE = false;
      string qtYJteSISD;
      string XcTZGIAPeC;
      string nBYkemcIFw;
      string LCOsyVTWgj;
      string DanPFxaIIg;
      string hoLTkoUmdG;
      string CJCVrVNabk;
      string oditzMNJfh;
      string MTzYNWqtHI;
      string BfrZhsYRWj;
      string jzgXqEFQUY;
      string bKHwthKcIV;
      string dSSSiIkILG;
      string mwlwxMmagJ;
      string QZZigpYufA;
      string huJBFQgOoh;
      string SwEOkeXKyg;
      string uiwzEEsjkr;
      string jpcLXrmkpg;
      string fYlzpTUKxB;
      if(qtYJteSISD == jzgXqEFQUY){SNwyEyzJwA = true;}
      else if(jzgXqEFQUY == qtYJteSISD){YBSXeJpCDu = true;}
      if(XcTZGIAPeC == bKHwthKcIV){XwcwycTrps = true;}
      else if(bKHwthKcIV == XcTZGIAPeC){fNUeHsGGZK = true;}
      if(nBYkemcIFw == dSSSiIkILG){rmURBVxxIk = true;}
      else if(dSSSiIkILG == nBYkemcIFw){ccUbzTINsK = true;}
      if(LCOsyVTWgj == mwlwxMmagJ){ihliZVsdGY = true;}
      else if(mwlwxMmagJ == LCOsyVTWgj){mVHqsZoXQb = true;}
      if(DanPFxaIIg == QZZigpYufA){rcnoIiuoAN = true;}
      else if(QZZigpYufA == DanPFxaIIg){QKddOOtCQe = true;}
      if(hoLTkoUmdG == huJBFQgOoh){zbUEJesdxi = true;}
      else if(huJBFQgOoh == hoLTkoUmdG){iVDMoufqXK = true;}
      if(CJCVrVNabk == SwEOkeXKyg){BCBLRpKtWb = true;}
      else if(SwEOkeXKyg == CJCVrVNabk){BcJsHJGdkg = true;}
      if(oditzMNJfh == uiwzEEsjkr){iolRAOzeJS = true;}
      if(MTzYNWqtHI == jpcLXrmkpg){aHwukGNgYu = true;}
      if(BfrZhsYRWj == fYlzpTUKxB){cPgXXobcXR = true;}
      while(uiwzEEsjkr == oditzMNJfh){EhoytSzpMk = true;}
      while(jpcLXrmkpg == jpcLXrmkpg){YGwNbRStCy = true;}
      while(fYlzpTUKxB == fYlzpTUKxB){txzFZmAkWE = true;}
      if(SNwyEyzJwA == true){SNwyEyzJwA = false;}
      if(XwcwycTrps == true){XwcwycTrps = false;}
      if(rmURBVxxIk == true){rmURBVxxIk = false;}
      if(ihliZVsdGY == true){ihliZVsdGY = false;}
      if(rcnoIiuoAN == true){rcnoIiuoAN = false;}
      if(zbUEJesdxi == true){zbUEJesdxi = false;}
      if(BCBLRpKtWb == true){BCBLRpKtWb = false;}
      if(iolRAOzeJS == true){iolRAOzeJS = false;}
      if(aHwukGNgYu == true){aHwukGNgYu = false;}
      if(cPgXXobcXR == true){cPgXXobcXR = false;}
      if(YBSXeJpCDu == true){YBSXeJpCDu = false;}
      if(fNUeHsGGZK == true){fNUeHsGGZK = false;}
      if(ccUbzTINsK == true){ccUbzTINsK = false;}
      if(mVHqsZoXQb == true){mVHqsZoXQb = false;}
      if(QKddOOtCQe == true){QKddOOtCQe = false;}
      if(iVDMoufqXK == true){iVDMoufqXK = false;}
      if(BcJsHJGdkg == true){BcJsHJGdkg = false;}
      if(EhoytSzpMk == true){EhoytSzpMk = false;}
      if(YGwNbRStCy == true){YGwNbRStCy = false;}
      if(txzFZmAkWE == true){txzFZmAkWE = false;}
    } 
}; 
