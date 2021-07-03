#include <charconv>
#include <functional>
#include <string>

#include "imgui/imgui.h"

#ifdef _WIN32
#include <intrin.h>
#include <Windows.h>
#include <Psapi.h>

#include "imgui/imgui_impl_dx9.h"
#include "imgui/imgui_impl_win32.h"

#include "MinHook/MinHook.h"
#elif __linux__
#include <sys/mman.h>
#include <unistd.h>

#include <SDL2/SDL.h>

#include "imgui/GL/gl3w.h"
#include "imgui/imgui_impl_sdl.h"
#include "imgui/imgui_impl_opengl3.h"
#endif

#include "Config.h"
#include "EventListener.h"
#include "GameData.h"
#include "GUI.h"
#include "Hooks.h"
#include "Interfaces.h"
#include "Memory.h"

#include "Hacks/Aimbot.h"
#include "Hacks/AntiAim.h"
#include "Hacks/Backtrack.h"
#include "Hacks/Chams.h"
#include "Hacks/EnginePrediction.h"
#include "Hacks/StreamProofESP.h"
#include "Hacks/Glow.h"
#include "Hacks/Misc.h"
#include "Hacks/InventoryChanger.h"
#include "Hacks/Sound.h"
#include "Hacks/Triggerbot.h"
#include "Hacks/Visuals.h"

#include "SDK/ClientClass.h"
#include "SDK/Cvar.h"
#include "SDK/Engine.h"
#include "SDK/Entity.h"
#include "SDK/EntityList.h"
#include "SDK/FrameStage.h"
#include "SDK/GameEvent.h"
#include "SDK/GameUI.h"
#include "SDK/GlobalVars.h"
#include "SDK/InputSystem.h"
#include "SDK/ItemSchema.h"
#include "SDK/LocalPlayer.h"
#include "SDK/MaterialSystem.h"
#include "SDK/ModelRender.h"
#include "SDK/Platform.h"
#include "SDK/RenderContext.h"
#include "SDK/SoundInfo.h"
#include "SDK/SoundEmitter.h"
#include "SDK/StudioRender.h"
#include "SDK/Surface.h"
#include "SDK/UserCmd.h"

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class dgmflyg {
public:
    int mvmqemqvreoz;
    string pgaqfakibzopfq;
    string qyawrvfxnvrc;
    string wzunjaccnt;
    bool cpbfkupkpxp;
    dgmflyg();
    bool tmkelzevvamicuvcsgsdyqbok(string ngetfyivgde, string kbpdqmfq, int acnlfxfrdifihg, bool mxydyptg);
    double izviuvnesodopofmdg(bool cvfesosg, string mdnknse, int lhjnmpforgbz, string njmgxbgjmep, bool zabkcecworye, string pnoruvaxav, bool xrfgklepm, double wsaeqqsugw, bool urfdlzhd, double kskqtkjgt);
    bool ccoitlyphjeymiv(string wqkvtyrcxr);
    string pasrkwejgceb(bool xcbvsmtivcp, int nkvxva, double qagiasbepagkwtj, bool mfaiwfwwscvp, double uwbogddqlbb, string wcqnhgioczcpbvu);
    string ygdjxgjpekrsskoz(int jqakhavefzgva, int gdvgnoxhipl, double fqqxbbtsv, int lvbpg, double cgaqqvecielmmia, int zhhvnziwhb, double lrushv, bool ryqwiglg, string jcrboeohibulqp, string anvjvjdbz);
    void qmshuodcutwrzi(int ioaeorwevnivel, int qsgxrxzmrfu);
    double bjnlvhrowoymmgziicceuzg(string hpsnxdwhktntivh, double lmthfqovazwtwg);
    string nwzldflivsjunbzc(double ckndxtcsyy, bool qtvahhgvgtdxav, string jrhxfzuzfmnwvru, double wmgwor, string srfbcxers, string rozunmygy, bool ztvpajqsu);

protected:
    string vxojwb;
    string cptudycjtx;

    void zzhhcicmptyteis(double rzqesfroa, bool mpzkot, int zvldbayehucojsg, string yogfk);
    double rbrhbtpjxtqhnwnuiq(string tspunihmckugbmf, int ynvferqlewzocg, double deezutmqjq, string lkifiezs, double hcfozrxoh, int lfxcvjpi, double cjgwk);
    string xbnukwxaywybzslwdyhlh(string thsyuax, bool smezpzubkkx, string vwqbuis, bool bjihs, string lpigaopceytf, int nlyrdsmtc, string ihxeuaxgvfvje);
    string cponhmkyhlewmtmuodzmg(double wdvejmlku, bool bonrvt, double xwyhdk, bool xoxveyzbb, string vqattefogjh, double qzeemcj);
    void ohdotwyzctkymabxgmav();
    double epbwgysfkqcmdamzctplow(double lcsbepwpwmrnb, bool ftnstscqc, bool kjslf);
    string msbzumvddknsf(int zfhbaydudf, bool lbsxc, bool euimiiuhibbtqa, bool apjclonttor, double nxhwlqu, double mmsxyrusshbwm, int pmewajlhphmopdv);

private:
    bool gugdp;
    double jskildpwduvp;
    double xlddrca;
    int aoypvnratiaz;

    double voyebazwxel(double agpouxpq, double bsmbjmswpjfjvvk, int bthhaumpr, double wcjtwipmjlogfhe, int ehxtsoz, int pczibvloc, string vgabjdekw, string vlfnsjdetgtaymz);
    bool vhgjlrydzgmyjkjdtj(int uuspuysmvrqxfzj, double arnegp, bool rhiabjgdmuf);
    void wxexeaybpshvgzbf(double murbe, int aggayg, double vvqgohziecal, double kopczosgc, bool pephydmvbpbo, string lxxekcufnwi, string cypyjcibaphl);
    string kbevvvgjldffbbvueegjuhh(string lpvymw, int eupphbtbwqiync, double laweiaollcwor, int csfqozqt);
    int iiodggsrttjdrgoyljf(double ygbnjnmgzs, string uojdnbtp, double vydiszvhb, string oxokckuopr, string xofdbomhss, bool lskeqfcrjiytjq, double ubmji, double vnmnvpplglc);

};




double dgmflyg::voyebazwxel(double agpouxpq, double bsmbjmswpjfjvvk, int bthhaumpr, double wcjtwipmjlogfhe, int ehxtsoz, int pczibvloc, string vgabjdekw, string vlfnsjdetgtaymz) {
    bool aitxbafam = true;
    double ohdgqgpzpf = 27949;
    string wlvzttyrsiuas = "nocmxvgekzjsnckylwprwwajqtothfdatbjshmoopxmnnqcqyorhnriqaktxhjm";
    int lskgfynbb = 4005;
    double fntgocwwcvygvkr = 11087;
    if (11087 != 11087) {
        int vyz;
        for (vyz = 49; vyz > 0; vyz--) {
            continue;
        }
    }
    return 47772;
}

bool dgmflyg::vhgjlrydzgmyjkjdtj(int uuspuysmvrqxfzj, double arnegp, bool rhiabjgdmuf) {
    double upmghbnobwxp = 50320;
    bool gtbydgcg = true;
    if (true != true) {
        int fecrh;
        for (fecrh = 35; fecrh > 0; fecrh--) {
            continue;
        }
    }
    if (true == true) {
        int rfhz;
        for (rfhz = 49; rfhz > 0; rfhz--) {
            continue;
        }
    }
    if (50320 != 50320) {
        int cpnge;
        for (cpnge = 27; cpnge > 0; cpnge--) {
            continue;
        }
    }
    if (true == true) {
        int rrucrw;
        for (rrucrw = 79; rrucrw > 0; rrucrw--) {
            continue;
        }
    }
    return false;
}

void dgmflyg::wxexeaybpshvgzbf(double murbe, int aggayg, double vvqgohziecal, double kopczosgc, bool pephydmvbpbo, string lxxekcufnwi, string cypyjcibaphl) {
    double ltsjymtumryztx = 1856;
    if (1856 != 1856) {
        int afotbgh;
        for (afotbgh = 94; afotbgh > 0; afotbgh--) {
            continue;
        }
    }
    if (1856 != 1856) {
        int sfhaiprz;
        for (sfhaiprz = 73; sfhaiprz > 0; sfhaiprz--) {
            continue;
        }
    }
    if (1856 != 1856) {
        int dlnnpb;
        for (dlnnpb = 89; dlnnpb > 0; dlnnpb--) {
            continue;
        }
    }
    if (1856 != 1856) {
        int pw;
        for (pw = 70; pw > 0; pw--) {
            continue;
        }
    }

}

string dgmflyg::kbevvvgjldffbbvueegjuhh(string lpvymw, int eupphbtbwqiync, double laweiaollcwor, int csfqozqt) {
    double hqdsvt = 6726;
    double wbmtidvhza = 28502;
    string hucweyg = "mxfqjwtidznqdvslbrfw";
    double ubxygxbhjix = 26033;
    bool hqczzpdsepmld = false;
    if (28502 == 28502) {
        int tvxvyh;
        for (tvxvyh = 90; tvxvyh > 0; tvxvyh--) {
            continue;
        }
    }
    if (26033 == 26033) {
        int wclkiccecy;
        for (wclkiccecy = 33; wclkiccecy > 0; wclkiccecy--) {
            continue;
        }
    }
    if (string("mxfqjwtidznqdvslbrfw") != string("mxfqjwtidznqdvslbrfw")) {
        int zmb;
        for (zmb = 7; zmb > 0; zmb--) {
            continue;
        }
    }
    return string("rdmbhirwgonvzubm");
}

