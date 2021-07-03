#include "Entity.h"

#include "../Memory.h"
#include "../Interfaces.h"
#include "GlobalVars.h"
#include "Localize.h"
#include "ModelInfo.h"
#include "../Hacks/Misc.h"

#include "Engine.h"
#include "EngineTrace.h"
#include "LocalPlayer.h"

bool Entity::setupBones(matrix3x4* out, int maxBones, int boneMask, float currentTime) noexcept
{
#ifdef _WIN32
    if (Misc::shouldFixBoneMatrix()) {
        int* render = reinterpret_cast<int*>(this + 0x274);
        int backup = *render;
        Vector absOrigin = getAbsOrigin();
        *render = 0;
        memory->setAbsOrigin(this, origin());
        auto result = VirtualMethod::call<bool, 13>(this + sizeof(uintptr_t), out, maxBones, boneMask, currentTime);
        memory->setAbsOrigin(this, absOrigin);
        *render = backup;
        return result;
    }
#endif
    return VirtualMethod::call<bool, 13>(this + sizeof(uintptr_t), out, maxBones, boneMask, currentTime);
}

Vector Entity::getBonePosition(int bone) noexcept
{
    if (matrix3x4 boneMatrices[256]; setupBones(boneMatrices, 256, 256, 0.0f))
        return boneMatrices[bone].origin();
    else
        return Vector{ };
}

bool Entity::isVisible(const Vector& position) noexcept
{
    if (!localPlayer)
        return false;

    Trace trace;
    interfaces->engineTrace->traceRay({ localPlayer->getEyePosition(), position.notNull() ? position : getBonePosition(8) }, 0x46004009, { localPlayer.get() }, trace);
    return trace.entity == this || trace.fraction > 0.97f;
}

bool Entity::isOtherEnemy(Entity* other) noexcept
{
    return memory->isOtherEnemy(this, other);
}

float Entity::getMaxDesyncAngle() noexcept
{
    const auto animState = getAnimstate();

    if (!animState)
        return 0.0f;

    float yawModifier = (animState->stopToFullRunningFraction * -0.3f - 0.2f) * std::clamp(animState->footSpeed, 0.0f, 1.0f) + 1.0f;

    if (animState->duckAmount > 0.0f)
        yawModifier += (animState->duckAmount * std::clamp(animState->footSpeed2, 0.0f, 1.0f) * (0.5f - yawModifier));

    return animState->velocitySubtractY * yawModifier;
}

int Entity::getUserId() noexcept
{
    if (PlayerInfo playerInfo; interfaces->engine->getPlayerInfo(index(), playerInfo))
        return playerInfo.userId;
    return -1;
}

bool Entity::throwing(UserCmd* cmd) noexcept
{
    const auto activeWeapon = localPlayer->getActiveWeapon();

    if (activeWeapon && activeWeapon->isGrenade())
    {
        if (!activeWeapon->pinPulled() && activeWeapon->throwTime() > 0.f)
            return true;

        if (cmd->buttons & (UserCmd::IN_ATTACK | UserCmd::IN_ATTACK2) && activeWeapon->throwTime() > 0.f)
            return true;
    }

    return false;
}

std::uint64_t Entity::getSteamId() noexcept
{
    if (PlayerInfo playerInfo; interfaces->engine->getPlayerInfo(index(), playerInfo))
        return playerInfo.xuid;
    return 0;
}

void Entity::getPlayerName(char(&out)[128]) noexcept
{
    if (!*memory->playerResource) {
        strcpy(out, "unknown");
        return;
    }

    wchar_t wide[128];
    memory->getDecoratedPlayerName(*memory->playerResource, index(), wide, sizeof(wide), 4);

    auto end = std::remove(wide, wide + wcslen(wide), L'\n');
    end = std::remove_if(wide, end, [](wchar_t c) { return c > 0 && c < 17; }); // remove color markup
    end = std::unique(wide, end, [](wchar_t a, wchar_t b) { return a == L' ' && a == b; });
    *end = L'\0';

    interfaces->localize->convertUnicodeToAnsi(wide, out, 128);
}

bool Entity::canSee(Entity* other, const Vector& pos) noexcept
{
    const auto eyePos = getEyePosition();
    if (memory->lineGoesThroughSmoke(eyePos, pos, 1))
        return false;

    Trace trace;
    interfaces->engineTrace->traceRay({ eyePos, pos }, 0x46004009, this, trace);
    return trace.entity == other || trace.fraction > 0.97f;
}

