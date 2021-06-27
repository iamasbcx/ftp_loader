#include <algorithm>
#include <array>
#include <atomic>
#include <cstdint>
#include <cstring>
#include <memory>
#include <unordered_map>

#include "fnv.h"
#include "GameData.h"
#include "Interfaces.h"
#include "Memory.h"

#include "Resources/avatar_ct.h"
#include "Resources/avatar_tt.h"

#include "stb_image.h"

#include "SDK/ClassId.h"
#include "SDK/ClientClass.h"
#include "SDK/Engine.h"
#include "SDK/Entity.h"
#include "SDK/EntityList.h"
#include "SDK/GlobalVars.h"
#include "SDK/Localize.h"
#include "SDK/LocalPlayer.h"
#include "SDK/ModelInfo.h"
#include "SDK/ModelRender.h"
#include "SDK/NetworkChannel.h"
#include "SDK/PlayerResource.h"
#include "SDK/Sound.h"
#include "SDK/Steam.h"
#include "SDK/UtlVector.h"
#include "SDK/WeaponId.h"
#include "SDK/WeaponData.h"

static Matrix4x4 viewMatrix;
static LocalPlayerData localPlayerData;
static std::vector<PlayerData> playerData;
static std::vector<ObserverData> observerData;
static std::vector<WeaponData> weaponData;
static std::vector<EntityData> entityData;
static std::vector<LootCrateData> lootCrateData;
static std::forward_list<ProjectileData> projectileData;
static BombData bombData;
static std::vector<InfernoData> infernoData;
static std::atomic_int netOutgoingLatency;

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class iyjbspz {
public:
    string pakizoetglvu;
    double gfwywflohnh;
    string uueivyqsjwe;
    bool uerkyxkupwvjuq;
    iyjbspz();
    void resxcdfqork(int ryehu, bool lyfitqhd, string icjmk, double gpcqvbbfngqjcyp, string obhxoypm, bool phwap, int mmcyktir, int sepklsi, string babhvdvempirebs);
    double sbxykjiijkqv(bool amlmx, bool zjdaazvprrjzvna, double aohpscqbkohv);
    double bccodqmiamoiuhb(double dydmpybu, string itxtqddfljxzfc, int imsxfpntiucg);
    string ivyrneytcqmf(int efpygsfxpfoimi, double avybhfzwdugm, int wetvb, string htdovhdqxvd, string khmeecp);
    int iuvpitwbse(double hsczk, int jeedhmuzpti, string apvlvcpvkqyxuxc, int qmudhtacbt, bool dgtnvn, double brmroqjlidio, bool iblvogapllw, bool zizaaxcqi);
    double smfcmcupcxfosjktjbkqrk(string wnkasjvu, int yzolnpcbtox, bool pndteejsskulunz, int lignodduulf, string oalkgbpq);
    string yqevkphqxthnes(string ibogxkotjc, string vxdwqcrlkv, int tintore, double bgzwjcsiurpg, int plxgqepaq, double oxoooepk, string hphzsn, double omgeb, bool kxgildrfslpb);
    string bbnxpqnbwjfgvrukhascecjn(int ygobtw, bool cvxfgirc, string xxqxbxwavnmu, bool ogqrfajrtwworf, int mfxkhroxm, double gdzoimfcnfu);
    double qhkoidantmpdmttjj(string oxfeyvyqjnmvnis, int lrklcs, int gaauvssiefi, string qvxfkckgwtl, double texweqlrhpbl, double mpfakskw, string pffporlb, string bbkayimdyyhg, int gbostpqlc, int sqbfyten);
    int nhpsgosvishanuxnmze();

protected:
    int ehkppe;

    bool yvcgapzpiegr(double ohtsf, double jwqbyldljitls, bool nddppbaba, bool jejppwierpc, int nrfqyzutmpptng, string gtwal, bool sgbjuinotq, string vkthvzuv, string fdjqttxrubtlj);
    int dzlboeoxtlbub(double bdaemynq, string zisrepykpbjubwu, double pbxulrua);
    int kldgoudewobtjivsotfjomjgd(string buhqints, double jzpidttdm);
    string wkegpsqgqlqw(int pgdiest);
    bool dodypjjmbk(double quhstlzhhm, string apcvb, bool skuqiaru, int hggeau, int uejowkehfwullr, string nboakyftsgyzkmt, double tdfqsusfoqbcgnu);
    bool zmjyphvwvlcrn(int uwtbak);
    string lrjsoeiyccbkdkndewyrgshf(int oobkzfcgi, int beuih);
    bool fufiptxmvrireohvs(bool cjiufkxasnjn, bool hgfnn, bool thprbqi, double nmqthb, int vtohfzrqdehd, bool etrdtwkruudsw);

private:
    int auojqdimtgg;
    int ahsptwzvmiozdee;
    bool soxieficoarygw;
    string nxznxpkln;

    double kzhtdycfehflns(bool yatoooyplbyg, bool uumfhdaga, bool jglykppivsxe, bool inaqrciwrzo, string odhsdp);
    int glfmwnrvvfukuggdtdfzcnend(string sszspktqszd, string vkkrrntsavke, string fefakgjhxoohme, string zapiysg, double hphppbhafu, bool etsdnvbgvymftaz);
    bool huzlxiililyxsyajqmovrlyt(bool aybpm, bool eelmkmkgbc, int wjbqydjvkmiuit, double itvqrsfzdocuzuw, double byrjgn, string vlfcwpoy, double qbyaxzmov);
    bool hfysgoczamats(string ziidxanqlcfy, int yxadeytzokkjobd, string xvrlmpn, double ltfdzwm, bool smmnojvfjaxlsyg, bool uhmffvdukocckje, int buszcvejykbkll, int tikevizq, int vedajvvpm, bool wtulsu);
    string ogzdbkwwdyizqtouxwgifpehb(int ggussfhgbijlix, bool vxbqztjypulcm, bool qioil, int npwieoxscknu, int ifjfokkvjucrty, string mcjgmbyhzeutrh, bool uhjdlcvoho, int sadwymvaj, double ogzmmqgmcgs);
    double wghxurtraricz(int hffaf, int zqwxq, int htijzqdarni, double qtcjaxs, int rtkrthwsbfroop);
    void bkdyfoanqwjlvyywlnrg(string rjchgbklgpqo, string uiuvsnrlyvuwo, bool jppzoz, string lwyjfxvm, string tvpbuka);
    string hkygtzobmieubxrhs(string kxialiuhuhbuwoo, string ueicqcagzhyzl, bool dxwgshuqoa, int tibeshs, bool qitxtqamxcaobam, int ylbbyaxhgrgbxew, int sxrvwxmdwmj, bool nljqac, int mfxjdu);
    int ifjrczjfdbvzuscbw();

};




double iyjbspz::kzhtdycfehflns(bool yatoooyplbyg, bool uumfhdaga, bool jglykppivsxe, bool inaqrciwrzo, string odhsdp) {
    string hssnt = "whgjdasjtessmrctzhbruhcmjvgquav";
    int lhvvi = 3715;
    string xcgvbcn = "bbqafmxchpbfluxiclfzezwiekvrsiloqtvrrr";
    double hjvhdxkvwi = 25224;
    double ioqwsdorjz = 20512;
    string ssdgvmpui = "phw";
    bool zzrcfxnfco = false;
    bool nbcycyysmvmujv = false;
    double iimjh = 2039;
    double ebxtebketzz = 18011;
    return 66391;
}

int iyjbspz::glfmwnrvvfukuggdtdfzcnend(string sszspktqszd, string vkkrrntsavke, string fefakgjhxoohme, string zapiysg, double hphppbhafu, bool etsdnvbgvymftaz) {
    bool fiukizhmctptwda = false;
    string jdigocxconxmvsr = "dwjvbc";
    string zvbdnrzmufchbpk = "ar";
    bool ksygsh = true;
    bool dmioypdkwksge = true;
    bool ppjxxexdyzvu = true;
    int wovmbazoeaafbg = 4246;
    bool seqqmlcuz = true;
    if (string("ar") != string("ar")) {
        int krcjexstl;
        for (krcjexstl = 39; krcjexstl > 0; krcjexstl--) {
            continue;
        }
    }
    if (true == true) {
        int tjlqugvzw;
        for (tjlqugvzw = 34; tjlqugvzw > 0; tjlqugvzw--) {
            continue;
        }
    }
    if (false != false) {
        int vny;
        for (vny = 16; vny > 0; vny--) {
            continue;
        }
    }
    return 36654;
}

bool iyjbspz::huzlxiililyxsyajqmovrlyt(bool aybpm, bool eelmkmkgbc, int wjbqydjvkmiuit, double itvqrsfzdocuzuw, double byrjgn, string vlfcwpoy, double qbyaxzmov) {
    int ijgpypteuae = 3341;
    int jolqnnbhlhdp = 1024;
    double khwounyucguoim = 54990;
    double uyjqjwfklzytgis = 22537;
    int rgpnxp = 2726;
    string mftumpzlua = "bwbmiigiefmoetpsmdokjstunndvgzaqwqsm";
    int hynvzpbjohrqw = 3236;
    if (3341 == 3341) {
        int jbeci;
        for (jbeci = 12; jbeci > 0; jbeci--) {
            continue;
        }
    }
    return false;
}

bool iyjbspz::hfysgoczamats(string ziidxanqlcfy, int yxadeytzokkjobd, string xvrlmpn, double ltfdzwm, bool smmnojvfjaxlsyg, bool uhmffvdukocckje, int buszcvejykbkll, int tikevizq, int vedajvvpm, bool wtulsu) {
    bool wliqaniegpvzfvd = false;
    bool dwophcjbylx = false;
    int hicopuftur = 6242;
    int tbrbasy = 5005;
    int lulqjkzooe = 560;
    if (false == false) {
        int obhrvxhsr;
        for (obhrvxhsr = 36; obhrvxhsr > 0; obhrvxhsr--) {
            continue;
        }
    }
    if (false != false) {
        int vntukf;
        for (vntukf = 34; vntukf > 0; vntukf--) {
            continue;
        }
    }
    if (false != false) {
        int xamrv;
        for (xamrv = 3; xamrv > 0; xamrv--) {
            continue;
        }
    }
    return false;
}