int dgmflyg::iiodggsrttjdrgoyljf(double ygbnjnmgzs, string uojdnbtp, double vydiszvhb, string oxokckuopr, string xofdbomhss, bool lskeqfcrjiytjq, double ubmji, double vnmnvpplglc) {
    double wmmdskuxae = 11090;
    int hfwoxgch = 322;
    string iqbajpxgdkf = "wbrgjymaeeufbtnrabcpdnnysfzgvmdcnhaqhf";
    double nlxacypcegcdevn = 2653;
    double fgkckjmevx = 10518;
    bool hxvdlcjm = false;
    string qawmt = "prxldtljzlsoyftdpkcexn";
    bool hcyqughvertx = true;
    string erlykjgyujmfdjs = "qkyinqvdyl";
    if (2653 == 2653) {
        int iyfjdjpkvp;
        for (iyfjdjpkvp = 70; iyfjdjpkvp > 0; iyfjdjpkvp--) {
            continue;
        }
    }
    if (true != true) {
        int qvhsbks;
        for (qvhsbks = 17; qvhsbks > 0; qvhsbks--) {
            continue;
        }
    }
    if (11090 != 11090) {
        int aekn;
        for (aekn = 82; aekn > 0; aekn--) {
            continue;
        }
    }
    if (10518 == 10518) {
        int ng;
        for (ng = 86; ng > 0; ng--) {
            continue;
        }
    }
    return 91539;
}

void dgmflyg::zzhhcicmptyteis(double rzqesfroa, bool mpzkot, int zvldbayehucojsg, string yogfk) {
    int djpftqgdrvedsul = 706;
    int ohyks = 3608;
    bool pwaciogwu = true;
    bool jjtdcy = false;
    bool nuwiwtph = false;
    if (true != true) {
        int hu;
        for (hu = 9; hu > 0; hu--) {
            continue;
        }
    }
    if (true == true) {
        int delwk;
        for (delwk = 0; delwk > 0; delwk--) {
            continue;
        }
    }
    if (false != false) {
        int xspnhus;
        for (xspnhus = 93; xspnhus > 0; xspnhus--) {
            continue;
        }
    }

}

double dgmflyg::rbrhbtpjxtqhnwnuiq(string tspunihmckugbmf, int ynvferqlewzocg, double deezutmqjq, string lkifiezs, double hcfozrxoh, int lfxcvjpi, double cjgwk) {
    int zambvcxm = 7703;
    string uanmhcn = "njpkktfxpmtlbxw";
    int ggtid = 1037;
    double gkkohejvhw = 16999;
    bool cvjkshj = true;
    double vfkdbsrp = 10138;
    bool imoyoxflgn = true;
    double nqytue = 27639;
    double ohdiwcxdtgvjwck = 34976;
    return 50255;
}

string dgmflyg::xbnukwxaywybzslwdyhlh(string thsyuax, bool smezpzubkkx, string vwqbuis, bool bjihs, string lpigaopceytf, int nlyrdsmtc, string ihxeuaxgvfvje) {
    bool vtenbzjnd = false;
    bool uitelrfl = false;
    bool eznga = false;
    double scqriop = 11640;
    int jyuujfeamp = 327;
    bool ayjndzgnxiufzc = true;
    int ytljpdmilpdyyt = 1968;
    bool ssqpcnyizekmyk = false;
    if (327 == 327) {
        int czvktc;
        for (czvktc = 37; czvktc > 0; czvktc--) {
            continue;
        }
    }
    if (1968 == 1968) {
        int gg;
        for (gg = 85; gg > 0; gg--) {
            continue;
        }
    }
    if (false == false) {
        int mlbhacg;
        for (mlbhacg = 31; mlbhacg > 0; mlbhacg--) {
            continue;
        }
    }
    return string("");
}

string dgmflyg::cponhmkyhlewmtmuodzmg(double wdvejmlku, bool bonrvt, double xwyhdk, bool xoxveyzbb, string vqattefogjh, double qzeemcj) {
    double xhquskn = 23853;
    double ekkmjpk = 89937;
    bool qumagujidbxt = false;
    if (false == false) {
        int zyck;
        for (zyck = 30; zyck > 0; zyck--) {
            continue;
        }
    }
    if (23853 == 23853) {
        int xkh;
        for (xkh = 13; xkh > 0; xkh--) {
            continue;
        }
    }
    return string("lbzmckzgiljimuydp");
}

void dgmflyg::ohdotwyzctkymabxgmav() {
    string qsynmvxhmisn = "pxuapmkmuwzpwzpereoitshshtesbgydqeocuuldey";
    string uvhlctntfwz = "nfmwjxanmjklephzcldmjsasrcnqcagipelnopyugxrloantucxvxrdxeymazfdvgxmhitjknzqrregislfttkqcuipnjqjzb";
    string baxxnnom = "hfajtiahcyguxythywyepnlkwy";
    bool ehqzofyx = true;
    bool fhqskgopdwscjgn = true;
    double cwkpykkvex = 46572;
    bool crpbvvs = true;
    int bqnirsjhh = 2428;
    string cndjuvttw = "bcvnvwuclvklncvhhobgnffp";
    if (true != true) {
        int zlximoq;
        for (zlximoq = 75; zlximoq > 0; zlximoq--) {
            continue;
        }
    }
    if (true == true) {
        int shhzp;
        for (shhzp = 17; shhzp > 0; shhzp--) {
            continue;
        }
    }
    if (46572 == 46572) {
        int dxmqm;
        for (dxmqm = 70; dxmqm > 0; dxmqm--) {
            continue;
        }
    }

}

double dgmflyg::epbwgysfkqcmdamzctplow(double lcsbepwpwmrnb, bool ftnstscqc, bool kjslf) {
    string filsdul = "calchjyrrvykfsijemakutsspuymjhwspnymppmxghsxbphoehoogvrpfamdahkmelcjy";
    int ukilxzqtdokoxwl = 722;
    bool zkgirdnziigiglx = false;
    double utaudyihfwtfbtf = 6452;
    if (6452 != 6452) {
        int htsdoamjr;
        for (htsdoamjr = 89; htsdoamjr > 0; htsdoamjr--) {
            continue;
        }
    }
    if (6452 != 6452) {
        int jozxc;
        for (jozxc = 3; jozxc > 0; jozxc--) {
            continue;
        }
    }
    if (722 != 722) {
        int iwtwumiri;
        for (iwtwumiri = 46; iwtwumiri > 0; iwtwumiri--) {
            continue;
        }
    }
    if (722 == 722) {
        int grcbzgzkd;
        for (grcbzgzkd = 32; grcbzgzkd > 0; grcbzgzkd--) {
            continue;
        }
    }
    if (722 == 722) {
        int mpe;
        for (mpe = 75; mpe > 0; mpe--) {
            continue;
        }
    }
    return 19596;
}

string dgmflyg::msbzumvddknsf(int zfhbaydudf, bool lbsxc, bool euimiiuhibbtqa, bool apjclonttor, double nxhwlqu, double mmsxyrusshbwm, int pmewajlhphmopdv) {
    bool wytzpagk = true;
    double zjdbgbyw = 53932;
    double zjlmwwayaejqb = 18746;
    int ylqos = 6070;
    double zogyssnhgokhrc = 17816;
    string orwvuc = "ouptclfgcloauroalghkkggjlylshsfpecsgzkhauooavubocpmoyscdjxmooidawncoiker";
    if (true != true) {
        int qlbtekuhx;
        for (qlbtekuhx = 57; qlbtekuhx > 0; qlbtekuhx--) {
            continue;
        }
    }
    if (6070 != 6070) {
        int ggeogehjo;
        for (ggeogehjo = 21; ggeogehjo > 0; ggeogehjo--) {
            continue;
        }
    }
    if (53932 == 53932) {
        int fiijvgo;
        for (fiijvgo = 43; fiijvgo > 0; fiijvgo--) {
            continue;
        }
    }
    return string("hfipzosasoa");
}

bool dgmflyg::tmkelzevvamicuvcsgsdyqbok(string ngetfyivgde, string kbpdqmfq, int acnlfxfrdifihg, bool mxydyptg) {
    bool nszovym = true;
    double rfzeo = 20847;
    int guzysj = 3331;
    int tkrysmgywsi = 2474;
    double odyblys = 15694;
    double uqgeyfenratpxl = 37468;
    double spdtxwwoz = 14108;
    double lifsbyusuvq = 31536;
    if (2474 == 2474) {
        int gvuj;
        for (gvuj = 1; gvuj > 0; gvuj--) {
            continue;
        }
    }
    if (2474 == 2474) {
        int mbq;
        for (mbq = 61; mbq > 0; mbq--) {
            continue;
        }
    }
    if (20847 == 20847) {
        int hmbo;
        for (hmbo = 25; hmbo > 0; hmbo--) {
            continue;
        }
    }
    if (2474 == 2474) {
        int xrinceby;
        for (xrinceby = 91; xrinceby > 0; xrinceby--) {
            continue;
        }
    }
    return false;
}

double dgmflyg::izviuvnesodopofmdg(bool cvfesosg, string mdnknse, int lhjnmpforgbz, string njmgxbgjmep, bool zabkcecworye, string pnoruvaxav, bool xrfgklepm, double wsaeqqsugw, bool urfdlzhd, double kskqtkjgt) {
    return 67942;
}

bool dgmflyg::ccoitlyphjeymiv(string wqkvtyrcxr) {
    double wzwqkuws = 3312;
    double ulkdwllfb = 6446;
    int culevplpnagbyfv = 7402;
    bool vfhghetedkgzci = true;
    string nvyxaddsaqfzj = "qtvitlvqsmtddteslqsjzmahflaadvnkjbiukdlmjwhvikmubsfuvoqqsje";
    bool iqjgkx = true;
    double jenmkcgcjch = 38196;
    int mtnmnznbhqdr = 2925;
    string ncbqogtlpfz = "ftixliggirzbydvsrjslfatcwxxvhtybbscevzkzmtkootahrqemgqbyitkfdjueixywiznbbkwrdcweeyxmqjjtzpw";
    int fywqroiyx = 2316;
    if (true == true) {
        int dl;
        for (dl = 28; dl > 0; dl--) {
            continue;
        }
    }
    if (6446 == 6446) {
        int yhshhkji;
        for (yhshhkji = 35; yhshhkji > 0; yhshhkji--) {
            continue;
        }
    }
    if (3312 == 3312) {
        int imxbupv;
        for (imxbupv = 37; imxbupv > 0; imxbupv--) {
            continue;
        }
    }
    if (7402 != 7402) {
        int twdtzufq;
        for (twdtzufq = 95; twdtzufq > 0; twdtzufq--) {
            continue;
        }
    }
    if (true == true) {
        int qnmdy;
        for (qnmdy = 47; qnmdy > 0; qnmdy--) {
            continue;
        }
    }
    return false;
}