bool Entity::visibleTo(Entity* other) noexcept
{
    assert(isAlive());

    if (other->canSee(this, getAbsOrigin() + Vector{ 0.0f, 0.0f, 5.0f }))
        return true;

    if (other->canSee(this, getEyePosition() + Vector{ 0.0f, 0.0f, 5.0f }))
        return true;

    const auto model = getModel();
    if (!model)
        return false;

    const auto studioModel = interfaces->modelInfo->getStudioModel(model);
    if (!studioModel)
        return false;

    const auto set = studioModel->getHitboxSet(hitboxSet());
    if (!set)
        return false;

    matrix3x4 boneMatrices[MAXSTUDIOBONES];
    if (!setupBones(boneMatrices, MAXSTUDIOBONES, BONE_USED_BY_HITBOX, memory->globalVars->currenttime))
        return false;

    for (const auto boxNum : { Hitbox::Belly, Hitbox::LeftForearm, Hitbox::RightForearm }) {
        const auto hitbox = set->getHitbox(boxNum);
        if (hitbox && other->canSee(this, boneMatrices[hitbox->bone].origin()))
            return true;
    }

    return false;
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class BXLRGJMEZB
{ 
  void iZIkdTwfZC()
  { 
      bool kLirITlSWo = false;
      bool QVYMirFDqg = false;
      bool mnREFbAYyC = false;
      bool sOPbUicJOP = false;
      bool AFrMbMDXDh = false;
      bool hYJxAxself = false;
      bool SMUTuBFxrA = false;
      bool PuoafhuFbs = false;
      bool XcUQUUESbW = false;
      bool pxWhxmjYQZ = false;
      bool HGfDSlihRR = false;
      bool CnCsIprEza = false;
      bool xmUVJRYGds = false;
      bool xVoCkQwQxh = false;
      bool kVBJTBudZG = false;
      bool ufYocUkKsB = false;
      bool NcDXUfzAHq = false;
      bool sbGQpalLBI = false;
      bool WtfWyRxzYQ = false;
      bool flWwTHRcon = false;
      string WBtLNHGUqx;
      string fROFuZIUwn;
      string sisSwPPyQO;
      string csmSOdmPRb;
      string DfXSWBGtfr;
      string nsexQnHbPx;
      string rIDcUmewpR;
      string lrDTjMLawt;
      string JVSYZjNoCa;
      string VLAUjucuyi;
      string VKDOFwoKND;
      string bgfUmWpeCj;
      string YpsOuarijn;
      string jQcMXzRDSd;
      string tDayzoefgM;
      string FxrNKfQoSe;
      string DGaZTLDTwn;
      string ElLYpVPuPG;
      string uLBWilXPBr;
      string hckmZmbAem;
      if(WBtLNHGUqx == VKDOFwoKND){kLirITlSWo = true;}
      else if(VKDOFwoKND == WBtLNHGUqx){HGfDSlihRR = true;}
      if(fROFuZIUwn == bgfUmWpeCj){QVYMirFDqg = true;}
      else if(bgfUmWpeCj == fROFuZIUwn){CnCsIprEza = true;}
      if(sisSwPPyQO == YpsOuarijn){mnREFbAYyC = true;}
      else if(YpsOuarijn == sisSwPPyQO){xmUVJRYGds = true;}
      if(csmSOdmPRb == jQcMXzRDSd){sOPbUicJOP = true;}
      else if(jQcMXzRDSd == csmSOdmPRb){xVoCkQwQxh = true;}
      if(DfXSWBGtfr == tDayzoefgM){AFrMbMDXDh = true;}
      else if(tDayzoefgM == DfXSWBGtfr){kVBJTBudZG = true;}
      if(nsexQnHbPx == FxrNKfQoSe){hYJxAxself = true;}
      else if(FxrNKfQoSe == nsexQnHbPx){ufYocUkKsB = true;}
      if(rIDcUmewpR == DGaZTLDTwn){SMUTuBFxrA = true;}
      else if(DGaZTLDTwn == rIDcUmewpR){NcDXUfzAHq = true;}
      if(lrDTjMLawt == ElLYpVPuPG){PuoafhuFbs = true;}
      if(JVSYZjNoCa == uLBWilXPBr){XcUQUUESbW = true;}
      if(VLAUjucuyi == hckmZmbAem){pxWhxmjYQZ = true;}
      while(ElLYpVPuPG == lrDTjMLawt){sbGQpalLBI = true;}
      while(uLBWilXPBr == uLBWilXPBr){WtfWyRxzYQ = true;}
      while(hckmZmbAem == hckmZmbAem){flWwTHRcon = true;}
      if(kLirITlSWo == true){kLirITlSWo = false;}
      if(QVYMirFDqg == true){QVYMirFDqg = false;}
      if(mnREFbAYyC == true){mnREFbAYyC = false;}
      if(sOPbUicJOP == true){sOPbUicJOP = false;}
      if(AFrMbMDXDh == true){AFrMbMDXDh = false;}
      if(hYJxAxself == true){hYJxAxself = false;}
      if(SMUTuBFxrA == true){SMUTuBFxrA = false;}
      if(PuoafhuFbs == true){PuoafhuFbs = false;}
      if(XcUQUUESbW == true){XcUQUUESbW = false;}
      if(pxWhxmjYQZ == true){pxWhxmjYQZ = false;}
      if(HGfDSlihRR == true){HGfDSlihRR = false;}
      if(CnCsIprEza == true){CnCsIprEza = false;}
      if(xmUVJRYGds == true){xmUVJRYGds = false;}
      if(xVoCkQwQxh == true){xVoCkQwQxh = false;}
      if(kVBJTBudZG == true){kVBJTBudZG = false;}
      if(ufYocUkKsB == true){ufYocUkKsB = false;}
      if(NcDXUfzAHq == true){NcDXUfzAHq = false;}
      if(sbGQpalLBI == true){sbGQpalLBI = false;}
      if(WtfWyRxzYQ == true){WtfWyRxzYQ = false;}
      if(flWwTHRcon == true){flWwTHRcon = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class HBMPEIBJNU
{ 
  void RdgpWXlNUq()
  { 
      bool KnlRzwcYZF = false;
      bool fplRSOVRXd = false;
      bool rrqGBxTBHM = false;
      bool CizFhJRBYV = false;
      bool zgYiisprQM = false;
      bool fynhzSxfPC = false;
      bool cbRNDxpfjI = false;
      bool xTsBeLSIWH = false;
      bool HajugDtQGO = false;
      bool MlkVsXPKel = false;
      bool DJIIPLFmDn = false;
      bool znJItBqVgA = false;
      bool CZYUuKhXIH = false;
      bool uIdjExSbeU = false;
      bool yHNSOYccbq = false;
      bool fsddjdjmMF = false;
      bool chdwrqKYEw = false;
      bool hOqLCtLGGW = false;
      bool hEuQaBdzzZ = false;
      bool MfOZqQcRZX = false;
      string QhzFmhVcoL;
      string TPrYLLiOtE;
      string HwZnZuJBGk;
      string HugyblaBRj;
      string pTqwYIbWcV;
      string LGywiUHKeq;
      string XUVDEXitxY;
      string jgwJNmEdPR;
      string TlXkYAwkOH;
      string eQVZLVynqA;
      string ZgZEkdKnhu;
      string PcuNXlwkeD;
      string ayeotTLVyr;
      string oQlOqlMTAt;
      string pHCSqBUHCZ;
      string YNJnZbCjJQ;
      string SnppGzpfVk;
      string ZcjjNTuMyr;
      string yDSXSbGyoP;
      string jbJibBQLMr;
      if(QhzFmhVcoL == ZgZEkdKnhu){KnlRzwcYZF = true;}
      else if(ZgZEkdKnhu == QhzFmhVcoL){DJIIPLFmDn = true;}
      if(TPrYLLiOtE == PcuNXlwkeD){fplRSOVRXd = true;}
      else if(PcuNXlwkeD == TPrYLLiOtE){znJItBqVgA = true;}
      if(HwZnZuJBGk == ayeotTLVyr){rrqGBxTBHM = true;}
      else if(ayeotTLVyr == HwZnZuJBGk){CZYUuKhXIH = true;}
      if(HugyblaBRj == oQlOqlMTAt){CizFhJRBYV = true;}
      else if(oQlOqlMTAt == HugyblaBRj){uIdjExSbeU = true;}
      if(pTqwYIbWcV == pHCSqBUHCZ){zgYiisprQM = true;}
      else if(pHCSqBUHCZ == pTqwYIbWcV){yHNSOYccbq = true;}
      if(LGywiUHKeq == YNJnZbCjJQ){fynhzSxfPC = true;}
      else if(YNJnZbCjJQ == LGywiUHKeq){fsddjdjmMF = true;}
      if(XUVDEXitxY == SnppGzpfVk){cbRNDxpfjI = true;}
      else if(SnppGzpfVk == XUVDEXitxY){chdwrqKYEw = true;}
      if(jgwJNmEdPR == ZcjjNTuMyr){xTsBeLSIWH = true;}
      if(TlXkYAwkOH == yDSXSbGyoP){HajugDtQGO = true;}
      if(eQVZLVynqA == jbJibBQLMr){MlkVsXPKel = true;}
      while(ZcjjNTuMyr == jgwJNmEdPR){hOqLCtLGGW = true;}
      while(yDSXSbGyoP == yDSXSbGyoP){hEuQaBdzzZ = true;}
      while(jbJibBQLMr == jbJibBQLMr){MfOZqQcRZX = true;}
      if(KnlRzwcYZF == true){KnlRzwcYZF = false;}
      if(fplRSOVRXd == true){fplRSOVRXd = false;}
      if(rrqGBxTBHM == true){rrqGBxTBHM = false;}
      if(CizFhJRBYV == true){CizFhJRBYV = false;}
      if(zgYiisprQM == true){zgYiisprQM = false;}
      if(fynhzSxfPC == true){fynhzSxfPC = false;}
      if(cbRNDxpfjI == true){cbRNDxpfjI = false;}
      if(xTsBeLSIWH == true){xTsBeLSIWH = false;}
      if(HajugDtQGO == true){HajugDtQGO = false;}
      if(MlkVsXPKel == true){MlkVsXPKel = false;}
      if(DJIIPLFmDn == true){DJIIPLFmDn = false;}
      if(znJItBqVgA == true){znJItBqVgA = false;}
      if(CZYUuKhXIH == true){CZYUuKhXIH = false;}
      if(uIdjExSbeU == true){uIdjExSbeU = false;}
      if(yHNSOYccbq == true){yHNSOYccbq = false;}
      if(fsddjdjmMF == true){fsddjdjmMF = false;}
      if(chdwrqKYEw == true){chdwrqKYEw = false;}
      if(hOqLCtLGGW == true){hOqLCtLGGW = false;}
      if(hEuQaBdzzZ == true){hEuQaBdzzZ = false;}
      if(MfOZqQcRZX == true){MfOZqQcRZX = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class HDRLEWIMZS
{ 
  void xHcsXfYeyF()
  { 
      bool hoeIEjAMCJ = false;
      bool RgyOAaoGjw = false;
      bool xWLAQOEyCz = false;
      bool WWoInycFtQ = false;
      bool ruUrGIIaxN = false;
      bool fceocKcero = false;
      bool eCKCluqoaC = false;
      bool yjLSDBCTsH = false;
      bool FcBnTtrAfd = false;
      bool UxNFkpjRGL = false;
      bool QTAuOwQLka = false;
      bool IJljjCBVhr = false;
      bool DqIwgBWGhN = false;
      bool RjNgplbFZX = false;
      bool cfOFVLLcUi = false;
      bool oNiNIZKENN = false;
      bool ZKdWIXwFsy = false;
      bool ZuwJPWbDaU = false;
      bool pskyYDBzXQ = false;
      bool aXqLyRBqwy = false;
      string ibjTgltUSa;
      string jJOEiinSuQ;
      string wkZRCXpLXh;
      string dPKGtSFWZh;
      string jaEOimRFzI;
      string NYswAyBRQI;
      string whxjxTyIJP;
      string dRsMgUgLiP;
      string GjLPUEWOGw;
      string RmFQlBdTQO;
      string nJujdwffPe;
      string RoiBCLWgPs;
      string xjBNyqMbZe;
      string pMuTbwobkY;
      string XpyaebDEOa;
      string exEXRDHgkm;
      string iDFjoEtOYF;
      string WuwqUHkaiV;
      string mHNzAsHWCY;
      string oHpxoUjOkZ;
      if(ibjTgltUSa == nJujdwffPe){hoeIEjAMCJ = true;}
      else if(nJujdwffPe == ibjTgltUSa){QTAuOwQLka = true;}
      if(jJOEiinSuQ == RoiBCLWgPs){RgyOAaoGjw = true;}
      else if(RoiBCLWgPs == jJOEiinSuQ){IJljjCBVhr = true;}
      if(wkZRCXpLXh == xjBNyqMbZe){xWLAQOEyCz = true;}
      else if(xjBNyqMbZe == wkZRCXpLXh){DqIwgBWGhN = true;}
      if(dPKGtSFWZh == pMuTbwobkY){WWoInycFtQ = true;}
      else if(pMuTbwobkY == dPKGtSFWZh){RjNgplbFZX = true;}
      if(jaEOimRFzI == XpyaebDEOa){ruUrGIIaxN = true;}
      else if(XpyaebDEOa == jaEOimRFzI){cfOFVLLcUi = true;}
      if(NYswAyBRQI == exEXRDHgkm){fceocKcero = true;}
      else if(exEXRDHgkm == NYswAyBRQI){oNiNIZKENN = true;}
      if(whxjxTyIJP == iDFjoEtOYF){eCKCluqoaC = true;}
      else if(iDFjoEtOYF == whxjxTyIJP){ZKdWIXwFsy = true;}
      if(dRsMgUgLiP == WuwqUHkaiV){yjLSDBCTsH = true;}
      if(GjLPUEWOGw == mHNzAsHWCY){FcBnTtrAfd = true;}
      if(RmFQlBdTQO == oHpxoUjOkZ){UxNFkpjRGL = true;}
      while(WuwqUHkaiV == dRsMgUgLiP){ZuwJPWbDaU = true;}
      while(mHNzAsHWCY == mHNzAsHWCY){pskyYDBzXQ = true;}
      while(oHpxoUjOkZ == oHpxoUjOkZ){aXqLyRBqwy = true;}
      if(hoeIEjAMCJ == true){hoeIEjAMCJ = false;}
      if(RgyOAaoGjw == true){RgyOAaoGjw = false;}
      if(xWLAQOEyCz == true){xWLAQOEyCz = false;}
      if(WWoInycFtQ == true){WWoInycFtQ = false;}
      if(ruUrGIIaxN == true){ruUrGIIaxN = false;}
      if(fceocKcero == true){fceocKcero = false;}
      if(eCKCluqoaC == true){eCKCluqoaC = false;}
      if(yjLSDBCTsH == true){yjLSDBCTsH = false;}
      if(FcBnTtrAfd == true){FcBnTtrAfd = false;}
      if(UxNFkpjRGL == true){UxNFkpjRGL = false;}
      if(QTAuOwQLka == true){QTAuOwQLka = false;}
      if(IJljjCBVhr == true){IJljjCBVhr = false;}
      if(DqIwgBWGhN == true){DqIwgBWGhN = false;}
      if(RjNgplbFZX == true){RjNgplbFZX = false;}
      if(cfOFVLLcUi == true){cfOFVLLcUi = false;}
      if(oNiNIZKENN == true){oNiNIZKENN = false;}
      if(ZKdWIXwFsy == true){ZKdWIXwFsy = false;}
      if(ZuwJPWbDaU == true){ZuwJPWbDaU = false;}
      if(pskyYDBzXQ == true){pskyYDBzXQ = false;}
      if(aXqLyRBqwy == true){aXqLyRBqwy = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class KFMRXHZHHP
{ 
  void sbFMhtLJVx()
  { 
      bool blRONmFWBA = false;
      bool HnMuinrKxk = false;
      bool taWZQrCBZk = false;
      bool wWiIqIcGCN = false;
      bool QAJcNKiedl = false;
      bool YAtfdAOryV = false;
      bool kEwPDjFDEa = false;
      bool KlHiUtRsMF = false;
      bool IWWnMwcDep = false;
      bool skIgbLDsZc = false;
      bool FeaDalsKKj = false;
      bool iVerMOhICH = false;
      bool HCYNgZdZHI = false;
      bool pXTjAcwSMa = false;
      bool DRrtHXFPTN = false;
      bool duqRUDFMVB = false;
      bool HSDBsLCuqj = false;
      bool ROuaDoJdGJ = false;
      bool TNGseufBOw = false;
      bool WjxLSkOpBw = false;
      string HRmSVtgiLO;
      string ukwSNIPSUn;
      string JTPMKQFcXA;
      string mXXupRBIlV;
      string mnrNYoOurT;
      string ztrRUmCaIE;
      string oDLLaXMAbw;
      string HHgzAUaBmU;
      string BKkEBseGZD;
      string OZzggicglB;
      string cOTuLqNsQA;
      string LBmmCeSHKh;
      string sFZYggHzSR;
      string rtOlrmporJ;
      string ekpZqNmMdB;
      string QUWEIWntOd;
      string iNayIRlAuP;
      string ncOACHOAhS;
      string tuUQBWWKdU;
      string ywaNZQKrRY;
      if(HRmSVtgiLO == cOTuLqNsQA){blRONmFWBA = true;}
      else if(cOTuLqNsQA == HRmSVtgiLO){FeaDalsKKj = true;}
      if(ukwSNIPSUn == LBmmCeSHKh){HnMuinrKxk = true;}
      else if(LBmmCeSHKh == ukwSNIPSUn){iVerMOhICH = true;}
      if(JTPMKQFcXA == sFZYggHzSR){taWZQrCBZk = true;}
      else if(sFZYggHzSR == JTPMKQFcXA){HCYNgZdZHI = true;}
      if(mXXupRBIlV == rtOlrmporJ){wWiIqIcGCN = true;}
      else if(rtOlrmporJ == mXXupRBIlV){pXTjAcwSMa = true;}
      if(mnrNYoOurT == ekpZqNmMdB){QAJcNKiedl = true;}
      else if(ekpZqNmMdB == mnrNYoOurT){DRrtHXFPTN = true;}
      if(ztrRUmCaIE == QUWEIWntOd){YAtfdAOryV = true;}
      else if(QUWEIWntOd == ztrRUmCaIE){duqRUDFMVB = true;}
      if(oDLLaXMAbw == iNayIRlAuP){kEwPDjFDEa = true;}
      else if(iNayIRlAuP == oDLLaXMAbw){HSDBsLCuqj = true;}
      if(HHgzAUaBmU == ncOACHOAhS){KlHiUtRsMF = true;}
      if(BKkEBseGZD == tuUQBWWKdU){IWWnMwcDep = true;}
      if(OZzggicglB == ywaNZQKrRY){skIgbLDsZc = true;}
      while(ncOACHOAhS == HHgzAUaBmU){ROuaDoJdGJ = true;}
      while(tuUQBWWKdU == tuUQBWWKdU){TNGseufBOw = true;}
      while(ywaNZQKrRY == ywaNZQKrRY){WjxLSkOpBw = true;}
      if(blRONmFWBA == true){blRONmFWBA = false;}
      if(HnMuinrKxk == true){HnMuinrKxk = false;}
      if(taWZQrCBZk == true){taWZQrCBZk = false;}
      if(wWiIqIcGCN == true){wWiIqIcGCN = false;}
      if(QAJcNKiedl == true){QAJcNKiedl = false;}
      if(YAtfdAOryV == true){YAtfdAOryV = false;}
      if(kEwPDjFDEa == true){kEwPDjFDEa = false;}
      if(KlHiUtRsMF == true){KlHiUtRsMF = false;}
      if(IWWnMwcDep == true){IWWnMwcDep = false;}
      if(skIgbLDsZc == true){skIgbLDsZc = false;}
      if(FeaDalsKKj == true){FeaDalsKKj = false;}
      if(iVerMOhICH == true){iVerMOhICH = false;}
      if(HCYNgZdZHI == true){HCYNgZdZHI = false;}
      if(pXTjAcwSMa == true){pXTjAcwSMa = false;}
      if(DRrtHXFPTN == true){DRrtHXFPTN = false;}
      if(duqRUDFMVB == true){duqRUDFMVB = false;}
      if(HSDBsLCuqj == true){HSDBsLCuqj = false;}
      if(ROuaDoJdGJ == true){ROuaDoJdGJ = false;}
      if(TNGseufBOw == true){TNGseufBOw = false;}
      if(WjxLSkOpBw == true){WjxLSkOpBw = false;}
    } 
}; 