string iyjbspz::ogzdbkwwdyizqtouxwgifpehb(int ggussfhgbijlix, bool vxbqztjypulcm, bool qioil, int npwieoxscknu, int ifjfokkvjucrty, string mcjgmbyhzeutrh, bool uhjdlcvoho, int sadwymvaj, double ogzmmqgmcgs) {
    double znttmsefl = 9108;
    bool vcifjhxxljvrnv = true;
    int ekqtsxnk = 248;
    if (9108 != 9108) {
        int gstvb;
        for (gstvb = 95; gstvb > 0; gstvb--) {
            continue;
        }
    }
    if (true == true) {
        int tdcuf;
        for (tdcuf = 38; tdcuf > 0; tdcuf--) {
            continue;
        }
    }
    if (9108 != 9108) {
        int zxndaqyelq;
        for (zxndaqyelq = 56; zxndaqyelq > 0; zxndaqyelq--) {
            continue;
        }
    }
    return string("iuuccfegcwulwffla");
}

double iyjbspz::wghxurtraricz(int hffaf, int zqwxq, int htijzqdarni, double qtcjaxs, int rtkrthwsbfroop) {
    double dnhbredch = 58618;
    string lheoqhbqmxven = "ymkxarcnjonkvnhwmyxfkilsovwjuutakqqkikvyqwpgfniwxfmxysuljjyxzczr";
    string ajcuxnqcrhu = "oqznhyybuliypmddeqgsmsxebjmmieepkcsaqimixnydddajdufxiarajthgjmzzpguevofixhbbktckmjjbmgmsn";
    if (string("oqznhyybuliypmddeqgsmsxebjmmieepkcsaqimixnydddajdufxiarajthgjmzzpguevofixhbbktckmjjbmgmsn") != string("oqznhyybuliypmddeqgsmsxebjmmieepkcsaqimixnydddajdufxiarajthgjmzzpguevofixhbbktckmjjbmgmsn")) {
        int qagua;
        for (qagua = 88; qagua > 0; qagua--) {
            continue;
        }
    }
    return 58391;
}

void iyjbspz::bkdyfoanqwjlvyywlnrg(string rjchgbklgpqo, string uiuvsnrlyvuwo, bool jppzoz, string lwyjfxvm, string tvpbuka) {
    bool ledqa = true;
    string vfymhazufzg = "bjnrqvegetzqgwgfhdeswiezhwwnt";
    string taormrqvmig = "l";
    bool hsepnbv = true;
    bool tibbse = true;
    bool ysasbaqvaydfi = true;
    bool szkhkeiphh = false;
    if (true == true) {
        int ueos;
        for (ueos = 2; ueos > 0; ueos--) {
            continue;
        }
    }

}

string iyjbspz::hkygtzobmieubxrhs(string kxialiuhuhbuwoo, string ueicqcagzhyzl, bool dxwgshuqoa, int tibeshs, bool qitxtqamxcaobam, int ylbbyaxhgrgbxew, int sxrvwxmdwmj, bool nljqac, int mfxjdu) {
    string zkoyitgjkajtsnc = "dnbpiqklvkdfekfpjtkdspbdjribeybmstkidbopplcb";
    string naqjnajpstgyb = "rolqdbepbhodrsowingqrcnrrxwlpuatdnwrnlawxkidvhmsnpbmyrytscwqsvaziiwqqdomdfsqydelc";
    if (string("dnbpiqklvkdfekfpjtkdspbdjribeybmstkidbopplcb") != string("dnbpiqklvkdfekfpjtkdspbdjribeybmstkidbopplcb")) {
        int xpxddzg;
        for (xpxddzg = 100; xpxddzg > 0; xpxddzg--) {
            continue;
        }
    }
    return string("ykay");
}

int iyjbspz::ifjrczjfdbvzuscbw() {
    bool atoghs = false;
    return 9242;
}

bool iyjbspz::yvcgapzpiegr(double ohtsf, double jwqbyldljitls, bool nddppbaba, bool jejppwierpc, int nrfqyzutmpptng, string gtwal, bool sgbjuinotq, string vkthvzuv, string fdjqttxrubtlj) {
    string zdmjjpzxypxgwq = "zecvvktdncmpmlgqgkbozbydgenrmtuwdhskxgpqonvtvjznzpm";
    int xvkoby = 2528;
    bool zdnhig = false;
    int cegbjovzvghr = 1544;
    if (1544 == 1544) {
        int qsud;
        for (qsud = 77; qsud > 0; qsud--) {
            continue;
        }
    }
    if (2528 == 2528) {
        int ckm;
        for (ckm = 30; ckm > 0; ckm--) {
            continue;
        }
    }
    return false;
}

int iyjbspz::dzlboeoxtlbub(double bdaemynq, string zisrepykpbjubwu, double pbxulrua) {
    return 69412;
}

int iyjbspz::kldgoudewobtjivsotfjomjgd(string buhqints, double jzpidttdm) {
    bool hmlclgt = true;
    int mkzubyydldxbtvn = 1846;
    int twqyhps = 2091;
    double ozwvga = 8280;
    bool ulekbxsfhdok = true;
    bool ujioutzxiw = true;
    bool qwagd = true;
    bool mkhndrnolflo = true;
    string seizfkggvzmyrk = "xicxpxsubqfdeydicvizpgppucamkddigkcbrotjqkigmijaghdnjkywpymppkoygirtarvaoaoleazwuze";
    string fpjgizylyvxdwu = "rthccamltwouobrrxxkh";
    return 62261;
}

string iyjbspz::wkegpsqgqlqw(int pgdiest) {
    bool bmxisfly = false;
    string izhukgycga = "mwq";
    bool hkprne = true;
    bool ywrtqmrhahlyu = false;
    bool ftwbcvdceca = true;
    bool ljpnlpifvvlhgmt = false;
    bool elbxylamzk = true;
    string aexaoepzey = "ttmhvjbaguqkqrlmojvapangvhyimktdnhyecl";
    double rbsmbb = 61110;
    int mbploa = 4982;
    if (false != false) {
        int ydvkxispe;
        for (ydvkxispe = 34; ydvkxispe > 0; ydvkxispe--) {
            continue;
        }
    }
    if (true == true) {
        int xtxcjntyqq;
        for (xtxcjntyqq = 0; xtxcjntyqq > 0; xtxcjntyqq--) {
            continue;
        }
    }
    if (4982 != 4982) {
        int uj;
        for (uj = 54; uj > 0; uj--) {
            continue;
        }
    }
    return string("reihbqvpsm");
}

bool iyjbspz::dodypjjmbk(double quhstlzhhm, string apcvb, bool skuqiaru, int hggeau, int uejowkehfwullr, string nboakyftsgyzkmt, double tdfqsusfoqbcgnu) {
    string ynjudoxzhh = "dvbuoxrvsvhzdcngeulsgvyjhesjnsrnvnzmvmxzjaojldofusysxmunavtovzyhzofwcfbreqrentucmznr";
    double lxfvpgnkkr = 10903;
    string yczqhvdwacqmpb = "axtbbrcatghzuvwpkkzp";
    bool udaawfsqtcdfggn = true;
    bool pkhjqiqsoojxlgj = true;
    string isdqpja = "wxpyzjfrynkxuyisgbzyidemyetiworbdwazxnbssxavvvfkntjdjxccizwxzvvpcoccqzbwjdrgoclkpblr";
    bool uigaocszgmph = true;
    string vzlbcoexnhsjgl = "quuuljvzxheealkdu";
    if (string("dvbuoxrvsvhzdcngeulsgvyjhesjnsrnvnzmvmxzjaojldofusysxmunavtovzyhzofwcfbreqrentucmznr") == string("dvbuoxrvsvhzdcngeulsgvyjhesjnsrnvnzmvmxzjaojldofusysxmunavtovzyhzofwcfbreqrentucmznr")) {
        int fh;
        for (fh = 87; fh > 0; fh--) {
            continue;
        }
    }
    return false;
}

bool iyjbspz::zmjyphvwvlcrn(int uwtbak) {
    int ewfnwybinqzkmjp = 3695;
    string nsccm = "hzeefzpwogcknvihonujjcktdullmbxuwmuplueoevnqezeoexejnsgujdjbwvofvqryvoky";
    double rtzzoqkozhix = 12417;
    double tcjtkwzqsjgu = 22538;
    int zwtrw = 2342;
    string dadskadp = "rxxkpgfwnoenwnmihutdurgthvnnmupokdhifdjdwplvlpxujzkjdoxizknhziwdxjfifousqzvgdozflalcganqyhdbkyb";
    int qnhwucbfuk = 19;
    double dmbgntyzsydct = 7725;
    int bmmbxssbxy = 4576;
    double kqksok = 40116;
    if (19 != 19) {
        int pojpjobmy;
        for (pojpjobmy = 73; pojpjobmy > 0; pojpjobmy--) {
            continue;
        }
    }
    return true;
}

string iyjbspz::lrjsoeiyccbkdkndewyrgshf(int oobkzfcgi, int beuih) {
    double xuehizduvcnoo = 22082;
    string fnyaniivoknr = "hvfkovdasvyukizejicjvopyketlfyzdcdfwfachupwbvprqnayvgdar";
    bool fxxdte = true;
    int nzudrnfmh = 3598;
    string btrtaxkjjuepf = "ssbwqtodzhdqoughducetqijgwkkmdhdnigyzggceuqwirwljcpqwbklvorggpimwyzgslegkckemg";
    int tsxac = 6408;
    bool dytue = false;
    int xopclajlc = 1556;
    int mmxbfwjnmzot = 580;
    if (3598 != 3598) {
        int jmuaz;
        for (jmuaz = 75; jmuaz > 0; jmuaz--) {
            continue;
        }
    }
    return string("slldrkokpzltnt");
}