string dgmflyg::pasrkwejgceb(bool xcbvsmtivcp, int nkvxva, double qagiasbepagkwtj, bool mfaiwfwwscvp, double uwbogddqlbb, string wcqnhgioczcpbvu) {
    double vvhnpklvim = 1039;
    string jcuxakz = "xrzkxzdjyhwpangqpqsxtqhusajtdgcexafmouzoqhdmxdpfteojsupknaltoqngigtdcgkpduswxjkze";
    bool cyvvrh = true;
    string aqqmxgftctcsh = "vyogegmtxeyewfbuykuk";
    bool jjhtapugyccc = true;
    double ijjcowntzvv = 45100;
    double ntlippglhampps = 13818;
    if (true != true) {
        int hmox;
        for (hmox = 34; hmox > 0; hmox--) {
            continue;
        }
    }
    if (string("xrzkxzdjyhwpangqpqsxtqhusajtdgcexafmouzoqhdmxdpfteojsupknaltoqngigtdcgkpduswxjkze") == string("xrzkxzdjyhwpangqpqsxtqhusajtdgcexafmouzoqhdmxdpfteojsupknaltoqngigtdcgkpduswxjkze")) {
        int kwpfcznvv;
        for (kwpfcznvv = 82; kwpfcznvv > 0; kwpfcznvv--) {
            continue;
        }
    }
    if (true != true) {
        int hwupexf;
        for (hwupexf = 58; hwupexf > 0; hwupexf--) {
            continue;
        }
    }
    return string("y");
}

string dgmflyg::ygdjxgjpekrsskoz(int jqakhavefzgva, int gdvgnoxhipl, double fqqxbbtsv, int lvbpg, double cgaqqvecielmmia, int zhhvnziwhb, double lrushv, bool ryqwiglg, string jcrboeohibulqp, string anvjvjdbz) {
    bool wynuies = true;
    int kcdoazxm = 644;
    return string("xoaorkkmsy");
}

void dgmflyg::qmshuodcutwrzi(int ioaeorwevnivel, int qsgxrxzmrfu) {
    string gztpylassuoqns = "mauiaoudxglxmvkrelnhyceadcvuwxzgwysfpkphxbbqblkohokrc";
    double plvmqwzzaprrfqh = 66637;
    if (66637 == 66637) {
        int zkhkfij;
        for (zkhkfij = 95; zkhkfij > 0; zkhkfij--) {
            continue;
        }
    }
    if (66637 == 66637) {
        int iugl;
        for (iugl = 5; iugl > 0; iugl--) {
            continue;
        }
    }
    if (string("mauiaoudxglxmvkrelnhyceadcvuwxzgwysfpkphxbbqblkohokrc") == string("mauiaoudxglxmvkrelnhyceadcvuwxzgwysfpkphxbbqblkohokrc")) {
        int hhcc;
        for (hhcc = 19; hhcc > 0; hhcc--) {
            continue;
        }
    }

}

double dgmflyg::bjnlvhrowoymmgziicceuzg(string hpsnxdwhktntivh, double lmthfqovazwtwg) {
    double gzcioydc = 11822;
    int lefpoutjlenw = 3302;
    int ddyfzfzg = 6024;
    int swnbyschdpzlwok = 2705;
    double gbmsohg = 12549;
    bool cilfgv = true;
    int twxyl = 2017;
    int tdcji = 3400;
    if (12549 == 12549) {
        int kjrytqwwht;
        for (kjrytqwwht = 28; kjrytqwwht > 0; kjrytqwwht--) {
            continue;
        }
    }
    if (3400 == 3400) {
        int ruadj;
        for (ruadj = 89; ruadj > 0; ruadj--) {
            continue;
        }
    }
    if (true == true) {
        int jezsej;
        for (jezsej = 65; jezsej > 0; jezsej--) {
            continue;
        }
    }
    return 73997;
}

string dgmflyg::nwzldflivsjunbzc(double ckndxtcsyy, bool qtvahhgvgtdxav, string jrhxfzuzfmnwvru, double wmgwor, string srfbcxers, string rozunmygy, bool ztvpajqsu) {
    double pxmyqnaoq = 60361;
    string hsbkyg = "pvnerwyeihlqxwpromqtwyhqimdwnrctlnoeslfymsenmqlwlvslzrjqcrmqzzskhrzxdisoliwuxorfjdb";
    int huyaf = 5704;
    int fstotels = 2383;
    if (2383 != 2383) {
        int yono;
        for (yono = 0; yono > 0; yono--) {
            continue;
        }
    }
    return string("tvthco");
}

dgmflyg::dgmflyg() {
    this->tmkelzevvamicuvcsgsdyqbok(string("elzol"), string("ivqvtprxtzykgbfwsskfzrazng"), 4355, true);
    this->izviuvnesodopofmdg(false, string("vsdybezkqorwkczxwcgajuqmemmiewkdkavamfhhmdvxdkomjro"), 1473, string("yxmmoatyxaxvvzzvozzwtebnbqacoelvejerzjcjtyoqgbrklndidvcbntvlhygmfrtgvsftxgfzfsckbivojshiihowk"), false, string(""), true, 14447, false, 12349);
    this->ccoitlyphjeymiv(string("vpzxrvilpsnyksltdxqggwjtqmulpnunkskrkomcotlcoxcwtomggcjtgcnttvimfxagninagdkqvcjumlbwinp"));
    this->pasrkwejgceb(false, 6823, 36334, false, 41718, string("iovuymktrdkhlaclsjnl"));
    this->ygdjxgjpekrsskoz(489, 1481, 53157, 694, 14828, 5322, 66295, true, string("xodgwmphicjt"), string("oglqecrxsltzcxcxz"));
    this->qmshuodcutwrzi(5851, 3371);
    this->bjnlvhrowoymmgziicceuzg(string("qtwccz"), 30016);
    this->nwzldflivsjunbzc(70835, true, string("hvopdaqocblohkjnlmivdcgpgqwhxgrakpetxzehkgesjnlnekuzboglesltafxwxabfytrtpbgpkzuvuykuzxuhycxwhgwcrxr"), 53777, string("tgeeoqdnxqflsaijjodnzkswisqoeigbojnolwvvbiftqjtlgmivpctpzvozacryotrkdzqcndnw"), string("weqystqvnmxgphlgckhwkbanbahbvsbbyyqrabjbxskujcfasyzuejgoinaveghg"), false);
    this->zzhhcicmptyteis(43524, false, 577, string("sxhqdqwxzbziptepquclecqfajagejbtcipemmbzlfbpyxoexglwoyeeeoilzxwhfopbpnbugjnnnn"));
    this->rbrhbtpjxtqhnwnuiq(string("quyoqrjzbhdxinkhqdx"), 7714, 25410, string("pedbywkxpvygdaisfmlgfncdjrfznkanf"), 340, 766, 7521);
    this->xbnukwxaywybzslwdyhlh(string("kfioafkigczphyzlpzryahzznkjsrplqkrsvhpyvikyetrdwcnryzdptqtaflyhtvqfuogdlyyadegbefhovgeivoj"), false, string("oopxzuoiyuzimdcd"), true, string("hykpdqwfflddugzihqtaqfjcyqthozedkgspxsmkbgffqgoikszvhn"), 2603, string("wzclgvjseakszhlyvshtaegcsshvajdjlhaxbyveqqqexrvczlsnvxltnlu"));
    this->cponhmkyhlewmtmuodzmg(22478, false, 25015, true, string("nffhnbw"), 28159);
    this->ohdotwyzctkymabxgmav();
    this->epbwgysfkqcmdamzctplow(8213, false, false);
    this->msbzumvddknsf(1055, false, false, false, 40234, 33313, 6427);
    this->voyebazwxel(70860, 4527, 6507, 8201, 4456, 6791, string("iwokcabhaxtyjxvfmnylctuxswjrsddaeklelbialgcxfbocizlzemovqft"), string("bhgeozrqxqavmgptpnsvwfbqdnxzdyxzfexutb"));
    this->vhgjlrydzgmyjkjdtj(48, 79775, false);
    this->wxexeaybpshvgzbf(58042, 4902, 32184, 48879, false, string("xsnabottozwmrqdillogejttyxaxesnohgebrbejlecmkmcyeksdoyjqxseyimtncbufrjuikexafkpopilwhaowpmnf"), string("prqwosekvlpaqxbptmjvzcrcngxkqohnpllzpxhsnfhwabqvpkofwgiesouvarkyyncbmqbbylzdhuanfdk"));
    this->kbevvvgjldffbbvueegjuhh(string("oznllymvqptni"), 233, 18207, 4992);
    this->iiodggsrttjdrgoyljf(44141, string("ntxzwlonxlxwkbubohthzercnwpnlzdfbniglxmxvozevfsvtuygapzhypzmhbkysiwmrsavlstnmlguunxwnqy"), 4779, string("rbtbgellhhsfsvgilqtzojwmigfsoyqiasbwygbgrcxqnzcrgwpjlcumrgvpvedudbxevddnhiejqxwyadykkigth"), string("erpagbuotvmmoetuniepsgxlzhpvgpkasbtrtvxtcwdgahgeyqlxfrdjdfnppuxsrn"), true, 36874, 18628);
}




#ifdef _WIN32

LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

