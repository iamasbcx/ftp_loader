#include "KeyValues.h"
#include "../Memory.h"

KeyValues* KeyValues::fromString(const char* name, const char* value) noexcept
{
#ifdef _WIN32
    const auto keyValuesFromString = memory->keyValuesFromString;
    KeyValues* keyValues;
    __asm {
        push 0
        mov edx, value
        mov ecx, name
        call keyValuesFromString
        add esp, 4
        mov keyValues, eax
    }
    return keyValues;
#else
    return reinterpret_cast<KeyValues*(*)(const char*, const char*, const char**)>(memory->keyValuesFromString)(name, value, nullptr);
#endif
}

KeyValues* KeyValues::findKey(const char* keyName, bool create) noexcept
{
    return memory->keyValuesFindKey(this, keyName, create);
}

void KeyValues::setString(const char* keyName, const char* value) noexcept
{
    if (const auto key = findKey(keyName, true))
        memory->keyValuesSetString(key, value);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class SCTVTGNCKZ
{ 
  void DCnKqENNIe()
  { 
      bool BfrEQJKWbE = false;
      bool gcfeeDwGNl = false;
      bool gwgbIsJMLW = false;
      bool GRZUpKxwdC = false;
      bool hYPrjLdUwo = false;
      bool DfAuDEzQwW = false;
      bool AxKEyPCKoU = false;
      bool GAbLEIfnqw = false;
      bool PnQWTZQeQl = false;
      bool LgAGCkNLtU = false;
      bool JSfbiDDopu = false;
      bool XKYAGLfmkX = false;
      bool yWsCJZzUIT = false;
      bool uUtWmwInnP = false;
      bool WbnVNAHAAp = false;
      bool EZaVVlZcSI = false;
      bool DifWzDPCMJ = false;
      bool CrzUBWiWnI = false;
      bool RzUROUsXAB = false;
      bool WfVeLnwRWK = false;
      string mFXzuuoZFE;
      string dAjmUKhJAm;
      string OzJdNpthWL;
      string gxifCRbweT;
      string HmLuIzJqGE;
      string GfumxnuslE;
      string BHDtXgRDjC;
      string ildffamOVN;
      string gCaRFABwiO;
      string VhKaRAjQWb;
      string hFHDVTBOGV;
      string AfXYXyfkoW;
      string eUUUgAaDOf;
      string qWqteauWwk;
      string zmoMOoKlCT;
      string TyazwMklWU;
      string ryAaecndsx;
      string CJnEXrfHGq;
      string poBtMrurxR;
      string oJAarAlOhk;
      if(mFXzuuoZFE == hFHDVTBOGV){BfrEQJKWbE = true;}
      else if(hFHDVTBOGV == mFXzuuoZFE){JSfbiDDopu = true;}
      if(dAjmUKhJAm == AfXYXyfkoW){gcfeeDwGNl = true;}
      else if(AfXYXyfkoW == dAjmUKhJAm){XKYAGLfmkX = true;}
      if(OzJdNpthWL == eUUUgAaDOf){gwgbIsJMLW = true;}
      else if(eUUUgAaDOf == OzJdNpthWL){yWsCJZzUIT = true;}
      if(gxifCRbweT == qWqteauWwk){GRZUpKxwdC = true;}
      else if(qWqteauWwk == gxifCRbweT){uUtWmwInnP = true;}
      if(HmLuIzJqGE == zmoMOoKlCT){hYPrjLdUwo = true;}
      else if(zmoMOoKlCT == HmLuIzJqGE){WbnVNAHAAp = true;}
      if(GfumxnuslE == TyazwMklWU){DfAuDEzQwW = true;}
      else if(TyazwMklWU == GfumxnuslE){EZaVVlZcSI = true;}
      if(BHDtXgRDjC == ryAaecndsx){AxKEyPCKoU = true;}
      else if(ryAaecndsx == BHDtXgRDjC){DifWzDPCMJ = true;}
      if(ildffamOVN == CJnEXrfHGq){GAbLEIfnqw = true;}
      if(gCaRFABwiO == poBtMrurxR){PnQWTZQeQl = true;}
      if(VhKaRAjQWb == oJAarAlOhk){LgAGCkNLtU = true;}
      while(CJnEXrfHGq == ildffamOVN){CrzUBWiWnI = true;}
      while(poBtMrurxR == poBtMrurxR){RzUROUsXAB = true;}
      while(oJAarAlOhk == oJAarAlOhk){WfVeLnwRWK = true;}
      if(BfrEQJKWbE == true){BfrEQJKWbE = false;}
      if(gcfeeDwGNl == true){gcfeeDwGNl = false;}
      if(gwgbIsJMLW == true){gwgbIsJMLW = false;}
      if(GRZUpKxwdC == true){GRZUpKxwdC = false;}
      if(hYPrjLdUwo == true){hYPrjLdUwo = false;}
      if(DfAuDEzQwW == true){DfAuDEzQwW = false;}
      if(AxKEyPCKoU == true){AxKEyPCKoU = false;}
      if(GAbLEIfnqw == true){GAbLEIfnqw = false;}
      if(PnQWTZQeQl == true){PnQWTZQeQl = false;}
      if(LgAGCkNLtU == true){LgAGCkNLtU = false;}
      if(JSfbiDDopu == true){JSfbiDDopu = false;}
      if(XKYAGLfmkX == true){XKYAGLfmkX = false;}
      if(yWsCJZzUIT == true){yWsCJZzUIT = false;}
      if(uUtWmwInnP == true){uUtWmwInnP = false;}
      if(WbnVNAHAAp == true){WbnVNAHAAp = false;}
      if(EZaVVlZcSI == true){EZaVVlZcSI = false;}
      if(DifWzDPCMJ == true){DifWzDPCMJ = false;}
      if(CrzUBWiWnI == true){CrzUBWiWnI = false;}
      if(RzUROUsXAB == true){RzUROUsXAB = false;}
      if(WfVeLnwRWK == true){WfVeLnwRWK = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class RSPTBWBPUE
{ 
  void qmkgrVIkMO()
  { 
      bool WSjTDQWPKY = false;
      bool ojcJHWZXII = false;
      bool llqIIuqxho = false;
      bool xkKETtSYPs = false;
      bool qodVHCcgUK = false;
      bool nBoHtjbbLI = false;
      bool ZYhVaEZXoM = false;
      bool EAIOQwHVAF = false;
      bool RJcWAwwCJi = false;
      bool SpNHSRGIuD = false;
      bool bEqHFnsZqx = false;
      bool cFaFpQwKUd = false;
      bool HXOGtNmAuz = false;
      bool pzaxcMRURM = false;
      bool DVKLGMOHQC = false;
      bool UwnQuEpkNq = false;
      bool BrdqHcedcd = false;
      bool ybsIalMDzg = false;
      bool zejsdsLKCY = false;
      bool WfGZLKqTDc = false;
      string yYirDtrmyj;
      string UAfdggArrF;
      string VipgTkeoZC;
      string tyDsQMhpbq;
      string ZkxmGWMkJm;
      string coQIUOhCYS;
      string PDMuoVwlMT;
      string yKQAfklCax;
      string YsfmZFguXB;
      string dfRIbVXByj;
      string aZYonSYQcj;
      string cfbbtVXZVj;
      string nBOKoSrHYJ;
      string MkEpVyUpyG;
      string fQRnYyEpOF;
      string yyeOwYLNzV;
      string ZRqTWrbkFu;
      string BgaODWiakp;
      string NCrTKOFotx;
      string mGpcgNZyQg;
      if(yYirDtrmyj == aZYonSYQcj){WSjTDQWPKY = true;}
      else if(aZYonSYQcj == yYirDtrmyj){bEqHFnsZqx = true;}
      if(UAfdggArrF == cfbbtVXZVj){ojcJHWZXII = true;}
      else if(cfbbtVXZVj == UAfdggArrF){cFaFpQwKUd = true;}
      if(VipgTkeoZC == nBOKoSrHYJ){llqIIuqxho = true;}
      else if(nBOKoSrHYJ == VipgTkeoZC){HXOGtNmAuz = true;}
      if(tyDsQMhpbq == MkEpVyUpyG){xkKETtSYPs = true;}
      else if(MkEpVyUpyG == tyDsQMhpbq){pzaxcMRURM = true;}
      if(ZkxmGWMkJm == fQRnYyEpOF){qodVHCcgUK = true;}
      else if(fQRnYyEpOF == ZkxmGWMkJm){DVKLGMOHQC = true;}
      if(coQIUOhCYS == yyeOwYLNzV){nBoHtjbbLI = true;}
      else if(yyeOwYLNzV == coQIUOhCYS){UwnQuEpkNq = true;}
      if(PDMuoVwlMT == ZRqTWrbkFu){ZYhVaEZXoM = true;}
      else if(ZRqTWrbkFu == PDMuoVwlMT){BrdqHcedcd = true;}
      if(yKQAfklCax == BgaODWiakp){EAIOQwHVAF = true;}
      if(YsfmZFguXB == NCrTKOFotx){RJcWAwwCJi = true;}
      if(dfRIbVXByj == mGpcgNZyQg){SpNHSRGIuD = true;}
      while(BgaODWiakp == yKQAfklCax){ybsIalMDzg = true;}
      while(NCrTKOFotx == NCrTKOFotx){zejsdsLKCY = true;}
      while(mGpcgNZyQg == mGpcgNZyQg){WfGZLKqTDc = true;}
      if(WSjTDQWPKY == true){WSjTDQWPKY = false;}
      if(ojcJHWZXII == true){ojcJHWZXII = false;}
      if(llqIIuqxho == true){llqIIuqxho = false;}
      if(xkKETtSYPs == true){xkKETtSYPs = false;}
      if(qodVHCcgUK == true){qodVHCcgUK = false;}
      if(nBoHtjbbLI == true){nBoHtjbbLI = false;}
      if(ZYhVaEZXoM == true){ZYhVaEZXoM = false;}
      if(EAIOQwHVAF == true){EAIOQwHVAF = false;}
      if(RJcWAwwCJi == true){RJcWAwwCJi = false;}
      if(SpNHSRGIuD == true){SpNHSRGIuD = false;}
      if(bEqHFnsZqx == true){bEqHFnsZqx = false;}
      if(cFaFpQwKUd == true){cFaFpQwKUd = false;}
      if(HXOGtNmAuz == true){HXOGtNmAuz = false;}
      if(pzaxcMRURM == true){pzaxcMRURM = false;}
      if(DVKLGMOHQC == true){DVKLGMOHQC = false;}
      if(UwnQuEpkNq == true){UwnQuEpkNq = false;}
      if(BrdqHcedcd == true){BrdqHcedcd = false;}
      if(ybsIalMDzg == true){ybsIalMDzg = false;}
      if(zejsdsLKCY == true){zejsdsLKCY = false;}
      if(WfGZLKqTDc == true){WfGZLKqTDc = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class GMXXDHVYSL
{ 
  void rOlVOcSMWU()
  { 
      bool rpeKhDhRyP = false;
      bool wjIGyZPIYt = false;
      bool hXLCowKnOz = false;
      bool kTYTrKlqQl = false;
      bool MqHsEQKLFg = false;
      bool iDjYtUebUl = false;
      bool rsCzecKnNm = false;
      bool nYqlhpPSyX = false;
      bool lyihPgizZX = false;
      bool fJVesSnINa = false;
      bool FVyRrKMyqD = false;
      bool ELdwzsKTiy = false;
      bool tKOoHeDMrO = false;
      bool CGFWRPAQpF = false;
      bool UkIVSTeYez = false;
      bool IUZOguHIJN = false;
      bool GAFcByGGdj = false;
      bool ssdcdICsWn = false;
      bool zdgrFggppW = false;
      bool HqGbyUfeTU = false;
      string FhMOfLKDtb;
      string wDpNQKzSwI;
      string aQgTkFfQqm;
      string aIqVsFuouP;
      string PiNOSlxnIb;
      string ApjfCoArca;
      string etLGBnLTTL;
      string PKWgsrCSAz;
      string HrHPmkXLSE;
      string ECLUjUWGNd;
      string ZdTxLoTDmK;
      string lhqcTmmwTP;
      string QABOGMyCwX;
      string UuEWZcXJDx;
      string QTXISVLhAx;
      string hamxNYcEqz;
      string pRHOopdUDp;
      string OdrVzxbrwk;
      string BQBzptIGJA;
      string ASSDGzMITb;
      if(FhMOfLKDtb == ZdTxLoTDmK){rpeKhDhRyP = true;}
      else if(ZdTxLoTDmK == FhMOfLKDtb){FVyRrKMyqD = true;}
      if(wDpNQKzSwI == lhqcTmmwTP){wjIGyZPIYt = true;}
      else if(lhqcTmmwTP == wDpNQKzSwI){ELdwzsKTiy = true;}
      if(aQgTkFfQqm == QABOGMyCwX){hXLCowKnOz = true;}
      else if(QABOGMyCwX == aQgTkFfQqm){tKOoHeDMrO = true;}
      if(aIqVsFuouP == UuEWZcXJDx){kTYTrKlqQl = true;}
      else if(UuEWZcXJDx == aIqVsFuouP){CGFWRPAQpF = true;}
      if(PiNOSlxnIb == QTXISVLhAx){MqHsEQKLFg = true;}
      else if(QTXISVLhAx == PiNOSlxnIb){UkIVSTeYez = true;}
      if(ApjfCoArca == hamxNYcEqz){iDjYtUebUl = true;}
      else if(hamxNYcEqz == ApjfCoArca){IUZOguHIJN = true;}
      if(etLGBnLTTL == pRHOopdUDp){rsCzecKnNm = true;}
      else if(pRHOopdUDp == etLGBnLTTL){GAFcByGGdj = true;}
      if(PKWgsrCSAz == OdrVzxbrwk){nYqlhpPSyX = true;}
      if(HrHPmkXLSE == BQBzptIGJA){lyihPgizZX = true;}
      if(ECLUjUWGNd == ASSDGzMITb){fJVesSnINa = true;}
      while(OdrVzxbrwk == PKWgsrCSAz){ssdcdICsWn = true;}
      while(BQBzptIGJA == BQBzptIGJA){zdgrFggppW = true;}
      while(ASSDGzMITb == ASSDGzMITb){HqGbyUfeTU = true;}
      if(rpeKhDhRyP == true){rpeKhDhRyP = false;}
      if(wjIGyZPIYt == true){wjIGyZPIYt = false;}
      if(hXLCowKnOz == true){hXLCowKnOz = false;}
      if(kTYTrKlqQl == true){kTYTrKlqQl = false;}
      if(MqHsEQKLFg == true){MqHsEQKLFg = false;}
      if(iDjYtUebUl == true){iDjYtUebUl = false;}
      if(rsCzecKnNm == true){rsCzecKnNm = false;}
      if(nYqlhpPSyX == true){nYqlhpPSyX = false;}
      if(lyihPgizZX == true){lyihPgizZX = false;}
      if(fJVesSnINa == true){fJVesSnINa = false;}
      if(FVyRrKMyqD == true){FVyRrKMyqD = false;}
      if(ELdwzsKTiy == true){ELdwzsKTiy = false;}
      if(tKOoHeDMrO == true){tKOoHeDMrO = false;}
      if(CGFWRPAQpF == true){CGFWRPAQpF = false;}
      if(UkIVSTeYez == true){UkIVSTeYez = false;}
      if(IUZOguHIJN == true){IUZOguHIJN = false;}
      if(GAFcByGGdj == true){GAFcByGGdj = false;}
      if(ssdcdICsWn == true){ssdcdICsWn = false;}
      if(zdgrFggppW == true){zdgrFggppW = false;}
      if(HqGbyUfeTU == true){HqGbyUfeTU = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class AQKOMOYPPY
{ 
  void skSVoxVRKd()
  { 
      bool nJiPdEARoC = false;
      bool lUBUrjLVfx = false;
      bool WmtCAmXKOf = false;
      bool bkYfujyakZ = false;
      bool QYPzgCEnCL = false;
      bool jDyGMBPgOq = false;
      bool foDIZBuUZH = false;
      bool ljkFgyWtUx = false;
      bool hjICwYlSTt = false;
      bool UQLtsaVHYf = false;
      bool GjNtZzSrZO = false;
      bool eUMRIufAMA = false;
      bool OcBelUXqMF = false;
      bool cPVoqyVNcw = false;
      bool GtrEPAEtly = false;
      bool tUtYRdhiHE = false;
      bool aafUlPzWZJ = false;
      bool YSXQtUkwPl = false;
      bool PdFOKHUwXM = false;
      bool PmFXUeNWSA = false;
      string XGDRWzFWJd;
      string cFGXumAxoO;
      string SUWfzMcXOM;
      string UimGffePoM;
      string PBzDJXuXkt;
      string qoBYCCiXSJ;
      string WhHwItSArO;
      string HjIcyQVSVa;
      string QElUVfhODd;
      string xHwephsCuP;
      string FufWmGfXZk;
      string fPBqrRwmZc;
      string LDwNRzncmP;
      string WSXFVVXOhP;
      string zKnSxgFFlX;
      string lGcSEByRFm;
      string SCkJONrwVW;
      string sgFKcBPdQj;
      string thqOdQpFBT;
      string WGItwwYdEj;
      if(XGDRWzFWJd == FufWmGfXZk){nJiPdEARoC = true;}
      else if(FufWmGfXZk == XGDRWzFWJd){GjNtZzSrZO = true;}
      if(cFGXumAxoO == fPBqrRwmZc){lUBUrjLVfx = true;}
      else if(fPBqrRwmZc == cFGXumAxoO){eUMRIufAMA = true;}
      if(SUWfzMcXOM == LDwNRzncmP){WmtCAmXKOf = true;}
      else if(LDwNRzncmP == SUWfzMcXOM){OcBelUXqMF = true;}
      if(UimGffePoM == WSXFVVXOhP){bkYfujyakZ = true;}
      else if(WSXFVVXOhP == UimGffePoM){cPVoqyVNcw = true;}
      if(PBzDJXuXkt == zKnSxgFFlX){QYPzgCEnCL = true;}
      else if(zKnSxgFFlX == PBzDJXuXkt){GtrEPAEtly = true;}
      if(qoBYCCiXSJ == lGcSEByRFm){jDyGMBPgOq = true;}
      else if(lGcSEByRFm == qoBYCCiXSJ){tUtYRdhiHE = true;}
      if(WhHwItSArO == SCkJONrwVW){foDIZBuUZH = true;}
      else if(SCkJONrwVW == WhHwItSArO){aafUlPzWZJ = true;}
      if(HjIcyQVSVa == sgFKcBPdQj){ljkFgyWtUx = true;}
      if(QElUVfhODd == thqOdQpFBT){hjICwYlSTt = true;}
      if(xHwephsCuP == WGItwwYdEj){UQLtsaVHYf = true;}
      while(sgFKcBPdQj == HjIcyQVSVa){YSXQtUkwPl = true;}
      while(thqOdQpFBT == thqOdQpFBT){PdFOKHUwXM = true;}
      while(WGItwwYdEj == WGItwwYdEj){PmFXUeNWSA = true;}
      if(nJiPdEARoC == true){nJiPdEARoC = false;}
      if(lUBUrjLVfx == true){lUBUrjLVfx = false;}
      if(WmtCAmXKOf == true){WmtCAmXKOf = false;}
      if(bkYfujyakZ == true){bkYfujyakZ = false;}
      if(QYPzgCEnCL == true){QYPzgCEnCL = false;}
      if(jDyGMBPgOq == true){jDyGMBPgOq = false;}
      if(foDIZBuUZH == true){foDIZBuUZH = false;}
      if(ljkFgyWtUx == true){ljkFgyWtUx = false;}
      if(hjICwYlSTt == true){hjICwYlSTt = false;}
      if(UQLtsaVHYf == true){UQLtsaVHYf = false;}
      if(GjNtZzSrZO == true){GjNtZzSrZO = false;}
      if(eUMRIufAMA == true){eUMRIufAMA = false;}
      if(OcBelUXqMF == true){OcBelUXqMF = false;}
      if(cPVoqyVNcw == true){cPVoqyVNcw = false;}
      if(GtrEPAEtly == true){GtrEPAEtly = false;}
      if(tUtYRdhiHE == true){tUtYRdhiHE = false;}
      if(aafUlPzWZJ == true){aafUlPzWZJ = false;}
      if(YSXQtUkwPl == true){YSXQtUkwPl = false;}
      if(PdFOKHUwXM == true){PdFOKHUwXM = false;}
      if(PmFXUeNWSA == true){PmFXUeNWSA = false;}
    } 
}; 