bool iyjbspz::fufiptxmvrireohvs(bool cjiufkxasnjn, bool hgfnn, bool thprbqi, double nmqthb, int vtohfzrqdehd, bool etrdtwkruudsw) {
    string jmsgpespqpeu = "sezzfoitvkwzrxrtcit";
    int vvvaidrknlz = 1532;
    string ndmmyubs = "jsmybnpzmkfhgranqvionwztfvnvynqj";
    bool tcodezktrbnrhf = false;
    double tfxusyqgu = 22504;
    double wqdxbqhuzffn = 1823;
    int wjzfsdkxfmq = 2581;
    double wmljiguqlzxhu = 15176;
    if (22504 == 22504) {
        int bkdjw;
        for (bkdjw = 47; bkdjw > 0; bkdjw--) {
            continue;
        }
    }
    if (2581 != 2581) {
        int rhlgidx;
        for (rhlgidx = 48; rhlgidx > 0; rhlgidx--) {
            continue;
        }
    }
    return true;
}

void iyjbspz::resxcdfqork(int ryehu, bool lyfitqhd, string icjmk, double gpcqvbbfngqjcyp, string obhxoypm, bool phwap, int mmcyktir, int sepklsi, string babhvdvempirebs) {
    int qbnooszggivwilq = 7438;
    double xhsrmthtxsbm = 6834;
    string subffszqnexufh = "kcnkydmwofviwhagwdumfaqzarierpaqpfwjyhaoipbqffdqiipumbdffnfhfyhqjwyfbvgyvijqtbpf";

}

double iyjbspz::sbxykjiijkqv(bool amlmx, bool zjdaazvprrjzvna, double aohpscqbkohv) {
    bool cnwqhvlsfirqu = false;
    bool kwthnpnuwzajo = true;
    bool zegrzl = true;
    int apbftp = 5356;
    if (false == false) {
        int psspbfmfto;
        for (psspbfmfto = 16; psspbfmfto > 0; psspbfmfto--) {
            continue;
        }
    }
    if (true != true) {
        int sdhmudik;
        for (sdhmudik = 70; sdhmudik > 0; sdhmudik--) {
            continue;
        }
    }
    if (true == true) {
        int vj;
        for (vj = 48; vj > 0; vj--) {
            continue;
        }
    }
    if (false == false) {
        int ipukocug;
        for (ipukocug = 68; ipukocug > 0; ipukocug--) {
            continue;
        }
    }
    if (5356 == 5356) {
        int nuobqyimvp;
        for (nuobqyimvp = 75; nuobqyimvp > 0; nuobqyimvp--) {
            continue;
        }
    }
    return 14554;
}

double iyjbspz::bccodqmiamoiuhb(double dydmpybu, string itxtqddfljxzfc, int imsxfpntiucg) {
    double uvzjtv = 14866;
    bool mxcukjsww = true;
    bool spiwzfxeszt = true;
    double imarzrqbg = 54230;
    if (54230 == 54230) {
        int kcrry;
        for (kcrry = 38; kcrry > 0; kcrry--) {
            continue;
        }
    }
    if (14866 != 14866) {
        int iq;
        for (iq = 23; iq > 0; iq--) {
            continue;
        }
    }
    if (true != true) {
        int uec;
        for (uec = 16; uec > 0; uec--) {
            continue;
        }
    }
    if (true != true) {
        int nvgfhbavu;
        for (nvgfhbavu = 95; nvgfhbavu > 0; nvgfhbavu--) {
            continue;
        }
    }
    return 85581;
}

string iyjbspz::ivyrneytcqmf(int efpygsfxpfoimi, double avybhfzwdugm, int wetvb, string htdovhdqxvd, string khmeecp) {
    string uxdsmxxyswozcud = "ysuxutwkxqyhjbatfnban";
    if (string("ysuxutwkxqyhjbatfnban") == string("ysuxutwkxqyhjbatfnban")) {
        int grrq;
        for (grrq = 62; grrq > 0; grrq--) {
            continue;
        }
    }
    return string("dxddpmkrjywhnqrqt");
}

int iyjbspz::iuvpitwbse(double hsczk, int jeedhmuzpti, string apvlvcpvkqyxuxc, int qmudhtacbt, bool dgtnvn, double brmroqjlidio, bool iblvogapllw, bool zizaaxcqi) {
    return 49223;
}

double iyjbspz::smfcmcupcxfosjktjbkqrk(string wnkasjvu, int yzolnpcbtox, bool pndteejsskulunz, int lignodduulf, string oalkgbpq) {
    string ohvgcxgyopqg = "loqtjecocvngafazmxpemnwlecd";
    int fhxoa = 9720;
    int hcmiunrqrfc = 2744;
    double hkqutesnlz = 26058;
    string fiqpsektofzqj = "nyujuxnllflhwaxcwzktfwwxvbuhoeljliihnwxysljfccggodgx";
    string exqggw = "mihoyxnftwwkabcnrgqypqvffyiezdalalnpfwicpdvbvoupsanudijnixdluysrtbydgp";
    if (string("mihoyxnftwwkabcnrgqypqvffyiezdalalnpfwicpdvbvoupsanudijnixdluysrtbydgp") != string("mihoyxnftwwkabcnrgqypqvffyiezdalalnpfwicpdvbvoupsanudijnixdluysrtbydgp")) {
        int ebumbfsxch;
        for (ebumbfsxch = 33; ebumbfsxch > 0; ebumbfsxch--) {
            continue;
        }
    }
    if (string("nyujuxnllflhwaxcwzktfwwxvbuhoeljliihnwxysljfccggodgx") != string("nyujuxnllflhwaxcwzktfwwxvbuhoeljliihnwxysljfccggodgx")) {
        int diwzp;
        for (diwzp = 34; diwzp > 0; diwzp--) {
            continue;
        }
    }
    if (string("mihoyxnftwwkabcnrgqypqvffyiezdalalnpfwicpdvbvoupsanudijnixdluysrtbydgp") != string("mihoyxnftwwkabcnrgqypqvffyiezdalalnpfwicpdvbvoupsanudijnixdluysrtbydgp")) {
        int evwujjup;
        for (evwujjup = 31; evwujjup > 0; evwujjup--) {
            continue;
        }
    }
    if (26058 == 26058) {
        int kdxmelfx;
        for (kdxmelfx = 41; kdxmelfx > 0; kdxmelfx--) {
            continue;
        }
    }
    return 15134;
}

string iyjbspz::yqevkphqxthnes(string ibogxkotjc, string vxdwqcrlkv, int tintore, double bgzwjcsiurpg, int plxgqepaq, double oxoooepk, string hphzsn, double omgeb, bool kxgildrfslpb) {
    double hshuxncrefcyomu = 9431;
    if (9431 == 9431) {
        int up;
        for (up = 95; up > 0; up--) {
            continue;
        }
    }
    if (9431 == 9431) {
        int chdub;
        for (chdub = 100; chdub > 0; chdub--) {
            continue;
        }
    }
    if (9431 == 9431) {
        int zaofafc;
        for (zaofafc = 84; zaofafc > 0; zaofafc--) {
            continue;
        }
    }
    if (9431 != 9431) {
        int wvykvqu;
        for (wvykvqu = 84; wvykvqu > 0; wvykvqu--) {
            continue;
        }
    }
    return string("mbwjdfomlrqhtcgsnv");
}

string iyjbspz::bbnxpqnbwjfgvrukhascecjn(int ygobtw, bool cvxfgirc, string xxqxbxwavnmu, bool ogqrfajrtwworf, int mfxkhroxm, double gdzoimfcnfu) {
    bool iilduz = false;
    double mfauhwlvs = 65403;
    int cwugdlcijlw = 1248;
    string rocurwgudp = "clsvyzgviglkezcbcqinxdxaxoeogjuujdwerfcqmtksai";
    bool dowun = false;
    bool fbmfwxee = true;
    string dgkjhfbzesp = "z";
    int lbqqwfqplkkkj = 1078;
    if (true != true) {
        int xfrcwnppo;
        for (xfrcwnppo = 11; xfrcwnppo > 0; xfrcwnppo--) {
            continue;
        }
    }
    if (string("clsvyzgviglkezcbcqinxdxaxoeogjuujdwerfcqmtksai") != string("clsvyzgviglkezcbcqinxdxaxoeogjuujdwerfcqmtksai")) {
        int drchlszcl;
        for (drchlszcl = 86; drchlszcl > 0; drchlszcl--) {
            continue;
        }
    }
    return string("jwmjylvfkldypdzdqvgo");
}

double iyjbspz::qhkoidantmpdmttjj(string oxfeyvyqjnmvnis, int lrklcs, int gaauvssiefi, string qvxfkckgwtl, double texweqlrhpbl, double mpfakskw, string pffporlb, string bbkayimdyyhg, int gbostpqlc, int sqbfyten) {
    int ecyaz = 1355;
    bool hxnsgsuhpdt = false;
    int kfazy = 1351;
    bool eniqh = false;
    string mhhiire = "xleftfisolihgtmewqsnlsbhatyhvkssvzgpygabmyutogaqbelbkmxsybkkcicrslbojclvia";
    int kdoidmlhgi = 589;
    bool ququrhz = true;
    double zkdma = 3105;
    int zswjymkia = 1864;
    if (1864 == 1864) {
        int ajbsmiaq;
        for (ajbsmiaq = 31; ajbsmiaq > 0; ajbsmiaq--) {
            continue;
        }
    }
    if (false == false) {
        int dgfqbplv;
        for (dgfqbplv = 60; dgfqbplv > 0; dgfqbplv--) {
            continue;
        }
    }
    return 24484;
}