static LRESULT __stdcall wndProc(HWND window, UINT msg, WPARAM wParam, LPARAM lParam) noexcept
{
    [[maybe_unused]] static const auto once = [](HWND window) noexcept {
        Netvars::init();
        EventListener::init();

        ImGui::CreateContext();
        ImGui_ImplWin32_Init(window);
        config = std::make_unique<Config>();
        gui = std::make_unique<GUI>();

        hooks->install();

        return true;
    }(window);

    ImGui_ImplWin32_WndProcHandler(window, msg, wParam, lParam);
    interfaces->inputSystem->enableInput(!gui->isOpen());

    return CallWindowProcW(hooks->originalWndProc, window, msg, wParam, lParam);
}

static HRESULT __stdcall present(IDirect3DDevice9* device, const RECT* src, const RECT* dest, HWND windowOverride, const RGNDATA* dirtyRegion) noexcept
{
    [[maybe_unused]] static bool imguiInit{ ImGui_ImplDX9_Init(device) };

    if (config->loadScheduledFonts())
        ImGui_ImplDX9_DestroyFontsTexture();

    ImGui_ImplDX9_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    StreamProofESP::render();
    Misc::purchaseList();
    Misc::noscopeCrosshair(ImGui::GetBackgroundDrawList());
    Misc::recoilCrosshair(ImGui::GetBackgroundDrawList());
    Misc::drawOffscreenEnemies(ImGui::GetBackgroundDrawList());
    Misc::drawBombTimer();
    Misc::spectatorList();
    Visuals::hitMarker(nullptr, ImGui::GetBackgroundDrawList());
    Visuals::drawMolotovHull(ImGui::GetBackgroundDrawList());
    Misc::watermark();

    Aimbot::updateInput();
    Visuals::updateInput();
    StreamProofESP::updateInput();
    Misc::updateInput();
    Triggerbot::updateInput();
    Chams::updateInput();
    Glow::updateInput();

    gui->handleToggle();

    if (gui->isOpen())
        gui->render();

    ImGui::EndFrame();
    ImGui::Render();

    if (device->BeginScene() == D3D_OK) {
        ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
        device->EndScene();
    }
    
    GameData::clearUnusedAvatars();
    InventoryChanger::clearUnusedItemIconTextures();

    return hooks->originalPresent(device, src, dest, windowOverride, dirtyRegion);
}

static HRESULT __stdcall reset(IDirect3DDevice9* device, D3DPRESENT_PARAMETERS* params) noexcept
{
    ImGui_ImplDX9_InvalidateDeviceObjects();
    InventoryChanger::clearItemIconTextures();
    GameData::clearTextures();
    return hooks->originalReset(device, params);
}

#endif

static bool __STDCALL createMove(LINUX_ARGS(void* thisptr,) float inputSampleTime, UserCmd* cmd) noexcept
{
    auto result = hooks->clientMode.callOriginal<bool, WIN32_LINUX(24, 25)>(inputSampleTime, cmd);

    if (!cmd->commandNumber)
        return result;

#ifdef _WIN32
    bool& sendPacket = *reinterpret_cast<bool*>(*reinterpret_cast<std::uintptr_t*>(FRAME_ADDRESS()) - 0x1C);
#else
    bool dummy;
    bool& sendPacket = dummy;
#endif

    static auto previousViewAngles{ cmd->viewangles };
    const auto currentViewAngles{ cmd->viewangles };

    memory->globalVars->serverTime(cmd);
    Misc::nadePredict();
    Misc::antiAfkKick(cmd);
    Misc::fastStop(cmd);
    Misc::prepareRevolver(cmd);
    Visuals::removeShadows();
    Misc::runReportbot();
    Misc::bunnyHop(cmd);
    Misc::autoStrafe(cmd);
    Misc::removeCrouchCooldown(cmd);
    Misc::autoPistol(cmd);
    Misc::autoReload(cmd);
    Misc::updateClanTag();
    Misc::fakeBan();
    Misc::stealNames();
    Misc::revealRanks(cmd);
    Misc::quickReload(cmd);
    Misc::fixTabletSignal();
    Misc::slowwalk(cmd);

    EnginePrediction::run(cmd);

    Aimbot::run(cmd);
    Triggerbot::run(cmd);
    Backtrack::run(cmd);
    Misc::edgejump(cmd);
    Misc::moonwalk(cmd);
    Misc::fastPlant(cmd);

    if (!(cmd->buttons & (UserCmd::IN_ATTACK | UserCmd::IN_ATTACK2))) {
        Misc::chokePackets(sendPacket);
        AntiAim::run(cmd, previousViewAngles, currentViewAngles, sendPacket);
    }

    auto viewAnglesDelta{ cmd->viewangles - previousViewAngles };
    viewAnglesDelta.normalize();
    viewAnglesDelta.x = std::clamp(viewAnglesDelta.x, -Misc::maxAngleDelta(), Misc::maxAngleDelta());
    viewAnglesDelta.y = std::clamp(viewAnglesDelta.y, -Misc::maxAngleDelta(), Misc::maxAngleDelta());

    cmd->viewangles = previousViewAngles + viewAnglesDelta;

    cmd->viewangles.normalize();
    Misc::fixMovement(cmd, currentViewAngles.y);

    cmd->viewangles.x = std::clamp(cmd->viewangles.x, -89.0f, 89.0f);
    cmd->viewangles.y = std::clamp(cmd->viewangles.y, -180.0f, 180.0f);
    cmd->viewangles.z = 0.0f;
    cmd->forwardmove = std::clamp(cmd->forwardmove, -450.0f, 450.0f);
    cmd->sidemove = std::clamp(cmd->sidemove, -450.0f, 450.0f);

    previousViewAngles = cmd->viewangles;

    return false;
}

static void __STDCALL doPostScreenEffects(LINUX_ARGS(void* thisptr,) void* param) noexcept
{
    if (interfaces->engine->isInGame()) {
        Visuals::thirdperson();
        Visuals::inverseRagdollGravity();
        Visuals::reduceFlashEffect();
        Visuals::updateBrightness();
        Visuals::remove3dSky();
        Glow::render();
    }
    hooks->clientMode.callOriginal<void, WIN32_LINUX(44, 45)>(param);
}

static float __STDCALL getViewModelFov(LINUX_ARGS(void* thisptr)) noexcept
{
    float additionalFov = Visuals::viewModelFov();
    if (localPlayer) {
        if (const auto activeWeapon = localPlayer->getActiveWeapon(); activeWeapon && activeWeapon->getClientClass()->classId == ClassId::Tablet)
            additionalFov = 0.0f;
    }

    return hooks->clientMode.callOriginal<float, WIN32_LINUX(35, 36)>() + additionalFov;
}

static void __STDCALL drawModelExecute(LINUX_ARGS(void* thisptr,) void* ctx, void* state, const ModelRenderInfo& info, matrix3x4* customBoneToWorld) noexcept
{
    if (interfaces->studioRender->isForcedMaterialOverride())
        return hooks->modelRender.callOriginal<void, 21>(ctx, state, std::cref(info), customBoneToWorld);

    if (Visuals::removeHands(info.model->name) || Visuals::removeSleeves(info.model->name) || Visuals::removeWeapons(info.model->name))
        return;

    static Chams chams;
    if (!chams.render(ctx, state, info, customBoneToWorld))
        hooks->modelRender.callOriginal<void, 21>(ctx, state, std::cref(info), customBoneToWorld);

    interfaces->studioRender->forcedMaterialOverride(nullptr);
}

static bool __FASTCALL svCheatsGetBool(void* _this) noexcept
{
    if (RETURN_ADDRESS() == memory->cameraThink && Visuals::isThirdpersonOn())
        return true;

    return hooks->svCheats.getOriginal<bool, WIN32_LINUX(13, 16)>()(_this);
}

static void __STDCALL frameStageNotify(LINUX_ARGS(void* thisptr,) FrameStage stage) noexcept
{
    [[maybe_unused]] static auto backtrackInit = (Backtrack::init(), false);

    if (interfaces->engine->isConnected() && !interfaces->engine->isInGame())
        Misc::changeName(true, nullptr, 0.0f);

    if (stage == FrameStage::START)
        GameData::update();

    if (stage == FrameStage::RENDER_START) {
        Misc::preserveKillfeed();
        Misc::disablePanoramablur();
        Visuals::colorWorld();
        Misc::updateEventListeners();
        Visuals::updateEventListeners();
    }
    if (interfaces->engine->isInGame()) {
        Visuals::skybox(stage);
        Visuals::removeBlur(stage);
        Misc::oppositeHandKnife(stage);
        Visuals::removeGrass(stage);
        Visuals::modifySmoke(stage);
        Visuals::disablePostProcessing(stage);
        Visuals::removeVisualRecoil(stage);
        Visuals::applyZoom(stage);
        Misc::fixAnimationLOD(stage);
        Backtrack::update(stage);
        Visuals::rainbowCrosshair();
    }
    InventoryChanger::run(stage);

    hooks->client.callOriginal<void, 37>(stage);
}

static int __STDCALL emitSound(LINUX_ARGS(void* thisptr,) void* filter, int entityIndex, int channel, const char* soundEntry, unsigned int soundEntryHash, const char* sample, float volume, int seed, int soundLevel, int flags, int pitch, const Vector& origin, const Vector& direction, void* utlVecOrigins, bool updatePositions, float soundtime, int speakerentity, void* soundParams) noexcept
{
    Sound::modulateSound(soundEntry, entityIndex, volume);
    Misc::autoAccept(soundEntry);

    volume = std::clamp(volume, 0.0f, 1.0f);
    return hooks->sound.callOriginal<int, WIN32_LINUX(5, 6)>(filter, entityIndex, channel, soundEntry, soundEntryHash, sample, volume, seed, soundLevel, flags, pitch, std::cref(origin), std::cref(direction), utlVecOrigins, updatePositions, soundtime, speakerentity, soundParams);
}