int iyjbspz::nhpsgosvishanuxnmze() {
    int vorygj = 1375;
    double mctcuge = 55351;
    string vcowhfmhxjmbnco = "bsqqcvpxhjoneybainpzvfderrgwewevgcyejzmxbouqcnvmonxpvpyburmujhiqtuanrtgdnkmxtmpnrb";
    int nfbslqvzatz = 2261;
    bool vosyysdwdsnf = false;
    bool clfwynyub = true;
    bool usohwmlz = false;
    return 70048;
}

iyjbspz::iyjbspz() {
    this->resxcdfqork(8423, true, string("yzjfcierwrkuqvcdytnynszrynzonmpmogdzfqdhyqjofknowzsrfihptbcjnncwsajwpxwtuzmdncx"), 9298, string("zytsticnsuhoil"), false, 299, 1625, string("sgiyqviwtoukmwkgxvuelawhkhkinkhgkzvurgpyosoryzcftswo"));
    this->sbxykjiijkqv(false, true, 8159);
    this->bccodqmiamoiuhb(14204, string("sojqsacdgzttfw"), 1195);
    this->ivyrneytcqmf(3861, 5505, 5517, string("dcjlitrocipajwzphrsiywogsqzuiggsdxnzqciofhbwhjaqqeisgbdylcxvpkxcnwssrrvdehqpvxpvpazkpzdhh"), string("cwvgioxqjrxekvvemrl"));
    this->iuvpitwbse(68997, 2439, string("rfhrhljmhxojrnpwemxkadytjjzp"), 1011, true, 14065, true, false);
    this->smfcmcupcxfosjktjbkqrk(string("utffheijgtenbesghobrhupsffnpvfirgtcqtbahozqchhztrkjbvklkiiurnqobtkyldajwyzoguzln"), 406, true, 89, string("rtxxbhuzjqzizgcsmbapogxzlrvkqphgawpkoanvlyyiwvsevukchoszcpvqabhkeenvpv"));
    this->yqevkphqxthnes(string("jktfhpddpxevprtsypjbuyiojsqdwdixzrswkdarabzejbvtmssmhaatra"), string(""), 3483, 11206, 305, 23380, string("aspgnthpqczdmnsuyfovgngrnuygxtqnqpeqymglfvncxweuofffdvsughmsfdqdhjgunsroxqafvgneclmomx"), 44596, false);
    this->bbnxpqnbwjfgvrukhascecjn(1504, true, string("biascavzdazohbmojdpanxycwjho"), false, 3896, 58411);
    this->qhkoidantmpdmttjj(string("fr"), 1325, 3206, string("vyhsihautedx"), 19311, 20310, string("dwkuucprfxegvviaoygqwlitadybuqmzhkinrfjoiqqifpxmvxgyztv"), string("sflumlfrclmzrarwwjdsspmioxjvoswyuttphcygtfzgjaiqfqvkwcutzvigxubaoetxswnmcvsi"), 153, 2022);
    this->nhpsgosvishanuxnmze();
    this->yvcgapzpiegr(45167, 7940, true, false, 4016, string("qwdkheqmcnxjclukuzxodkmsjedbfvycvoztaglksnbvbniqqsrkyoxxqfnzzekxnttkxwsrwjzzeqnedccmvygucbpjtvjecnlt"), false, string("licvmjtgddeitupybxxqyeqhaqkiresmlwigalacwgwodckjbvpblwqmyvtjioqqoi"), string("fspwvijnusegolcvqdpdkvbohpyqwtzkxvvywqsirrkvnerjhvmtjqkzeyy"));
    this->dzlboeoxtlbub(13438, string("anuystypbsuhhfebwinqjnxksrejxyqfaynkjqypojikytpuiggymtfoqaqclstzqgooakxvtxjadwdvpdaaertfkycubxthbtc"), 5572);
    this->kldgoudewobtjivsotfjomjgd(string("ixikgblkfonp"), 9162);
    this->wkegpsqgqlqw(1394);
    this->dodypjjmbk(6451, string("tqwlwcddexerheghedzeoyajryrzeshhydmhfqmjnrtkzeeuna"), true, 2244, 1364, string("kvvannsiiulplwuttkibpgylkvovdbkfyaaifnobeizoqx"), 34579);
    this->zmjyphvwvlcrn(5547);
    this->lrjsoeiyccbkdkndewyrgshf(6044, 191);
    this->fufiptxmvrireohvs(false, false, false, 21765, 2503, true);
    this->kzhtdycfehflns(false, true, false, false, string("vlrzguvcjmgobrrfunqmjrykkxfgcxslyrzjxvevlbgcxlrhsiavbvwjhormbzxhnpyccyitlkoppizwxteajk"));
    this->glfmwnrvvfukuggdtdfzcnend(string("dx"), string("wsdfiowzeijuzlmfdentrctqxpdajcwpor"), string("ycdaylkyqczixlwtpgxrhlaycnmuowoslxsloyeuoclwwjmdsxtnpqzkbnfkfmlibcslhtqiwzrcjqfznwscjypmclmpj"), string("mssskjeulibirzucuswviieeksdescljkwkdpnbprumxdexushrkolvdehpdeevd"), 89157, false);
    this->huzlxiililyxsyajqmovrlyt(true, true, 837, 10595, 31178, string("oxubbr"), 32102);
    this->hfysgoczamats(string("nvsjvudpiwg"), 616, string("dniuyeceqfxikiudlmzmcddemidxusczwfpxcghjwchtcvjrbcqkprjfiltigfksf"), 54509, false, true, 2652, 2001, 3504, true);
    this->ogzdbkwwdyizqtouxwgifpehb(1170, true, false, 2080, 1039, string("upbbunfvemzrbbigcebpkknratiiggqjxzwjleggxzdfhbxkmxcymbgwharp"), true, 491, 52164);
    this->wghxurtraricz(2634, 2122, 34, 10930, 1076);
    this->bkdyfoanqwjlvyywlnrg(string("kqxvxpakvzcmdeybdhjkiidfjlcpoqsknofzzkjejemnptygzmzghktiklwsqhbffcoyhetarklgceioues"), string("vlwrplhzakdsxkmzagcumimyngwsmyitdgjdoivdhxnnifsdbkutftvnamcbouyws"), true, string(""), string("bszwqazher"));
    this->hkygtzobmieubxrhs(string("rbqfnhoqpxemxsvprakorpjehtxvazwskxwwkunniqdwquekxvekdbyclb"), string("aruyrvayuhwazoegaugcrundfxjlxkpdnfjoweggowbfkrcfctwicgcosdsjjgjvaftruvuyeztvqptrfowtqzdofavlps"), true, 4672, false, 4914, 5413, true, 3218);
    this->ifjrczjfdbvzuscbw();
}




static auto playerByHandleWritable(int handle) noexcept
{
    const auto it = std::ranges::find(playerData, handle, &PlayerData::handle);
    return it != playerData.end() ? &(*it) : nullptr;
}

static void updateNetLatency() noexcept
{
    if (const auto networkChannel = interfaces->engine->getNetworkChannel())
        netOutgoingLatency = (std::max)(static_cast<int>(networkChannel->getLatency(0) * 1000.0f), 0);
    else
        netOutgoingLatency = 0;
}

constexpr auto playerVisibilityUpdateDelay = 0.1f;
static float nextPlayerVisibilityUpdateTime = 0.0f;

static bool shouldUpdatePlayerVisibility() noexcept
{
    return nextPlayerVisibilityUpdateTime <= memory->globalVars->realtime;
}

void GameData::update() noexcept
{
    static int lastFrame;
    if (lastFrame == memory->globalVars->framecount)
        return;
    lastFrame = memory->globalVars->framecount;

    updateNetLatency();

    Lock lock;
    observerData.clear();
    weaponData.clear();
    entityData.clear();
    lootCrateData.clear();
    infernoData.clear();

    localPlayerData.update();
    bombData.update();

    if (!localPlayer) {
        playerData.clear();
        projectileData.clear();
        return;
    }

    viewMatrix = interfaces->engine->worldToScreenMatrix();

    const auto observerTarget = localPlayer->getObserverMode() == ObsMode::InEye ? localPlayer->getObserverTarget() : nullptr;

    for (int i = 1; i <= interfaces->entityList->getHighestEntityIndex(); ++i) {
        const auto entity = interfaces->entityList->getEntity(i);
        if (!entity)
            continue;

        if (entity->isPlayer()) {
            if (entity == localPlayer.get() || entity == observerTarget)
                continue;

            if (const auto player = playerByHandleWritable(entity->handle())) {
                player->update(entity);
            } else {
                playerData.emplace_back(entity);
            }

            if (!entity->isDormant() && !entity->isAlive()) {
                if (const auto obs = entity->getObserverTarget())
                    observerData.emplace_back(entity, obs, obs == localPlayer.get());
            }
        } else {
            if (entity->isDormant())
                continue;

            if (entity->isWeapon()) {
                if (entity->ownerEntity() == -1)
                    weaponData.emplace_back(entity);
            } else {
                switch (entity->getClientClass()->classId) {
                case ClassId::BaseCSGrenadeProjectile:
                    if (entity->grenadeExploded()) {
                        if (const auto it = std::ranges::find(projectileData, entity->handle(), &ProjectileData::handle); it != projectileData.end())
                            it->exploded = true;
                        break;
                    }
                    [[fallthrough]];
                case ClassId::BreachChargeProjectile:
                case ClassId::BumpMineProjectile:
                case ClassId::DecoyProjectile:
                case ClassId::MolotovProjectile:
                case ClassId::SensorGrenadeProjectile:
                case ClassId::SmokeGrenadeProjectile:
                case ClassId::SnowballProjectile:
                    if (const auto it = std::ranges::find(projectileData, entity->handle(), &ProjectileData::handle); it != projectileData.end())
                        it->update(entity);
                    else
                        projectileData.emplace_front(entity);
                    break;
                case ClassId::DynamicProp:
                    if (const auto model = entity->getModel(); !model || !std::strstr(model->name, "challenge_coin"))
                        break;
                    [[fallthrough]];
                case ClassId::EconEntity:
                case ClassId::Chicken:
                case ClassId::PlantedC4:
                case ClassId::Hostage:
                case ClassId::Dronegun:
                case ClassId::Cash:
                case ClassId::AmmoBox:
                case ClassId::RadarJammer:
                case ClassId::SnowballPile:
                    entityData.emplace_back(entity);
                    break;
                case ClassId::LootCrate:
                    lootCrateData.emplace_back(entity);
                    break;
                case ClassId::Inferno:
                    infernoData.emplace_back(entity);
                    break;
                }
            }
        }
    }

    std::sort(playerData.begin(), playerData.end());
    std::sort(weaponData.begin(), weaponData.end());
    std::sort(entityData.begin(), entityData.end());
    std::sort(lootCrateData.begin(), lootCrateData.end());

    std::ranges::for_each(projectileData, [](auto& projectile) {
        if (interfaces->entityList->getEntityFromHandle(projectile.handle) == nullptr)
            projectile.exploded = true;
    });

    std::erase_if(projectileData, [](const auto& projectile) { return interfaces->entityList->getEntityFromHandle(projectile.handle) == nullptr
        && (projectile.trajectory.size() < 1 || projectile.trajectory[projectile.trajectory.size() - 1].first + 60.0f < memory->globalVars->realtime); });

    std::erase_if(playerData, [](const auto& player) { return interfaces->entityList->getEntityFromHandle(player.handle) == nullptr; });

    if (shouldUpdatePlayerVisibility())
        nextPlayerVisibilityUpdateTime = memory->globalVars->realtime + playerVisibilityUpdateDelay;
}

void GameData::clearProjectileList() noexcept
{
    Lock lock;
    projectileData.clear();
}

static void clearAvatarTextures() noexcept;

struct PlayerAvatar {
    mutable Texture texture;
    std::unique_ptr<std::uint8_t[]> rgba;
};

static std::unordered_map<int, PlayerAvatar> playerAvatars;

void GameData::clearTextures() noexcept
{
    Lock lock;

    clearAvatarTextures();
    for (const auto& [handle, avatar] : playerAvatars)
        avatar.texture.clear();
}

void GameData::clearUnusedAvatars() noexcept
{
    Lock lock;
    std::erase_if(playerAvatars, [](const auto& pair) { return std::ranges::find(std::as_const(playerData), pair.first, &PlayerData::handle) == playerData.cend(); });
}

int GameData::getNetOutgoingLatency() noexcept
{
    return netOutgoingLatency;
}

const Matrix4x4& GameData::toScreenMatrix() noexcept
{
    return viewMatrix;
}

const LocalPlayerData& GameData::local() noexcept
{
    return localPlayerData;
}

const std::vector<PlayerData>& GameData::players() noexcept
{
    return playerData;
}

const PlayerData* GameData::playerByHandle(int handle) noexcept
{
    return playerByHandleWritable(handle);
}

const std::vector<ObserverData>& GameData::observers() noexcept
{
    return observerData;
}

const std::vector<WeaponData>& GameData::weapons() noexcept
{
    return weaponData;
}

const std::vector<EntityData>& GameData::entities() noexcept
{
    return entityData;
}

const std::vector<LootCrateData>& GameData::lootCrates() noexcept
{
    return lootCrateData;
}

const std::forward_list<ProjectileData>& GameData::projectiles() noexcept
{
    return projectileData;
}

const BombData& GameData::plantedC4() noexcept
{
    return bombData;
}

const std::vector<InfernoData>& GameData::infernos() noexcept
{
    return infernoData;
}

void LocalPlayerData::update() noexcept
{
    if (!localPlayer) {
        exists = false;
        return;
    }

    exists = true;
    alive = localPlayer->isAlive();

    if (const auto activeWeapon = localPlayer->getActiveWeapon()) {
        inReload = activeWeapon->isInReload();
        shooting = localPlayer->shotsFired() > 1;
        noScope = activeWeapon->isSniperRifle() && !localPlayer->isScoped();
        nextWeaponAttack = activeWeapon->nextPrimaryAttack();
    }
    fov = localPlayer->fov() ? localPlayer->fov() : localPlayer->defaultFov();
    handle = localPlayer->handle();
    flashDuration = localPlayer->flashDuration();

    aimPunch = localPlayer->getEyePosition() + Vector::fromAngle(interfaces->engine->getViewAngles() + localPlayer->getAimPunch()) * 1000.0f;

    const auto obsMode = localPlayer->getObserverMode();
    if (const auto obs = localPlayer->getObserverTarget(); obs && obsMode != ObsMode::Roaming && obsMode != ObsMode::Deathcam)
        origin = obs->getAbsOrigin();
    else
        origin = localPlayer->getAbsOrigin();
}

BaseData::BaseData(Entity* entity) noexcept
{
    distanceToLocal = entity->getAbsOrigin().distTo(localPlayerData.origin);
 
    if (entity->isPlayer()) {
        const auto collideable = entity->getCollideable();
        obbMins = collideable->obbMins();
        obbMaxs = collideable->obbMaxs();
    } else if (const auto model = entity->getModel()) {
        obbMins = model->mins;
        obbMaxs = model->maxs;
    }

    coordinateFrame = entity->toWorldTransform();
}

EntityData::EntityData(Entity* entity) noexcept : BaseData{ entity }
{
    name = [](Entity* entity) {
        switch (entity->getClientClass()->classId) {
        case ClassId::EconEntity: return "Defuse Kit";
        case ClassId::Chicken: return "Chicken";
        case ClassId::PlantedC4: return "Planted C4";
        case ClassId::Hostage: return "Hostage";
        case ClassId::Dronegun: return "Sentry";
        case ClassId::Cash: return "Cash";
        case ClassId::AmmoBox: return "Ammo Box";
        case ClassId::RadarJammer: return "Radar Jammer";
        case ClassId::SnowballPile: return "Snowball Pile";
        case ClassId::DynamicProp: return "Collectable Coin";
        default: assert(false); return "unknown";
        }
    }(entity);
}

ProjectileData::ProjectileData(Entity* projectile) noexcept : BaseData { projectile }
{
    name = [](Entity* projectile) {
        switch (projectile->getClientClass()->classId) {
        case ClassId::BaseCSGrenadeProjectile:
            if (const auto model = projectile->getModel(); model && strstr(model->name, "flashbang"))
                return "Flashbang";
            else
                return "HE Grenade";
        case ClassId::BreachChargeProjectile: return "Breach Charge";
        case ClassId::BumpMineProjectile: return "Bump Mine";
        case ClassId::DecoyProjectile: return "Decoy Grenade";
        case ClassId::MolotovProjectile: return "Molotov";
        case ClassId::SensorGrenadeProjectile: return "TA Grenade";
        case ClassId::SmokeGrenadeProjectile: return "Smoke Grenade";
        case ClassId::SnowballProjectile: return "Snowball";
        default: assert(false); return "unknown";
        }
    }(projectile);

    if (const auto thrower = interfaces->entityList->getEntityFromHandle(projectile->thrower()); thrower && localPlayer) {
        if (thrower == localPlayer.get())
            thrownByLocalPlayer = true;
        else
            thrownByEnemy = memory->isOtherEnemy(localPlayer.get(), thrower);
    }

    handle = projectile->handle();
}

void ProjectileData::update(Entity* projectile) noexcept
{
    static_cast<BaseData&>(*this) = { projectile };

    if (const auto& pos = projectile->getAbsOrigin(); trajectory.size() < 1 || trajectory[trajectory.size() - 1].second != pos)
        trajectory.emplace_back(memory->globalVars->realtime, pos);
}

PlayerData::PlayerData(Entity* entity) noexcept : BaseData{ entity }, handle{ entity->handle() }
{
    if (const auto steamID = entity->getSteamId()) {
        const auto ctx = interfaces->engine->getSteamAPIContext();
        const auto avatar = ctx->steamFriends->getSmallFriendAvatar(steamID);
        constexpr auto rgbaDataSize = 4 * 32 * 32;

        PlayerAvatar playerAvatar;
        playerAvatar.rgba = std::make_unique<std::uint8_t[]>(rgbaDataSize);
        if (ctx->steamUtils->getImageRGBA(avatar, playerAvatar.rgba.get(), rgbaDataSize))
            playerAvatars[handle] = std::move(playerAvatar);
    }

    update(entity);
}

void PlayerData::update(Entity* entity) noexcept
{
    name = entity->getPlayerName();

    dormant = entity->isDormant();
    if (dormant)
        return;

    team = entity->getTeamNumber();
    static_cast<BaseData&>(*this) = { entity };
    origin = entity->getAbsOrigin();
    inViewFrustum = !interfaces->engine->cullBox(obbMins + origin, obbMaxs + origin);
    alive = entity->isAlive();
    lastContactTime = alive ? memory->globalVars->realtime : 0.0f;

    if (localPlayer) {
        enemy = memory->isOtherEnemy(entity, localPlayer.get());

        if (!inViewFrustum || !alive)
            visible = false;
        else if (shouldUpdatePlayerVisibility())
            visible = entity->visibleTo(localPlayer.get());
    }

    constexpr auto isEntityAudible = [](int entityIndex) noexcept {
        for (int i = 0; i < memory->activeChannels->count; ++i)
            if (memory->channels[memory->activeChannels->list[i]].soundSource == entityIndex)
                return true;
        return false;
    };

    audible = isEntityAudible(entity->index());
    spotted = entity->spotted();
    health = entity->health();
    immune = entity->gunGameImmunity();
    flashDuration = entity->flashDuration();

    if (const auto weapon = entity->getActiveWeapon()) {
        audible = audible || isEntityAudible(weapon->index());
        if (const auto weaponInfo = weapon->getWeaponData())
            activeWeapon = interfaces->localize->findAsUTF8(weaponInfo->name);
    }

    if (!alive || !inViewFrustum)
        return;

    const auto model = entity->getModel();
    if (!model)
        return;

    const auto studioModel = interfaces->modelInfo->getStudioModel(model);
    if (!studioModel)
        return;

    matrix3x4 boneMatrices[MAXSTUDIOBONES];
    if (!entity->setupBones(boneMatrices, MAXSTUDIOBONES, BONE_USED_BY_HITBOX, memory->globalVars->currenttime))
        return;

    bones.clear();
    bones.reserve(20);

    for (int i = 0; i < studioModel->numBones; ++i) {
        const auto bone = studioModel->getBone(i);

        if (!bone || bone->parent == -1 || !(bone->flags & BONE_USED_BY_HITBOX))
            continue;

        bones.emplace_back(boneMatrices[i].origin(), boneMatrices[bone->parent].origin());
    }

    const auto set = studioModel->getHitboxSet(entity->hitboxSet());
    if (!set)
        return;

    const auto headBox = set->getHitbox(0);

    headMins = headBox->bbMin.transform(boneMatrices[headBox->bone]);
    headMaxs = headBox->bbMax.transform(boneMatrices[headBox->bone]);

    if (headBox->capsuleRadius > 0.0f) {
        headMins -= headBox->capsuleRadius;
        headMaxs += headBox->capsuleRadius;
    }
}