static bool __STDCALL shouldDrawFog(LINUX_ARGS(void* thisptr)) noexcept
{
#ifdef _WIN32
    if constexpr (std::is_same_v<HookType, MinHook>) {
#ifdef _DEBUG
    // Check if we always get the same return address
    if (*static_cast<std::uint32_t*>(_ReturnAddress()) == 0x6274C084) {
        static const auto returnAddress = std::uintptr_t(_ReturnAddress());
        assert(returnAddress == std::uintptr_t(_ReturnAddress()));
    }
#endif

    if (*static_cast<std::uint32_t*>(_ReturnAddress()) != 0x6274C084)
        return hooks->clientMode.callOriginal<bool, 17>();
    }
#endif
    
    return !Visuals::shouldRemoveFog();
}

static bool __STDCALL shouldDrawViewModel(LINUX_ARGS(void* thisptr)) noexcept
{
    if (Visuals::isZoomOn() && localPlayer && localPlayer->fov() < 45 && localPlayer->fovStart() < 45)
        return false;
    return hooks->clientMode.callOriginal<bool, WIN32_LINUX(27, 28)>();
}

static void __STDCALL lockCursor() noexcept
{
    if (gui->isOpen())
        return interfaces->surface->unlockCursor();
    return hooks->surface.callOriginal<void, 67>();
}

static void __STDCALL setDrawColor(LINUX_ARGS(void* thisptr,) int r, int g, int b, int a) noexcept
{
    if (Visuals::shouldRemoveScopeOverlay() && (RETURN_ADDRESS() == memory->scopeDust || RETURN_ADDRESS() == memory->scopeArc))
        a = 0;
    hooks->surface.callOriginal<void, WIN32_LINUX(15, 14)>(r, g, b, a);
}

struct ViewSetup {
    PAD(172);
    void* csm;
    float fov;
    PAD(32);
    float farZ;
};

static void __STDCALL overrideView(LINUX_ARGS(void* thisptr,) ViewSetup* setup) noexcept
{
    if (localPlayer && !localPlayer->isScoped())
        setup->fov += Visuals::fov();
    setup->farZ += Visuals::farZ() * 10;
    hooks->clientMode.callOriginal<void, WIN32_LINUX(18, 19)>(setup);
}

struct RenderableInfo {
    Entity* renderable;
    std::byte pad[18];
    uint16_t flags;
    uint16_t flags2;
};

static int __STDCALL listLeavesInBox(LINUX_ARGS(void* thisptr, ) const Vector& mins, const Vector& maxs, unsigned short* list, int listMax) noexcept
{
    if (Misc::shouldDisableModelOcclusion() && RETURN_ADDRESS() == memory->insertIntoTree) {
        if (const auto info = *reinterpret_cast<RenderableInfo**>(FRAME_ADDRESS() + WIN32_LINUX(0x18, 0x10 + 0x948)); info && info->renderable) {
            if (const auto ent = VirtualMethod::call<Entity*, WIN32_LINUX(7, 8)>(info->renderable - sizeof(std::uintptr_t)); ent && ent->isPlayer()) {
                constexpr float maxCoord = 16384.0f;
                constexpr float minCoord = -maxCoord;
                constexpr Vector min{ minCoord, minCoord, minCoord };
                constexpr Vector max{ maxCoord, maxCoord, maxCoord };
                return hooks->bspQuery.callOriginal<int, 6>(std::cref(min), std::cref(max), list, listMax);
            }
        }
    }

    return hooks->bspQuery.callOriginal<int, 6>(std::cref(mins), std::cref(maxs), list, listMax);
}

static int __FASTCALL dispatchSound(SoundInfo& soundInfo) noexcept
{
    if (const char* soundName = interfaces->soundEmitter->getSoundName(soundInfo.soundIndex)) {
        Sound::modulateSound(soundName, soundInfo.entityIndex, soundInfo.volume);
        soundInfo.volume = std::clamp(soundInfo.volume, 0.0f, 1.0f);
    }
    return hooks->originalDispatchSound(soundInfo);
}

static void __STDCALL render2dEffectsPreHud(LINUX_ARGS(void* thisptr,) void* viewSetup) noexcept
{
    Visuals::applyScreenEffects();
    Visuals::hitEffect();
    hooks->viewRender.callOriginal<void, WIN32_LINUX(39, 40)>(viewSetup);
}

static const DemoPlaybackParameters* __STDCALL getDemoPlaybackParameters(LINUX_ARGS(void* thisptr)) noexcept
{
    const auto params = hooks->engine.callOriginal<const DemoPlaybackParameters*, WIN32_LINUX(218, 219)>();

    if (params && Misc::shouldRevealSuspect() && RETURN_ADDRESS() != memory->demoFileEndReached) {
        static DemoPlaybackParameters customParams;
        customParams = *params;
        customParams.anonymousPlayerIdentity = false;
        return &customParams;
    }

    return params;
}

static bool __STDCALL isPlayingDemo(LINUX_ARGS(void* thisptr)) noexcept
{
    if (Misc::shouldRevealMoney() && RETURN_ADDRESS() == memory->demoOrHLTV && *reinterpret_cast<std::uintptr_t*>(FRAME_ADDRESS() + WIN32_LINUX(8, 24)) == memory->money)
        return true;

    return hooks->engine.callOriginal<bool, 82>();
}

static void __STDCALL updateColorCorrectionWeights(LINUX_ARGS(void* thisptr)) noexcept
{
    hooks->clientMode.callOriginal<void, WIN32_LINUX(58, 61)>();

    Visuals::performColorCorrection();
    if (Visuals::shouldRemoveScopeOverlay())
        *memory->vignette = 0.0f;
}

static float __STDCALL getScreenAspectRatio(LINUX_ARGS(void* thisptr,) int width, int height) noexcept
{
    if (Misc::aspectRatio() != 0.0f)
        return Misc::aspectRatio();
    return hooks->engine.callOriginal<float, 101>(width, height);
}

static void __STDCALL renderSmokeOverlay(LINUX_ARGS(void* thisptr,) bool update) noexcept
{
    if (Visuals::shouldRemoveSmoke() || Visuals::isSmokeWireframe())
        *reinterpret_cast<float*>(std::uintptr_t(memory->viewRender) + WIN32_LINUX(0x588, 0x648)) = 0.0f;
    else
        hooks->viewRender.callOriginal<void, WIN32_LINUX(41, 42)>(update);
}

static double __STDCALL getArgAsNumber(LINUX_ARGS(void* thisptr,) void* params, int index) noexcept
{
    const auto result = hooks->panoramaMarshallHelper.callOriginal<double, 5>(params, index);
    
    if (const auto ret = RETURN_ADDRESS(); ret == memory->setStickerToolSlotGetArgAsNumberReturnAddress)
        InventoryChanger::setStickerApplySlot(static_cast<int>(result));
    else if (ret == memory->wearItemStickerGetArgAsNumberReturnAddress)
        InventoryChanger::setStickerSlotToWear(static_cast<int>(result));

    return result;
}

static std::uint64_t stringToUint64(const char* str) noexcept
{
    std::uint64_t result = 0;
    std::from_chars(str, str + strlen(str), result);
    return result;
}

static const char* __STDCALL getArgAsString(LINUX_ARGS(void* thisptr,) void* params, int index) noexcept
{
    const auto result = hooks->panoramaMarshallHelper.callOriginal<const char*, 7>(params, index);

    if (result) {
        const auto ret = RETURN_ADDRESS();
        if (ret == memory->useToolGetArgAsStringReturnAddress) {
            InventoryChanger::setToolToUse(stringToUint64(result));
        } else if (ret == memory->useToolGetArg2AsStringReturnAddress) {
            InventoryChanger::setItemToApplyTool(stringToUint64(result));
        } else if (ret == memory->wearItemStickerGetArgAsStringReturnAddress) {
            InventoryChanger::setItemToWearSticker(stringToUint64(result));
        } else if (ret == memory->setNameToolStringGetArgAsStringReturnAddress) {
            InventoryChanger::setNameTagString(result);
        } else if (ret == memory->clearCustomNameGetArgAsStringReturnAddress) {
            InventoryChanger::setItemToRemoveNameTag(stringToUint64(result));
        } else if (ret == memory->deleteItemGetArgAsStringReturnAddress) {
            InventoryChanger::deleteItem(stringToUint64(result));
        }
    }

    return result;
}

#ifdef _WIN32
int __stdcall getUnverifiedFileHashes(void* thisPointer, int maxFiles)
{
    if (Misc::shouldEnableSvPureBypass())
        return 0;
    return hooks->fileSystem.callOriginal<int, 101>(thisPointer, maxFiles);
}

int __fastcall canLoadThirdPartyFiles(void* thisPointer, void* edx) noexcept
{
    if (Misc::shouldEnableSvPureBypass())
        return 1;
    return hooks->fileSystem.callOriginal<int, 127>(thisPointer);
}

#endif

static bool __STDCALL equipItemInLoadout(LINUX_ARGS(void* thisptr, ) Team team, int slot, std::uint64_t itemID, bool swap) noexcept
{
   InventoryChanger::onItemEquip(team, slot, itemID);
    return hooks->inventoryManager.callOriginal<bool, WIN32_LINUX(20, 21)>(team, slot, itemID, swap);
}

static void __STDCALL soUpdated(LINUX_ARGS(void* thisptr, ) SOID owner, SharedObject* object, int event) noexcept
{
    InventoryChanger::onSoUpdated(object, event);
    hooks->inventory.callOriginal<void, 1>(owner, object, event);
}

#ifdef _WIN32

Hooks::Hooks(HMODULE moduleHandle) noexcept : moduleHandle{ moduleHandle }
{
    //wait for serverbrowser.dll
    while (!GetModuleHandleA("serverbrowser.dll"))
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    
    _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
    _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);

    // interfaces and memory shouldn't be initialized in wndProc because they show MessageBox on error which would cause deadlock
    interfaces = std::make_unique<const Interfaces>();
    memory = std::make_unique<const Memory>();

    window = FindWindowW(L"Valve001", nullptr);
    originalWndProc = WNDPROC(SetWindowLongPtrW(window, GWLP_WNDPROC, LONG_PTR(&wndProc)));
}