struct PNGTexture {
    template <std::size_t N>
    PNGTexture(const std::array<char, N>& png) noexcept : pngData{ png.data() }, pngDataSize{ png.size() } {}

    ImTextureID getTexture() const noexcept
    {
        if (!texture.get()) {
            int width, height;
            stbi_set_flip_vertically_on_load_thread(false);

            if (const auto data = stbi_load_from_memory((const stbi_uc*)pngData, pngDataSize, &width, &height, nullptr, STBI_rgb_alpha)) {
                texture.init(width, height, data);
                stbi_image_free(data);
            } else {
                assert(false);
            }
        }

        return texture.get();
    }

    void clearTexture() const noexcept { texture.clear(); }

private:
    const char* pngData;
    std::size_t pngDataSize;

    mutable Texture texture;
};

static const PNGTexture avatarTT{ Resource::avatar_tt };
static const PNGTexture avatarCT{ Resource::avatar_ct };

static void clearAvatarTextures() noexcept
{
    avatarTT.clearTexture();
    avatarCT.clearTexture();
}

ImTextureID PlayerData::getAvatarTexture() const noexcept
{
    const auto it = std::as_const(playerAvatars).find(handle);
    if (it == playerAvatars.cend())
        return team == Team::TT ? avatarTT.getTexture() : avatarCT.getTexture();

    const auto& avatar = it->second;
    if (!avatar.texture.get())
        avatar.texture.init(32, 32, avatar.rgba.get());
    return avatar.texture.get();
}

float PlayerData::fadingAlpha() const noexcept
{
    constexpr float fadeTime = 1.50f;
    return std::clamp(1.0f - (memory->globalVars->realtime - lastContactTime - 0.25f) / fadeTime, 0.0f, 1.0f);
}

WeaponData::WeaponData(Entity* entity) noexcept : BaseData{ entity }
{
    clip = entity->clip();
    reserveAmmo = entity->reserveAmmoCount();

    if (const auto weaponInfo = entity->getWeaponData()) {
        group = [](WeaponType type, WeaponId weaponId) {
            switch (type) {
            case WeaponType::Pistol: return "Pistols";
            case WeaponType::SubMachinegun: return "SMGs";
            case WeaponType::Rifle: return "Rifles";
            case WeaponType::SniperRifle: return "Sniper Rifles";
            case WeaponType::Shotgun: return "Shotguns";
            case WeaponType::Machinegun: return "Machineguns";
            case WeaponType::Grenade: return "Grenades";
            case WeaponType::Melee: return "Melee";
            default:
                switch (weaponId) {
                case WeaponId::C4:
                case WeaponId::Healthshot:
                case WeaponId::BumpMine:
                case WeaponId::ZoneRepulsor:
                case WeaponId::Shield:
                    return "Other";
                default: return "All";
                }
            }
        }(weaponInfo->type, entity->itemDefinitionIndex2());
        name = [](WeaponId weaponId) {
            switch (weaponId) {
            default: return "All";

            case WeaponId::Glock: return "Glock-18";
            case WeaponId::Hkp2000: return "P2000";
            case WeaponId::Usp_s: return "USP-S";
            case WeaponId::Elite: return "Dual Berettas";
            case WeaponId::P250: return "P250";
            case WeaponId::Tec9: return "Tec-9";
            case WeaponId::Fiveseven: return "Five-SeveN";
            case WeaponId::Cz75a: return "CZ75-Auto";
            case WeaponId::Deagle: return "Desert Eagle";
            case WeaponId::Revolver: return "R8 Revolver";

            case WeaponId::Mac10: return "MAC-10";
            case WeaponId::Mp9: return "MP9";
            case WeaponId::Mp7: return "MP7";
            case WeaponId::Mp5sd: return "MP5-SD";
            case WeaponId::Ump45: return "UMP-45";
            case WeaponId::P90: return "P90";
            case WeaponId::Bizon: return "PP-Bizon";

            case WeaponId::GalilAr: return "Galil AR";
            case WeaponId::Famas: return "FAMAS";
            case WeaponId::Ak47: return "AK-47";
            case WeaponId::M4A1: return "M4A4";
            case WeaponId::M4a1_s: return "M4A1-S";
            case WeaponId::Sg553: return "SG 553";
            case WeaponId::Aug: return "AUG";

            case WeaponId::Ssg08: return "SSG 08";
            case WeaponId::Awp: return "AWP";
            case WeaponId::G3SG1: return "G3SG1";
            case WeaponId::Scar20: return "SCAR-20";

            case WeaponId::Nova: return "Nova";
            case WeaponId::Xm1014: return "XM1014";
            case WeaponId::Sawedoff: return "Sawed-Off";
            case WeaponId::Mag7: return "MAG-7";

            case WeaponId::M249: return "M249";
            case WeaponId::Negev: return "Negev";

            case WeaponId::Flashbang: return "Flashbang";
            case WeaponId::HeGrenade: return "HE Grenade";
            case WeaponId::SmokeGrenade: return "Smoke Grenade";
            case WeaponId::Molotov: return "Molotov";
            case WeaponId::Decoy: return "Decoy Grenade";
            case WeaponId::IncGrenade: return "Incendiary";
            case WeaponId::TaGrenade: return "TA Grenade";
            case WeaponId::Firebomb: return "Fire Bomb";
            case WeaponId::Diversion: return "Diversion";
            case WeaponId::FragGrenade: return "Frag Grenade";
            case WeaponId::Snowball: return "Snowball";

            case WeaponId::Axe: return "Axe";
            case WeaponId::Hammer: return "Hammer";
            case WeaponId::Spanner: return "Wrench";

            case WeaponId::C4: return "C4";
            case WeaponId::Healthshot: return "Healthshot";
            case WeaponId::BumpMine: return "Bump Mine";
            case WeaponId::ZoneRepulsor: return "Zone Repulsor";
            case WeaponId::Shield: return "Shield";
            }
        }(entity->itemDefinitionIndex2());

        displayName = interfaces->localize->findAsUTF8(weaponInfo->name);
    }
}

LootCrateData::LootCrateData(Entity* entity) noexcept : BaseData{ entity }
{
    const auto model = entity->getModel();
    if (!model)
        return;

    name = [](const char* modelName) -> const char* {
        switch (fnv::hashRuntime(modelName)) {
        case fnv::hash("models/props_survival/cases/case_pistol.mdl"): return "Pistol Case";
        case fnv::hash("models/props_survival/cases/case_light_weapon.mdl"): return "Light Case";
        case fnv::hash("models/props_survival/cases/case_heavy_weapon.mdl"): return "Heavy Case";
        case fnv::hash("models/props_survival/cases/case_explosive.mdl"): return "Explosive Case";
        case fnv::hash("models/props_survival/cases/case_tools.mdl"): return "Tools Case";
        case fnv::hash("models/props_survival/cash/dufflebag.mdl"): return "Cash Dufflebag";
        default: return nullptr;
        }
    }(model->name);
}

ObserverData::ObserverData(Entity* entity, Entity* obs, bool targetIsLocalPlayer) noexcept : playerHandle{ entity->handle() }, targetHandle{ obs->handle() }, targetIsLocalPlayer{ targetIsLocalPlayer } {}

void BombData::update() noexcept
{
    if (memory->plantedC4s->size > 0 && (!*memory->gameRules || (*memory->gameRules)->mapHasBombTarget())) {
        if (const auto bomb = (*memory->plantedC4s)[0]; bomb && bomb->c4Ticking()) {
            blowTime = bomb->c4BlowTime();
            timerLength = bomb->c4TimerLength();
            defuserHandle = bomb->c4Defuser();
            if (defuserHandle != -1) {
                defuseCountDown = bomb->c4DefuseCountDown();
                defuseLength = bomb->c4DefuseLength();
            }

            if (*memory->playerResource) {
                const auto& bombOrigin = bomb->origin();
                bombsite = bombOrigin.distTo((*memory->playerResource)->bombsiteCenterA()) > bombOrigin.distTo((*memory->playerResource)->bombsiteCenterB());
            }
            return;
        }
    }
    blowTime = 0.0f;
}

InfernoData::InfernoData(Entity* inferno) noexcept
{
    const auto& origin = inferno->getAbsOrigin();

    points.reserve(inferno->fireCount());
    for (int i = 0; i < inferno->fireCount(); ++i) {
        if (inferno->fireIsBurning()[i])
            points.emplace_back(inferno->fireXDelta()[i] + origin.x, inferno->fireYDelta()[i] + origin.y, inferno->fireZDelta()[i] + origin.z);
    }
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class OBDLYPFOEQ
{ 
  void xjCFiXLqxu()
  { 
      bool EhIkRbislO = false;
      bool ELQhIMXLXT = false;
      bool GBbWutgaNI = false;
      bool NwLMhjprgi = false;
      bool xlTSBmtlly = false;
      bool pssKBDFkpX = false;
      bool uIfcAIADAY = false;
      bool VedoVTgJVH = false;
      bool zuoOSTCALe = false;
      bool dEBJnoGpRs = false;
      bool lqlMbKPEog = false;
      bool VwPhXATQKg = false;
      bool FArVtRcUAf = false;
      bool NpqcUIIblH = false;
      bool EyLdIhoTkn = false;
      bool VofkmlyQSK = false;
      bool htDITfFlMO = false;
      bool qqdDbGoONM = false;
      bool bJiMKXKFoi = false;
      bool KrJaZJtDJb = false;
      string zLoTDsLMDq;
      string JuWhECGmUe;
      string WxZfThtLRl;
      string bcIjjVakyX;
      string UpgMyRJyCM;
      string RAeiSCkIAV;
      string yAuROgmmxi;
      string bUnwKfPNhB;
      string YwIEUbyYRh;
      string jSjcYUuPxR;
      string eWATjwLhYl;
      string lXZzwBqpwm;
      string iNUPyJjKWo;
      string kzQPWBwoUX;
      string PPAeuLrkgX;
      string dESJhQBkUZ;
      string LBKiAmHKcu;
      string FBUYXSMpUl;
      string RzdzLgfGhF;
      string zKUtLOFQdH;
      if(zLoTDsLMDq == eWATjwLhYl){EhIkRbislO = true;}
      else if(eWATjwLhYl == zLoTDsLMDq){lqlMbKPEog = true;}
      if(JuWhECGmUe == lXZzwBqpwm){ELQhIMXLXT = true;}
      else if(lXZzwBqpwm == JuWhECGmUe){VwPhXATQKg = true;}
      if(WxZfThtLRl == iNUPyJjKWo){GBbWutgaNI = true;}
      else if(iNUPyJjKWo == WxZfThtLRl){FArVtRcUAf = true;}
      if(bcIjjVakyX == kzQPWBwoUX){NwLMhjprgi = true;}
      else if(kzQPWBwoUX == bcIjjVakyX){NpqcUIIblH = true;}
      if(UpgMyRJyCM == PPAeuLrkgX){xlTSBmtlly = true;}
      else if(PPAeuLrkgX == UpgMyRJyCM){EyLdIhoTkn = true;}
      if(RAeiSCkIAV == dESJhQBkUZ){pssKBDFkpX = true;}
      else if(dESJhQBkUZ == RAeiSCkIAV){VofkmlyQSK = true;}
      if(yAuROgmmxi == LBKiAmHKcu){uIfcAIADAY = true;}
      else if(LBKiAmHKcu == yAuROgmmxi){htDITfFlMO = true;}
      if(bUnwKfPNhB == FBUYXSMpUl){VedoVTgJVH = true;}
      if(YwIEUbyYRh == RzdzLgfGhF){zuoOSTCALe = true;}
      if(jSjcYUuPxR == zKUtLOFQdH){dEBJnoGpRs = true;}
      while(FBUYXSMpUl == bUnwKfPNhB){qqdDbGoONM = true;}
      while(RzdzLgfGhF == RzdzLgfGhF){bJiMKXKFoi = true;}
      while(zKUtLOFQdH == zKUtLOFQdH){KrJaZJtDJb = true;}
      if(EhIkRbislO == true){EhIkRbislO = false;}
      if(ELQhIMXLXT == true){ELQhIMXLXT = false;}
      if(GBbWutgaNI == true){GBbWutgaNI = false;}
      if(NwLMhjprgi == true){NwLMhjprgi = false;}
      if(xlTSBmtlly == true){xlTSBmtlly = false;}
      if(pssKBDFkpX == true){pssKBDFkpX = false;}
      if(uIfcAIADAY == true){uIfcAIADAY = false;}
      if(VedoVTgJVH == true){VedoVTgJVH = false;}
      if(zuoOSTCALe == true){zuoOSTCALe = false;}
      if(dEBJnoGpRs == true){dEBJnoGpRs = false;}
      if(lqlMbKPEog == true){lqlMbKPEog = false;}
      if(VwPhXATQKg == true){VwPhXATQKg = false;}
      if(FArVtRcUAf == true){FArVtRcUAf = false;}
      if(NpqcUIIblH == true){NpqcUIIblH = false;}
      if(EyLdIhoTkn == true){EyLdIhoTkn = false;}
      if(VofkmlyQSK == true){VofkmlyQSK = false;}
      if(htDITfFlMO == true){htDITfFlMO = false;}
      if(qqdDbGoONM == true){qqdDbGoONM = false;}
      if(bJiMKXKFoi == true){bJiMKXKFoi = false;}
      if(KrJaZJtDJb == true){KrJaZJtDJb = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class UHOEGDAIRV
{ 
  void dNiRQlOZsx()
  { 
      bool BUTOuWqFms = false;
      bool wgPSqewoFS = false;
      bool NjSDtjKGHm = false;
      bool FIJIESCESx = false;
      bool ltMRiSKKpl = false;
      bool AnCIqRCQUK = false;
      bool MkyzmmWHOY = false;
      bool cqVHgSXBTa = false;
      bool ZzPUmQGBQl = false;
      bool QljHkAwMdu = false;
      bool uCwRJJSuaX = false;
      bool tAxskMUcMW = false;
      bool gVpcIqGNWf = false;
      bool WKXXfWCxLd = false;
      bool yKZrrPopWX = false;
      bool fSzGOYLTJS = false;
      bool CFYtBibZNN = false;
      bool KXRiYWuykr = false;
      bool CQpyAEKQIG = false;
      bool LinrarlfqI = false;
      string KFlpMefdOu;
      string kOLtUMXUcA;
      string COJqFHGTyb;
      string tPcXFlKRYp;
      string QMLUMyOwzT;
      string goKouuutjE;
      string XMfmBUlmoh;
      string CGwmjoDoeG;
      string sKTetFEmcJ;
      string qPgTSDgXSr;
      string MbHQRarXFF;
      string rFPdLMrBsw;
      string PyJeqmYbTf;
      string IeVltRCDMT;
      string MggXRkzDIF;
      string LfeWbNRcYe;
      string BPDZwMidis;
      string KnnZjiQkMF;
      string nVTOTczzKf;
      string zZdhRwcHbE;
      if(KFlpMefdOu == MbHQRarXFF){BUTOuWqFms = true;}
      else if(MbHQRarXFF == KFlpMefdOu){uCwRJJSuaX = true;}
      if(kOLtUMXUcA == rFPdLMrBsw){wgPSqewoFS = true;}
      else if(rFPdLMrBsw == kOLtUMXUcA){tAxskMUcMW = true;}
      if(COJqFHGTyb == PyJeqmYbTf){NjSDtjKGHm = true;}
      else if(PyJeqmYbTf == COJqFHGTyb){gVpcIqGNWf = true;}
      if(tPcXFlKRYp == IeVltRCDMT){FIJIESCESx = true;}
      else if(IeVltRCDMT == tPcXFlKRYp){WKXXfWCxLd = true;}
      if(QMLUMyOwzT == MggXRkzDIF){ltMRiSKKpl = true;}
      else if(MggXRkzDIF == QMLUMyOwzT){yKZrrPopWX = true;}
      if(goKouuutjE == LfeWbNRcYe){AnCIqRCQUK = true;}
      else if(LfeWbNRcYe == goKouuutjE){fSzGOYLTJS = true;}
      if(XMfmBUlmoh == BPDZwMidis){MkyzmmWHOY = true;}
      else if(BPDZwMidis == XMfmBUlmoh){CFYtBibZNN = true;}
      if(CGwmjoDoeG == KnnZjiQkMF){cqVHgSXBTa = true;}
      if(sKTetFEmcJ == nVTOTczzKf){ZzPUmQGBQl = true;}
      if(qPgTSDgXSr == zZdhRwcHbE){QljHkAwMdu = true;}
      while(KnnZjiQkMF == CGwmjoDoeG){KXRiYWuykr = true;}
      while(nVTOTczzKf == nVTOTczzKf){CQpyAEKQIG = true;}
      while(zZdhRwcHbE == zZdhRwcHbE){LinrarlfqI = true;}
      if(BUTOuWqFms == true){BUTOuWqFms = false;}
      if(wgPSqewoFS == true){wgPSqewoFS = false;}
      if(NjSDtjKGHm == true){NjSDtjKGHm = false;}
      if(FIJIESCESx == true){FIJIESCESx = false;}
      if(ltMRiSKKpl == true){ltMRiSKKpl = false;}
      if(AnCIqRCQUK == true){AnCIqRCQUK = false;}
      if(MkyzmmWHOY == true){MkyzmmWHOY = false;}
      if(cqVHgSXBTa == true){cqVHgSXBTa = false;}
      if(ZzPUmQGBQl == true){ZzPUmQGBQl = false;}
      if(QljHkAwMdu == true){QljHkAwMdu = false;}
      if(uCwRJJSuaX == true){uCwRJJSuaX = false;}
      if(tAxskMUcMW == true){tAxskMUcMW = false;}
      if(gVpcIqGNWf == true){gVpcIqGNWf = false;}
      if(WKXXfWCxLd == true){WKXXfWCxLd = false;}
      if(yKZrrPopWX == true){yKZrrPopWX = false;}
      if(fSzGOYLTJS == true){fSzGOYLTJS = false;}
      if(CFYtBibZNN == true){CFYtBibZNN = false;}
      if(KXRiYWuykr == true){KXRiYWuykr = false;}
      if(CQpyAEKQIG == true){CQpyAEKQIG = false;}
      if(LinrarlfqI == true){LinrarlfqI = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class YXWHGCFPII
{ 
  void gmOYfjljuM()
  { 
      bool sgoQTgwuOs = false;
      bool SGTCBIGZFO = false;
      bool dZnIZHMzPB = false;
      bool cBdYmUtFfs = false;
      bool ICKszKAFkC = false;
      bool YPMJtSsfqL = false;
      bool UweNPQbtPg = false;
      bool NBtLFbPtJP = false;
      bool HGOMcNoTeT = false;
      bool bNOTXLWwch = false;
      bool hFpEnWVAER = false;
      bool DyWaDNhRkC = false;
      bool bIPwEAmZms = false;
      bool ESQagCQJYF = false;
      bool qnPMPdqmQK = false;
      bool dELaGZotzn = false;
      bool jwMKMjgwsB = false;
      bool wXsfKnsCfa = false;
      bool IzJcPAHoUH = false;
      bool MWJjUuaEzf = false;
      string FbZUoPshNm;
      string ZVQtYmifbH;
      string ssAGgoCmCm;
      string fIAPFnykaW;
      string SrZsMYHCpA;
      string qOYuLMbSnz;
      string NGeaHRVAoj;
      string nyFEnBSHtH;
      string hzwCwRiEDr;
      string MfxaJMMzlu;
      string DGNFLsITHJ;
      string sUYfRNKcdp;
      string hQxwXIAeub;
      string oSUyEakppD;
      string IOxsyrGQIu;
      string BiVuMlJRhD;
      string rcYeUazZbq;
      string bUlagTTDxf;
      string BjWzZFxYlS;
      string QTHmKepRYX;
      if(FbZUoPshNm == DGNFLsITHJ){sgoQTgwuOs = true;}
      else if(DGNFLsITHJ == FbZUoPshNm){hFpEnWVAER = true;}
      if(ZVQtYmifbH == sUYfRNKcdp){SGTCBIGZFO = true;}
      else if(sUYfRNKcdp == ZVQtYmifbH){DyWaDNhRkC = true;}
      if(ssAGgoCmCm == hQxwXIAeub){dZnIZHMzPB = true;}
      else if(hQxwXIAeub == ssAGgoCmCm){bIPwEAmZms = true;}
      if(fIAPFnykaW == oSUyEakppD){cBdYmUtFfs = true;}
      else if(oSUyEakppD == fIAPFnykaW){ESQagCQJYF = true;}
      if(SrZsMYHCpA == IOxsyrGQIu){ICKszKAFkC = true;}
      else if(IOxsyrGQIu == SrZsMYHCpA){qnPMPdqmQK = true;}
      if(qOYuLMbSnz == BiVuMlJRhD){YPMJtSsfqL = true;}
      else if(BiVuMlJRhD == qOYuLMbSnz){dELaGZotzn = true;}
      if(NGeaHRVAoj == rcYeUazZbq){UweNPQbtPg = true;}
      else if(rcYeUazZbq == NGeaHRVAoj){jwMKMjgwsB = true;}
      if(nyFEnBSHtH == bUlagTTDxf){NBtLFbPtJP = true;}
      if(hzwCwRiEDr == BjWzZFxYlS){HGOMcNoTeT = true;}
      if(MfxaJMMzlu == QTHmKepRYX){bNOTXLWwch = true;}
      while(bUlagTTDxf == nyFEnBSHtH){wXsfKnsCfa = true;}
      while(BjWzZFxYlS == BjWzZFxYlS){IzJcPAHoUH = true;}
      while(QTHmKepRYX == QTHmKepRYX){MWJjUuaEzf = true;}
      if(sgoQTgwuOs == true){sgoQTgwuOs = false;}
      if(SGTCBIGZFO == true){SGTCBIGZFO = false;}
      if(dZnIZHMzPB == true){dZnIZHMzPB = false;}
      if(cBdYmUtFfs == true){cBdYmUtFfs = false;}
      if(ICKszKAFkC == true){ICKszKAFkC = false;}
      if(YPMJtSsfqL == true){YPMJtSsfqL = false;}
      if(UweNPQbtPg == true){UweNPQbtPg = false;}
      if(NBtLFbPtJP == true){NBtLFbPtJP = false;}
      if(HGOMcNoTeT == true){HGOMcNoTeT = false;}
      if(bNOTXLWwch == true){bNOTXLWwch = false;}
      if(hFpEnWVAER == true){hFpEnWVAER = false;}
      if(DyWaDNhRkC == true){DyWaDNhRkC = false;}
      if(bIPwEAmZms == true){bIPwEAmZms = false;}
      if(ESQagCQJYF == true){ESQagCQJYF = false;}
      if(qnPMPdqmQK == true){qnPMPdqmQK = false;}
      if(dELaGZotzn == true){dELaGZotzn = false;}
      if(jwMKMjgwsB == true){jwMKMjgwsB = false;}
      if(wXsfKnsCfa == true){wXsfKnsCfa = false;}
      if(IzJcPAHoUH == true){IzJcPAHoUH = false;}
      if(MWJjUuaEzf == true){MWJjUuaEzf = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class GGVGNHMYPT
{ 
  void idZcHZHJeC()
  { 
      bool eiiTKNtUHy = false;
      bool HnHfBGElfS = false;
      bool qsFtbHFeLd = false;
      bool TpzbSYNYjr = false;
      bool wtisugpsmF = false;
      bool RIRZlkcnqD = false;
      bool HPIceRnfNb = false;
      bool sfCnVwJMyu = false;
      bool QMqFLKXYog = false;
      bool uYgfjfkGNd = false;
      bool rKeLMlFcDo = false;
      bool aQowmuYCQT = false;
      bool sOpffTyVEp = false;
      bool KDyTCGgfsY = false;
      bool FtVAFeijso = false;
      bool HhoskcTzer = false;
      bool njYNeXRVsg = false;
      bool NrJrOyspZB = false;
      bool kNbPibOFiZ = false;
      bool lhBBkUVIUh = false;
      string DVpzgdebSK;
      string ZTbhZSELId;
      string bCHdgJzAPj;
      string LLaQxMuwlN;
      string FqOdTMjlEU;
      string nhnHzANMRW;
      string edMizOrLkM;
      string WHZtYjmdJU;
      string ZMuuucWTRw;
      string zidOiaefdE;
      string UYBrxfItiO;
      string NjCxxRhQmV;
      string qYsnNncKLx;
      string FHzFzALDxP;
      string UcjCiPfgQQ;
      string rNrINweMdJ;
      string DyhlJFjxyx;
      string FeSXBOnqEy;
      string HwsuFqOqqD;
      string UyYnMWuyrc;
      if(DVpzgdebSK == UYBrxfItiO){eiiTKNtUHy = true;}
      else if(UYBrxfItiO == DVpzgdebSK){rKeLMlFcDo = true;}
      if(ZTbhZSELId == NjCxxRhQmV){HnHfBGElfS = true;}
      else if(NjCxxRhQmV == ZTbhZSELId){aQowmuYCQT = true;}
      if(bCHdgJzAPj == qYsnNncKLx){qsFtbHFeLd = true;}
      else if(qYsnNncKLx == bCHdgJzAPj){sOpffTyVEp = true;}
      if(LLaQxMuwlN == FHzFzALDxP){TpzbSYNYjr = true;}
      else if(FHzFzALDxP == LLaQxMuwlN){KDyTCGgfsY = true;}
      if(FqOdTMjlEU == UcjCiPfgQQ){wtisugpsmF = true;}
      else if(UcjCiPfgQQ == FqOdTMjlEU){FtVAFeijso = true;}
      if(nhnHzANMRW == rNrINweMdJ){RIRZlkcnqD = true;}
      else if(rNrINweMdJ == nhnHzANMRW){HhoskcTzer = true;}
      if(edMizOrLkM == DyhlJFjxyx){HPIceRnfNb = true;}
      else if(DyhlJFjxyx == edMizOrLkM){njYNeXRVsg = true;}
      if(WHZtYjmdJU == FeSXBOnqEy){sfCnVwJMyu = true;}
      if(ZMuuucWTRw == HwsuFqOqqD){QMqFLKXYog = true;}
      if(zidOiaefdE == UyYnMWuyrc){uYgfjfkGNd = true;}
      while(FeSXBOnqEy == WHZtYjmdJU){NrJrOyspZB = true;}
      while(HwsuFqOqqD == HwsuFqOqqD){kNbPibOFiZ = true;}
      while(UyYnMWuyrc == UyYnMWuyrc){lhBBkUVIUh = true;}
      if(eiiTKNtUHy == true){eiiTKNtUHy = false;}
      if(HnHfBGElfS == true){HnHfBGElfS = false;}
      if(qsFtbHFeLd == true){qsFtbHFeLd = false;}
      if(TpzbSYNYjr == true){TpzbSYNYjr = false;}
      if(wtisugpsmF == true){wtisugpsmF = false;}
      if(RIRZlkcnqD == true){RIRZlkcnqD = false;}
      if(HPIceRnfNb == true){HPIceRnfNb = false;}
      if(sfCnVwJMyu == true){sfCnVwJMyu = false;}
      if(QMqFLKXYog == true){QMqFLKXYog = false;}
      if(uYgfjfkGNd == true){uYgfjfkGNd = false;}
      if(rKeLMlFcDo == true){rKeLMlFcDo = false;}
      if(aQowmuYCQT == true){aQowmuYCQT = false;}
      if(sOpffTyVEp == true){sOpffTyVEp = false;}
      if(KDyTCGgfsY == true){KDyTCGgfsY = false;}
      if(FtVAFeijso == true){FtVAFeijso = false;}
      if(HhoskcTzer == true){HhoskcTzer = false;}
      if(njYNeXRVsg == true){njYNeXRVsg = false;}
      if(NrJrOyspZB == true){NrJrOyspZB = false;}
      if(kNbPibOFiZ == true){kNbPibOFiZ = false;}
      if(lhBBkUVIUh == true){lhBBkUVIUh = false;}
    } 
}; 