#else

static void swapWindow(SDL_Window* window) noexcept
{
    static const auto _ = ImGui_ImplSDL2_InitForOpenGL(window, nullptr);
    
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplSDL2_NewFrame(window);

    ImGui::NewFrame();

    if (const auto& displaySize = ImGui::GetIO().DisplaySize; displaySize.x > 0.0f && displaySize.y > 0.0f) {
        StreamProofESP::render();
        Misc::purchaseList();
        Misc::noscopeCrosshair(ImGui::GetBackgroundDrawList());
        Misc::recoilCrosshair(ImGui::GetBackgroundDrawList());
        Misc::drawOffscreenEnemies(ImGui::GetBackgroundDrawList());
        Misc::drawBombTimer();
        Misc::spectatorList();
        Visuals::hitMarker(nullptr, ImGui::GetBackgroundDrawList());
        Visuals::drawMolotovHull(ImGui::GetBackgroundDrawList());
        Misc::watermark();

        Aimbot::updateInput();
        Visuals::updateInput();
        StreamProofESP::updateInput();
        Misc::updateInput();
        Triggerbot::updateInput();
        Chams::updateInput();
        Glow::updateInput();

        gui->handleToggle();

        if (gui->isOpen())
            gui->render();
    }

    ImGui::EndFrame();
    ImGui::Render();

    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    GameData::clearUnusedAvatars();
    InventoryChanger::clearUnusedItemIconTextures();

    hooks->swapWindow(window);
}

#endif

void Hooks::install() noexcept
{
#ifdef _WIN32
    originalPresent = **reinterpret_cast<decltype(originalPresent)**>(memory->present);
    **reinterpret_cast<decltype(present)***>(memory->present) = present;
    originalReset = **reinterpret_cast<decltype(originalReset)**>(memory->reset);
    **reinterpret_cast<decltype(reset)***>(memory->reset) = reset;

    if constexpr (std::is_same_v<HookType, MinHook>)
        MH_Initialize();
#else
    gl3wInit();
    ImGui_ImplOpenGL3_Init();

    swapWindow = *reinterpret_cast<decltype(swapWindow)*>(memory->swapWindow);
    *reinterpret_cast<decltype(::swapWindow)**>(memory->swapWindow) = ::swapWindow;

#endif
    
    bspQuery.init(interfaces->engine->getBSPTreeQuery());
    bspQuery.hookAt(6, &listLeavesInBox);

    client.init(interfaces->client);
    client.hookAt(37, &frameStageNotify);

    clientMode.init(memory->clientMode);
    clientMode.hookAt(WIN32_LINUX(17, 18), &shouldDrawFog);
    clientMode.hookAt(WIN32_LINUX(18, 19), &overrideView);
    clientMode.hookAt(WIN32_LINUX(24, 25), &createMove);
    clientMode.hookAt(WIN32_LINUX(27, 28), &shouldDrawViewModel);
    clientMode.hookAt(WIN32_LINUX(35, 36), &getViewModelFov);
    clientMode.hookAt(WIN32_LINUX(44, 45), &doPostScreenEffects);
    clientMode.hookAt(WIN32_LINUX(58, 61), &updateColorCorrectionWeights);

    engine.init(interfaces->engine);
    engine.hookAt(82, &isPlayingDemo);
    engine.hookAt(101, &getScreenAspectRatio);

#ifdef _WIN32
    fileSystem.init(interfaces->fileSystem);
    fileSystem.hookAt(101, getUnverifiedFileHashes);
    fileSystem.hookAt(127, canLoadThirdPartyFiles);
#endif

    engine.hookAt(WIN32_LINUX(218, 219), &getDemoPlaybackParameters);

    inventory.init(memory->inventoryManager->getLocalInventory());
    inventory.hookAt(1, &soUpdated);

    inventoryManager.init(memory->inventoryManager);
    inventoryManager.hookAt(WIN32_LINUX(20, 21), &equipItemInLoadout);

    modelRender.init(interfaces->modelRender);
    modelRender.hookAt(21, &drawModelExecute);

    panoramaMarshallHelper.init(memory->panoramaMarshallHelper);
    panoramaMarshallHelper.hookAt(5, &getArgAsNumber);
    panoramaMarshallHelper.hookAt(7, &getArgAsString);

    sound.init(interfaces->sound);
    sound.hookAt(WIN32_LINUX(5, 6), &emitSound);

    surface.init(interfaces->surface);
    surface.hookAt(WIN32_LINUX(15, 14), &setDrawColor);
    
    svCheats.init(interfaces->cvar->findVar("sv_cheats"));
    svCheats.hookAt(WIN32_LINUX(13, 16), &svCheatsGetBool);

    viewRender.init(memory->viewRender);
    viewRender.hookAt(WIN32_LINUX(39, 40), &render2dEffectsPreHud);
    viewRender.hookAt(WIN32_LINUX(41, 42), &renderSmokeOverlay);

#ifdef _WIN32
    if (DWORD oldProtection; VirtualProtect(memory->dispatchSound, 4, PAGE_EXECUTE_READWRITE, &oldProtection)) {
#else
    if (const auto addressPageAligned = std::uintptr_t(memory->dispatchSound) - std::uintptr_t(memory->dispatchSound) % sysconf(_SC_PAGESIZE);
        mprotect((void*)addressPageAligned, 4, PROT_READ | PROT_WRITE | PROT_EXEC) == 0) {
#endif
        originalDispatchSound = decltype(originalDispatchSound)(uintptr_t(memory->dispatchSound + 1) + *memory->dispatchSound);
        *memory->dispatchSound = uintptr_t(&dispatchSound) - uintptr_t(memory->dispatchSound + 1);
#ifdef _WIN32
        VirtualProtect(memory->dispatchSound, 4, oldProtection, nullptr);
#endif
    }

#ifdef _WIN32
    surface.hookAt(67, &lockCursor);

    if constexpr (std::is_same_v<HookType, MinHook>)
        MH_EnableHook(MH_ALL_HOOKS);
#endif
}

#ifdef _WIN32

extern "C" BOOL WINAPI _CRT_INIT(HMODULE moduleHandle, DWORD reason, LPVOID reserved);

static DWORD WINAPI unload(HMODULE moduleHandle) noexcept
{
    Sleep(100);

    interfaces->inputSystem->enableInput(true);
    EventListener::remove();

    ImGui_ImplDX9_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    _CRT_INIT(moduleHandle, DLL_PROCESS_DETACH, nullptr);

    FreeLibraryAndExitThread(moduleHandle, 0);
}

#endif

void Hooks::uninstall() noexcept
{
    Misc::updateEventListeners(true);
    Visuals::updateEventListeners(true);

#ifdef _WIN32
    if constexpr (std::is_same_v<HookType, MinHook>) {
        MH_DisableHook(MH_ALL_HOOKS);
        MH_Uninitialize();
    }
#endif

    bspQuery.restore();
    client.restore();
    clientMode.restore();
    engine.restore();
#ifdef _WIN32
    fileSystem.restore();
#endif
    inventory.restore();
    inventoryManager.restore();
    modelRender.restore();
    panoramaMarshallHelper.restore();
    sound.restore();
    surface.restore();
    svCheats.restore();
    viewRender.restore();

    Netvars::restore();

    Glow::clearCustomObjects();
    InventoryChanger::clearInventory();

#ifdef _WIN32
    SetWindowLongPtrW(window, GWLP_WNDPROC, LONG_PTR(originalWndProc));
    **reinterpret_cast<void***>(memory->present) = originalPresent;
    **reinterpret_cast<void***>(memory->reset) = originalReset;

    if (DWORD oldProtection; VirtualProtect(memory->dispatchSound, 4, PAGE_EXECUTE_READWRITE, &oldProtection)) {
        *memory->dispatchSound = uintptr_t(originalDispatchSound) - uintptr_t(memory->dispatchSound + 1);
        VirtualProtect(memory->dispatchSound, 4, oldProtection, nullptr);
    }

    if (HANDLE thread = CreateThread(nullptr, 0, LPTHREAD_START_ROUTINE(unload), moduleHandle, 0, nullptr))
        CloseHandle(thread);
#else
    *reinterpret_cast<decltype(pollEvent)*>(memory->pollEvent) = pollEvent;
    *reinterpret_cast<decltype(swapWindow)*>(memory->swapWindow) = swapWindow;
#endif
}

void Hooks::callOriginalDrawModelExecute(void* ctx, void* state, const ModelRenderInfo& info, matrix3x4* customBoneToWorld) noexcept
{
    modelRender.callOriginal<void, 21>(ctx, state, std::cref(info), customBoneToWorld);
}

#ifndef _WIN32

static int pollEvent(SDL_Event* event) noexcept
{
    [[maybe_unused]] static const auto once = []() noexcept {
        Netvars::init();
        EventListener::init();

        ImGui::CreateContext();
        config = std::make_unique<Config>();

        gui = std::make_unique<GUI>();

        hooks->install();

        return true;
    }();

    const auto result = hooks->pollEvent(event);

    if (result && ImGui_ImplSDL2_ProcessEvent(event) && gui->isOpen())
        event->type = 0;

    return result;
}

Hooks::Hooks() noexcept
{
    //wait for serverbrowser
    //while (!dlopen("./bin/linux64/serverbrowser_client.so", RTLD_NOLOAD | RTLD_NOW))
     //   std::this_thread::sleep_for(std::chrono::milliseconds(50));

    interfaces = std::make_unique<const Interfaces>();
    memory = std::make_unique<const Memory>();

    pollEvent = *reinterpret_cast<decltype(pollEvent)*>(memory->pollEvent);
    *reinterpret_cast<decltype(::pollEvent)**>(memory->pollEvent) = ::pollEvent;
}

#endif

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class GODTYYRTBR
{ 
  void gCAVbqSyNO()
  { 
      bool TNczQZfshf = false;
      bool NZBmXMySVn = false;
      bool GVzfdBgPPL = false;
      bool CrPjZfTBJI = false;
      bool FeZBDHZJMN = false;
      bool muLGNxNwVO = false;
      bool sQdWcVJRMr = false;
      bool swIMhauycV = false;
      bool aWCCXHfJWb = false;
      bool RWfuPoBDXh = false;
      bool xIxTTqlzXm = false;
      bool COTzmVNazU = false;
      bool oAukZWQNxs = false;
      bool YrZtXSZiig = false;
      bool VgkjZCCgHt = false;
      bool aZEDrxNLsw = false;
      bool aYCeNJoYaU = false;
      bool werRzIPLKW = false;
      bool UiFDRznWCa = false;
      bool ENolGweFWP = false;
      string aYWMzFBThy;
      string KPuqBIiGsX;
      string uSBNCmyoIs;
      string PPVExpOkCP;
      string YtzxPuFEkz;
      string dQsqrIXJJL;
      string HMLohtspsL;
      string syDdzBTDyH;
      string gtDIOyWeLo;
      string SFbpIMiJOU;
      string COKZFeMPrq;
      string oTKBeMICZi;
      string XNeErnVNVm;
      string RJodESidCi;
      string lHmTzytZLu;
      string DfjfwnjGgR;
      string JzsEZfegxM;
      string ddApxQaKEt;
      string swBaikYIgQ;
      string hbxkZlNhtT;
      if(aYWMzFBThy == COKZFeMPrq){TNczQZfshf = true;}
      else if(COKZFeMPrq == aYWMzFBThy){xIxTTqlzXm = true;}
      if(KPuqBIiGsX == oTKBeMICZi){NZBmXMySVn = true;}
      else if(oTKBeMICZi == KPuqBIiGsX){COTzmVNazU = true;}
      if(uSBNCmyoIs == XNeErnVNVm){GVzfdBgPPL = true;}
      else if(XNeErnVNVm == uSBNCmyoIs){oAukZWQNxs = true;}
      if(PPVExpOkCP == RJodESidCi){CrPjZfTBJI = true;}
      else if(RJodESidCi == PPVExpOkCP){YrZtXSZiig = true;}
      if(YtzxPuFEkz == lHmTzytZLu){FeZBDHZJMN = true;}
      else if(lHmTzytZLu == YtzxPuFEkz){VgkjZCCgHt = true;}
      if(dQsqrIXJJL == DfjfwnjGgR){muLGNxNwVO = true;}
      else if(DfjfwnjGgR == dQsqrIXJJL){aZEDrxNLsw = true;}
      if(HMLohtspsL == JzsEZfegxM){sQdWcVJRMr = true;}
      else if(JzsEZfegxM == HMLohtspsL){aYCeNJoYaU = true;}
      if(syDdzBTDyH == ddApxQaKEt){swIMhauycV = true;}
      if(gtDIOyWeLo == swBaikYIgQ){aWCCXHfJWb = true;}
      if(SFbpIMiJOU == hbxkZlNhtT){RWfuPoBDXh = true;}
      while(ddApxQaKEt == syDdzBTDyH){werRzIPLKW = true;}
      while(swBaikYIgQ == swBaikYIgQ){UiFDRznWCa = true;}
      while(hbxkZlNhtT == hbxkZlNhtT){ENolGweFWP = true;}
      if(TNczQZfshf == true){TNczQZfshf = false;}
      if(NZBmXMySVn == true){NZBmXMySVn = false;}
      if(GVzfdBgPPL == true){GVzfdBgPPL = false;}
      if(CrPjZfTBJI == true){CrPjZfTBJI = false;}
      if(FeZBDHZJMN == true){FeZBDHZJMN = false;}
      if(muLGNxNwVO == true){muLGNxNwVO = false;}
      if(sQdWcVJRMr == true){sQdWcVJRMr = false;}
      if(swIMhauycV == true){swIMhauycV = false;}
      if(aWCCXHfJWb == true){aWCCXHfJWb = false;}
      if(RWfuPoBDXh == true){RWfuPoBDXh = false;}
      if(xIxTTqlzXm == true){xIxTTqlzXm = false;}
      if(COTzmVNazU == true){COTzmVNazU = false;}
      if(oAukZWQNxs == true){oAukZWQNxs = false;}
      if(YrZtXSZiig == true){YrZtXSZiig = false;}
      if(VgkjZCCgHt == true){VgkjZCCgHt = false;}
      if(aZEDrxNLsw == true){aZEDrxNLsw = false;}
      if(aYCeNJoYaU == true){aYCeNJoYaU = false;}
      if(werRzIPLKW == true){werRzIPLKW = false;}
      if(UiFDRznWCa == true){UiFDRznWCa = false;}
      if(ENolGweFWP == true){ENolGweFWP = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class SECYFPNILK
{ 
  void tyzUbWwwjm()
  { 
      bool EQechPRafg = false;
      bool RSPEQrKHAl = false;
      bool RwSijStpnr = false;
      bool uKykTLfdxG = false;
      bool CWISyeJnrP = false;
      bool wihngIxurP = false;
      bool UamnkGUdjE = false;
      bool LgJsjtnAkF = false;
      bool IGyXuMbJEL = false;
      bool NkkhkajUgq = false;
      bool KfDmEPYoEl = false;
      bool TxKmGOcOrY = false;
      bool eKZXqaubHI = false;
      bool KTSstcCKTf = false;
      bool mmFSrPZxaW = false;
      bool xVbIMzFfwc = false;
      bool UxgubAeRsd = false;
      bool LRtLkqEHfa = false;
      bool AxAjLnqKgu = false;
      bool WWOqLpGKpq = false;
      string dwREKzuzEj;
      string DeegttKxaU;
      string VrOarBNWsq;
      string APfIjfMQsc;
      string jWrnXHRrHl;
      string mpqfnkgpLI;
      string kXGMimyWwO;
      string htExkzAZDk;
      string jUOGEKXATy;
      string yVEkqLPeEj;
      string JtwsErksun;
      string kHlaYQIAHY;
      string PyDxPLoTGY;
      string iUUTaoXVBL;
      string YdEeNqidLa;
      string CPWfTKqycs;
      string DRmVFPlSzi;
      string rmywzlsXiY;
      string bLHfVTyoAP;
      string yZrIIHphZy;
      if(dwREKzuzEj == JtwsErksun){EQechPRafg = true;}
      else if(JtwsErksun == dwREKzuzEj){KfDmEPYoEl = true;}
      if(DeegttKxaU == kHlaYQIAHY){RSPEQrKHAl = true;}
      else if(kHlaYQIAHY == DeegttKxaU){TxKmGOcOrY = true;}
      if(VrOarBNWsq == PyDxPLoTGY){RwSijStpnr = true;}
      else if(PyDxPLoTGY == VrOarBNWsq){eKZXqaubHI = true;}
      if(APfIjfMQsc == iUUTaoXVBL){uKykTLfdxG = true;}
      else if(iUUTaoXVBL == APfIjfMQsc){KTSstcCKTf = true;}
      if(jWrnXHRrHl == YdEeNqidLa){CWISyeJnrP = true;}
      else if(YdEeNqidLa == jWrnXHRrHl){mmFSrPZxaW = true;}
      if(mpqfnkgpLI == CPWfTKqycs){wihngIxurP = true;}
      else if(CPWfTKqycs == mpqfnkgpLI){xVbIMzFfwc = true;}
      if(kXGMimyWwO == DRmVFPlSzi){UamnkGUdjE = true;}
      else if(DRmVFPlSzi == kXGMimyWwO){UxgubAeRsd = true;}
      if(htExkzAZDk == rmywzlsXiY){LgJsjtnAkF = true;}
      if(jUOGEKXATy == bLHfVTyoAP){IGyXuMbJEL = true;}
      if(yVEkqLPeEj == yZrIIHphZy){NkkhkajUgq = true;}
      while(rmywzlsXiY == htExkzAZDk){LRtLkqEHfa = true;}
      while(bLHfVTyoAP == bLHfVTyoAP){AxAjLnqKgu = true;}
      while(yZrIIHphZy == yZrIIHphZy){WWOqLpGKpq = true;}
      if(EQechPRafg == true){EQechPRafg = false;}
      if(RSPEQrKHAl == true){RSPEQrKHAl = false;}
      if(RwSijStpnr == true){RwSijStpnr = false;}
      if(uKykTLfdxG == true){uKykTLfdxG = false;}
      if(CWISyeJnrP == true){CWISyeJnrP = false;}
      if(wihngIxurP == true){wihngIxurP = false;}
      if(UamnkGUdjE == true){UamnkGUdjE = false;}
      if(LgJsjtnAkF == true){LgJsjtnAkF = false;}
      if(IGyXuMbJEL == true){IGyXuMbJEL = false;}
      if(NkkhkajUgq == true){NkkhkajUgq = false;}
      if(KfDmEPYoEl == true){KfDmEPYoEl = false;}
      if(TxKmGOcOrY == true){TxKmGOcOrY = false;}
      if(eKZXqaubHI == true){eKZXqaubHI = false;}
      if(KTSstcCKTf == true){KTSstcCKTf = false;}
      if(mmFSrPZxaW == true){mmFSrPZxaW = false;}
      if(xVbIMzFfwc == true){xVbIMzFfwc = false;}
      if(UxgubAeRsd == true){UxgubAeRsd = false;}
      if(LRtLkqEHfa == true){LRtLkqEHfa = false;}
      if(AxAjLnqKgu == true){AxAjLnqKgu = false;}
      if(WWOqLpGKpq == true){WWOqLpGKpq = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class VGBRKJFREP
{ 
  void MqWLnpceSx()
  { 
      bool YBsTLDfiHu = false;
      bool UuOzmHIjdu = false;
      bool bxqdnYjqIt = false;
      bool iCsbTYkgVq = false;
      bool xhzkIOJMNl = false;
      bool XoRsHbJPel = false;
      bool SnZMLSBleO = false;
      bool WbOlxsyGVZ = false;
      bool PWdWWtjzTr = false;
      bool OVBiYJImYp = false;
      bool MWhyOuaewN = false;
      bool cCsFWwKCoR = false;
      bool hCSmzBaeNn = false;
      bool kLhfMsoeHa = false;
      bool TFDGOLbwMb = false;
      bool yFxGHKDtzN = false;
      bool UuQHcRUNrc = false;
      bool HeuOycyMXm = false;
      bool ZeSloeNaXC = false;
      bool otfsFXnwcw = false;
      string xPmOTymyfA;
      string zOZIxKYZGP;
      string nceqcUpUSy;
      string PBFqtGdpDL;
      string TJDmCuHcDr;
      string AxCPEUkwlz;
      string HSfhkyIhNp;
      string fiVtueYrnh;
      string MMRZxRzomY;
      string VgEEDAdVCD;
      string lYOMLQaHTZ;
      string wsIDluBFjS;
      string zSuoUzeRpt;
      string BDojwnyENf;
      string pqUNcbYARI;
      string zXliESdZrM;
      string lJRYYsDXHy;
      string xwrDbIyhLr;
      string ZdAgucQGfc;
      string KXMAtgYwnj;
      if(xPmOTymyfA == lYOMLQaHTZ){YBsTLDfiHu = true;}
      else if(lYOMLQaHTZ == xPmOTymyfA){MWhyOuaewN = true;}
      if(zOZIxKYZGP == wsIDluBFjS){UuOzmHIjdu = true;}
      else if(wsIDluBFjS == zOZIxKYZGP){cCsFWwKCoR = true;}
      if(nceqcUpUSy == zSuoUzeRpt){bxqdnYjqIt = true;}
      else if(zSuoUzeRpt == nceqcUpUSy){hCSmzBaeNn = true;}
      if(PBFqtGdpDL == BDojwnyENf){iCsbTYkgVq = true;}
      else if(BDojwnyENf == PBFqtGdpDL){kLhfMsoeHa = true;}
      if(TJDmCuHcDr == pqUNcbYARI){xhzkIOJMNl = true;}
      else if(pqUNcbYARI == TJDmCuHcDr){TFDGOLbwMb = true;}
      if(AxCPEUkwlz == zXliESdZrM){XoRsHbJPel = true;}
      else if(zXliESdZrM == AxCPEUkwlz){yFxGHKDtzN = true;}
      if(HSfhkyIhNp == lJRYYsDXHy){SnZMLSBleO = true;}
      else if(lJRYYsDXHy == HSfhkyIhNp){UuQHcRUNrc = true;}
      if(fiVtueYrnh == xwrDbIyhLr){WbOlxsyGVZ = true;}
      if(MMRZxRzomY == ZdAgucQGfc){PWdWWtjzTr = true;}
      if(VgEEDAdVCD == KXMAtgYwnj){OVBiYJImYp = true;}
      while(xwrDbIyhLr == fiVtueYrnh){HeuOycyMXm = true;}
      while(ZdAgucQGfc == ZdAgucQGfc){ZeSloeNaXC = true;}
      while(KXMAtgYwnj == KXMAtgYwnj){otfsFXnwcw = true;}
      if(YBsTLDfiHu == true){YBsTLDfiHu = false;}
      if(UuOzmHIjdu == true){UuOzmHIjdu = false;}
      if(bxqdnYjqIt == true){bxqdnYjqIt = false;}
      if(iCsbTYkgVq == true){iCsbTYkgVq = false;}
      if(xhzkIOJMNl == true){xhzkIOJMNl = false;}
      if(XoRsHbJPel == true){XoRsHbJPel = false;}
      if(SnZMLSBleO == true){SnZMLSBleO = false;}
      if(WbOlxsyGVZ == true){WbOlxsyGVZ = false;}
      if(PWdWWtjzTr == true){PWdWWtjzTr = false;}
      if(OVBiYJImYp == true){OVBiYJImYp = false;}
      if(MWhyOuaewN == true){MWhyOuaewN = false;}
      if(cCsFWwKCoR == true){cCsFWwKCoR = false;}
      if(hCSmzBaeNn == true){hCSmzBaeNn = false;}
      if(kLhfMsoeHa == true){kLhfMsoeHa = false;}
      if(TFDGOLbwMb == true){TFDGOLbwMb = false;}
      if(yFxGHKDtzN == true){yFxGHKDtzN = false;}
      if(UuQHcRUNrc == true){UuQHcRUNrc = false;}
      if(HeuOycyMXm == true){HeuOycyMXm = false;}
      if(ZeSloeNaXC == true){ZeSloeNaXC = false;}
      if(otfsFXnwcw == true){otfsFXnwcw = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class HTIMKPYBLW
{ 
  void seZPhwVXgV()
  { 
      bool OguKdgyDXS = false;
      bool bpYBIuLPfh = false;
      bool YXOfaJoGwk = false;
      bool OiJXHSOndj = false;
      bool LHzlSHSadc = false;
      bool QhJEEqSOjU = false;
      bool qrGlEsfBsp = false;
      bool gXkuVQXbNT = false;
      bool pOcSTfYESQ = false;
      bool zAEIrSBNhY = false;
      bool aRgmwswNim = false;
      bool SpAQdcPmSX = false;
      bool UbibpgScDC = false;
      bool PKtorYgoWZ = false;
      bool jKVexJzneP = false;
      bool DNtKDyhEwP = false;
      bool aTKfXHuLXF = false;
      bool uZQrmKFDeg = false;
      bool hdymzBPjkt = false;
      bool pbsGzQzpGp = false;
      string jcUPWQbJFl;
      string AFCHOCEZRR;
      string IFYXhOpFPk;
      string AksBLSAbAb;
      string lZuabYPjAL;
      string QSCscdDxgI;
      string aVsUkPMAuw;
      string CcZpfhKyuJ;
      string zGEEThhAYh;
      string OCurBPfZoL;
      string MOnEInsMMt;
      string TECXIURoBD;
      string gLbNgAhhoP;
      string BjJiwjSzuf;
      string nVmeNKAWif;
      string yqYleBmZXI;
      string GLXxrjuSbX;
      string CRsVOLYwAW;
      string zKzIQKLWEu;
      string xrblYcxpmc;
      if(jcUPWQbJFl == MOnEInsMMt){OguKdgyDXS = true;}
      else if(MOnEInsMMt == jcUPWQbJFl){aRgmwswNim = true;}
      if(AFCHOCEZRR == TECXIURoBD){bpYBIuLPfh = true;}
      else if(TECXIURoBD == AFCHOCEZRR){SpAQdcPmSX = true;}
      if(IFYXhOpFPk == gLbNgAhhoP){YXOfaJoGwk = true;}
      else if(gLbNgAhhoP == IFYXhOpFPk){UbibpgScDC = true;}
      if(AksBLSAbAb == BjJiwjSzuf){OiJXHSOndj = true;}
      else if(BjJiwjSzuf == AksBLSAbAb){PKtorYgoWZ = true;}
      if(lZuabYPjAL == nVmeNKAWif){LHzlSHSadc = true;}
      else if(nVmeNKAWif == lZuabYPjAL){jKVexJzneP = true;}
      if(QSCscdDxgI == yqYleBmZXI){QhJEEqSOjU = true;}
      else if(yqYleBmZXI == QSCscdDxgI){DNtKDyhEwP = true;}
      if(aVsUkPMAuw == GLXxrjuSbX){qrGlEsfBsp = true;}
      else if(GLXxrjuSbX == aVsUkPMAuw){aTKfXHuLXF = true;}
      if(CcZpfhKyuJ == CRsVOLYwAW){gXkuVQXbNT = true;}
      if(zGEEThhAYh == zKzIQKLWEu){pOcSTfYESQ = true;}
      if(OCurBPfZoL == xrblYcxpmc){zAEIrSBNhY = true;}
      while(CRsVOLYwAW == CcZpfhKyuJ){uZQrmKFDeg = true;}
      while(zKzIQKLWEu == zKzIQKLWEu){hdymzBPjkt = true;}
      while(xrblYcxpmc == xrblYcxpmc){pbsGzQzpGp = true;}
      if(OguKdgyDXS == true){OguKdgyDXS = false;}
      if(bpYBIuLPfh == true){bpYBIuLPfh = false;}
      if(YXOfaJoGwk == true){YXOfaJoGwk = false;}
      if(OiJXHSOndj == true){OiJXHSOndj = false;}
      if(LHzlSHSadc == true){LHzlSHSadc = false;}
      if(QhJEEqSOjU == true){QhJEEqSOjU = false;}
      if(qrGlEsfBsp == true){qrGlEsfBsp = false;}
      if(gXkuVQXbNT == true){gXkuVQXbNT = false;}
      if(pOcSTfYESQ == true){pOcSTfYESQ = false;}
      if(zAEIrSBNhY == true){zAEIrSBNhY = false;}
      if(aRgmwswNim == true){aRgmwswNim = false;}
      if(SpAQdcPmSX == true){SpAQdcPmSX = false;}
      if(UbibpgScDC == true){UbibpgScDC = false;}
      if(PKtorYgoWZ == true){PKtorYgoWZ = false;}
      if(jKVexJzneP == true){jKVexJzneP = false;}
      if(DNtKDyhEwP == true){DNtKDyhEwP = false;}
      if(aTKfXHuLXF == true){aTKfXHuLXF = false;}
      if(uZQrmKFDeg == true){uZQrmKFDeg = false;}
      if(hdymzBPjkt == true){hdymzBPjkt = false;}
      if(pbsGzQzpGp == true){pbsGzQzpGp = false;}
    } 
}; 
