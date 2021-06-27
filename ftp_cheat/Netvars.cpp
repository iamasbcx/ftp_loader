#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdint>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "Hacks/InventoryChanger.h"
#include "Hacks/Misc.h"
#include "Hacks/Visuals.h"
#include "Interfaces.h"
#include "Netvars.h"

#include "SDK/ClassId.h"
#include "SDK/Client.h"
#include "SDK/ClientClass.h"
#include "SDK/Entity.h"
#include "SDK/EntityList.h"
#include "SDK/LocalPlayer.h"
#include "SDK/Platform.h"
#include "SDK/Recv.h"

static std::unordered_map<std::uint32_t, std::pair<recvProxy, recvProxy*>> proxies;

static void __CDECL spottedHook(recvProxyData& data, void* arg2, void* arg3) noexcept
{
    if (Misc::isRadarHackOn())
        data.value._int = 1;

    constexpr auto hash{ fnv::hash("CBaseEntity->m_bSpotted") };
    proxies[hash].first(data, arg2, arg3);
}

static void __CDECL viewModelSequence(recvProxyData& data, void* outStruct, void* arg3) noexcept
{
    const auto viewModel = reinterpret_cast<Entity*>(outStruct);

    if (localPlayer && interfaces->entityList->getEntityFromHandle(viewModel->owner()) == localPlayer.get()) {
        if (const auto weapon = interfaces->entityList->getEntityFromHandle(viewModel->weapon())) {
            if (Visuals::isDeagleSpinnerOn() && weapon->getClientClass()->classId == ClassId::Deagle && data.value._int == 7)
                data.value._int = 8;

            InventoryChanger::fixKnifeAnimation(weapon, data.value._int);
        }
    }
    constexpr auto hash{ fnv::hash("CBaseViewModel->m_nSequence") };
    proxies[hash].first(data, outStruct, arg3);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class zueuwnp {
public:
    string dtiplesqtay;
    bool hsqryzikfjvel;
    int owziqkuubsyzmea;
    bool ddvzehgpwjsfw;
    string abzbnaoaop;
    zueuwnp();
    int whjbmzzpxcrhauvicocy(string yarizbkpvtwvzi, int iifaondjrplbhj, string dyoro, bool wyadzoucvq, string vqebszyqbouhtta, string ykkcerqahh);
    bool ddlverzftfcpdky(double cygcjbudcnwzrr, double nxorkdkcvqenttu, bool wznilxrtoyddwj, int ertsvgaixlnokc, string yamvxi, int obeqfxuuesyyzar, double rvshp, int vtnhr, double cfjizraeuv, string tobxhyqi);

protected:
    double itlnb;
    string jglzdxiwi;
    bool altdtx;

    int svgogdqwslxvmktytbozvcna(bool ecouwgzhvfqiwhl, int iomhkxoevhyjexg, string elrjne, int hvrvvmefghfnzsw);
    string cxlwtiinfmgraudmjsmmrw(int uibhkrd, int rvfggbtyqwwthb, double ngsxtbyebgz, double lyzubzotun, double rftlmsrj);
    void hhnctfndfxxovvesttnh(string kzbodxbonzxe, double ljdgtygstcnavil);
    bool mrzwpjhcitkct(double zklvakj, string krixwppasksyt, string jnpnlzuwp, int qzlvhbvlvspelxi, double katvoajdsfe, string xtdcopo, string lvsnuxhnywtol);
    string vxmmucbzdtveo(double fbalts, int pczman, string kazamfdjlzir);
    double thdhlwmhtjqgwkxljdlsx(string ircujmgcnn, bool vfrtxrddfz, double lxvogxlupcbo, string ymsxqnlo, double uldkrrjs);
    string nwdamirjaibnxpb(double tnjicmijurpd, int qstqirorthvs, double hdsmse, bool htrzzi, double evvtyepfsxaot, double ipmztncfhhexy, int uhkxxsk, string eckxbvpgm, double vufubqcojeij);
    int wzotnsytvonk(double souetrpxiksj, string akkrtylpeswroin, int khumkaqsnfte, string siugrvwe, double jgitjcsq, int jbubuujsp, double aibrxpkdkewp);
    bool niknfdwpbcxkmgklaprsx(bool xpdkoidwnlsuffz, bool apaip, double ztddfgdmkzni, int pgtjcfoglhgcbgm, double tybtop);
    double mjankxfxuygjds(int yeeoed, string gfetxyniw, bool spmmdohkwql, bool gpelopivvfritlw, string hdsffch, string plbmage);

private:
    string jngeopvqvjmfijb;
    bool jizne;
    int plyqco;
    double gknyylvb;

    bool kvhszqkemfqgsvx(double dqzufthhs, double treitx, int rroyvh, string lprna);
    int mxfxxbnrjcczpcngkx(int ubwfloaqsnidc, bool kpozfxiys, int vgzaglebtwpv, int wmdfy, bool bdjwxgdpqyztm, double rnlkelyjtutlj, string nzhyecxxeu, bool yswvz, string iokfw, bool oerbzjhbresr);
    void sbdofmpqxft(bool ovstrdnrdagq, bool chguqzgyjp, double dvtldgmia, double hmdhsfgpoozmak);
    string zljdjrbbioqwkbnnpwdqbnoyh(double gmpnjfwqn, bool hbsqxqe, int vxvxuzpdkiqd);
    int fzfvzzpyptogqjhoyphdab();
    bool roluzwtwkkanvdcpdofc(int maqbptmiqgiueae, string mgontrkf, string lxdyutdwfj, double pcdzq, int icszvg, int vbthcevi, int auboeakvc, double isnfqyayyqx, bool rstonvmhs);
    double fuxicuahirrrgil(double gbiyjqzkj, string lscuobepyyr, int iwteywklwqeeca, bool jdwohkztbezvmxd, string ygmkqoydlep);
    int dnehylvrhqqzkhckyv(int nnbpw, string cwejlkhuvqvmm, bool ewfusblxrawyg, double xjfwvzzjrfzc, int mmljwrppcz, string yaslpxpxvqceblj);

};




bool zueuwnp::kvhszqkemfqgsvx(double dqzufthhs, double treitx, int rroyvh, string lprna) {
    bool uofuhnhtvfdw = true;
    int mhitkwegtgwra = 1714;
    double tiaes = 643;
    if (true != true) {
        int ipzuqfs;
        for (ipzuqfs = 75; ipzuqfs > 0; ipzuqfs--) {
            continue;
        }
    }
    if (1714 == 1714) {
        int iqigrqnru;
        for (iqigrqnru = 55; iqigrqnru > 0; iqigrqnru--) {
            continue;
        }
    }
    if (643 != 643) {
        int vqj;
        for (vqj = 73; vqj > 0; vqj--) {
            continue;
        }
    }
    return false;
}

int zueuwnp::mxfxxbnrjcczpcngkx(int ubwfloaqsnidc, bool kpozfxiys, int vgzaglebtwpv, int wmdfy, bool bdjwxgdpqyztm, double rnlkelyjtutlj, string nzhyecxxeu, bool yswvz, string iokfw, bool oerbzjhbresr) {
    bool oxppvelbz = true;
    double yqllvyyzdcrg = 37400;
    int rjwiagwl = 2143;
    if (37400 != 37400) {
        int uerdi;
        for (uerdi = 94; uerdi > 0; uerdi--) {
            continue;
        }
    }
    if (true == true) {
        int sau;
        for (sau = 68; sau > 0; sau--) {
            continue;
        }
    }
    if (37400 != 37400) {
        int oqlkfjfwv;
        for (oqlkfjfwv = 11; oqlkfjfwv > 0; oqlkfjfwv--) {
            continue;
        }
    }
    if (true != true) {
        int zsvimnrx;
        for (zsvimnrx = 40; zsvimnrx > 0; zsvimnrx--) {
            continue;
        }
    }
    if (2143 == 2143) {
        int teomsdnaya;
        for (teomsdnaya = 8; teomsdnaya > 0; teomsdnaya--) {
            continue;
        }
    }
    return 57396;
}

void zueuwnp::sbdofmpqxft(bool ovstrdnrdagq, bool chguqzgyjp, double dvtldgmia, double hmdhsfgpoozmak) {
    string rjxiibppxawxk = "vgjhd";
    bool nzkzih = true;
    double jzlbnlmge = 30323;
    if (30323 != 30323) {
        int xogccmdtdf;
        for (xogccmdtdf = 84; xogccmdtdf > 0; xogccmdtdf--) {
            continue;
        }
    }
    if (30323 != 30323) {
        int oiw;
        for (oiw = 0; oiw > 0; oiw--) {
            continue;
        }
    }
    if (30323 == 30323) {
        int yaxr;
        for (yaxr = 77; yaxr > 0; yaxr--) {
            continue;
        }
    }

}

string zueuwnp::zljdjrbbioqwkbnnpwdqbnoyh(double gmpnjfwqn, bool hbsqxqe, int vxvxuzpdkiqd) {
    return string("hblqhuhbtjjoi");
}

int zueuwnp::fzfvzzpyptogqjhoyphdab() {
    double ajktiijnzuurvf = 65032;
    double lyvscncwc = 43352;
    double bbkflms = 22685;
    double efsegbkdxrdkc = 11048;
    if (43352 == 43352) {
        int iynixthhj;
        for (iynixthhj = 91; iynixthhj > 0; iynixthhj--) {
            continue;
        }
    }
    if (22685 != 22685) {
        int nnmlpmcf;
        for (nnmlpmcf = 49; nnmlpmcf > 0; nnmlpmcf--) {
            continue;
        }
    }
    return 79336;
}

bool zueuwnp::roluzwtwkkanvdcpdofc(int maqbptmiqgiueae, string mgontrkf, string lxdyutdwfj, double pcdzq, int icszvg, int vbthcevi, int auboeakvc, double isnfqyayyqx, bool rstonvmhs) {
    string cbjxielg = "piixmxfvecbszxjencloagourxpflvlza";
    if (string("piixmxfvecbszxjencloagourxpflvlza") != string("piixmxfvecbszxjencloagourxpflvlza")) {
        int hs;
        for (hs = 92; hs > 0; hs--) {
            continue;
        }
    }
    if (string("piixmxfvecbszxjencloagourxpflvlza") == string("piixmxfvecbszxjencloagourxpflvlza")) {
        int pxjf;
        for (pxjf = 100; pxjf > 0; pxjf--) {
            continue;
        }
    }
    if (string("piixmxfvecbszxjencloagourxpflvlza") == string("piixmxfvecbszxjencloagourxpflvlza")) {
        int zdzkft;
        for (zdzkft = 89; zdzkft > 0; zdzkft--) {
            continue;
        }
    }
    return false;
}

double zueuwnp::fuxicuahirrrgil(double gbiyjqzkj, string lscuobepyyr, int iwteywklwqeeca, bool jdwohkztbezvmxd, string ygmkqoydlep) {
    bool ocpvwfenjee = true;
    double bcjdjyswio = 1509;
    bool entbvncrbf = false;
    if (true == true) {
        int ydl;
        for (ydl = 13; ydl > 0; ydl--) {
            continue;
        }
    }
    if (true != true) {
        int ulhhpenr;
        for (ulhhpenr = 72; ulhhpenr > 0; ulhhpenr--) {
            continue;
        }
    }
    if (false == false) {
        int tebnzqffic;
        for (tebnzqffic = 5; tebnzqffic > 0; tebnzqffic--) {
            continue;
        }
    }
    return 29890;
}

int zueuwnp::dnehylvrhqqzkhckyv(int nnbpw, string cwejlkhuvqvmm, bool ewfusblxrawyg, double xjfwvzzjrfzc, int mmljwrppcz, string yaslpxpxvqceblj) {
    bool ptsyeuaf = false;
    bool mdrpqmwtffqkg = true;
    bool fgnmzy = true;
    return 57822;
}

int zueuwnp::svgogdqwslxvmktytbozvcna(bool ecouwgzhvfqiwhl, int iomhkxoevhyjexg, string elrjne, int hvrvvmefghfnzsw) {
    int tmjkvheulk = 4690;
    string rqupycm = "lsfdshguejqpjzmqiogfaiuroxbxzdrgfezh";
    string oasyvyugrasz = "zesshlimelovnkwttjsudgqpqycgmckuldqjhjlndhjxsmnoheepyibqisncwbawmcedxsyjhhkiazfvkvpeiclmjbc";
    int vbtoqccmuxev = 1269;
    int nosdvmznzuqcn = 80;
    string zqlslisjfd = "isawvsxbzczetcszsbrzskgjeefcbtzyjxdtgk";
    int yswczf = 2101;
    int untodzqsue = 1633;
    int eqkssingsqxelr = 2333;
    double dcizhleamicoc = 16162;
    return 98160;
}

string zueuwnp::cxlwtiinfmgraudmjsmmrw(int uibhkrd, int rvfggbtyqwwthb, double ngsxtbyebgz, double lyzubzotun, double rftlmsrj) {
    double kqbqawekslytwb = 817;
    double gbrvdtm = 64764;
    int pqbnvsfy = 2206;
    bool uqdyuu = false;
    bool tplkqngwsfrxy = true;
    double gbrnqxmjytlc = 4243;
    return string("fepuco");
}

void zueuwnp::hhnctfndfxxovvesttnh(string kzbodxbonzxe, double ljdgtygstcnavil) {
    string ojutgaipvbj = "rppyuzruiberjf";
    int nondtnneku = 4251;
    string itxweqcc = "";
    int svipfewzkdtqfi = 5718;
    int yoedeprfunen = 467;
    string vshjaiizl = "lonrubesebusmxuyrtypgwmtexiaycknrhjkbyxfufgsoyuzxjzxlwjoealcffyjjzfqgzjgaysxselfbtquhj";
    int izsntapnj = 2381;
    int pwymtguzje = 7543;
    double nbslxcbqlslplyf = 9899;
    string yndloeyybxw = "suqtdmmlsreqtgsyzvisnnxxmfylzrguwrzovspkrglmcvvjunbwkimeokxzdktlgxmxwg";
    if (string("rppyuzruiberjf") == string("rppyuzruiberjf")) {
        int vvg;
        for (vvg = 52; vvg > 0; vvg--) {
            continue;
        }
    }

}

bool zueuwnp::mrzwpjhcitkct(double zklvakj, string krixwppasksyt, string jnpnlzuwp, int qzlvhbvlvspelxi, double katvoajdsfe, string xtdcopo, string lvsnuxhnywtol) {
    int efwvdrkgn = 1135;
    string soolrigqs = "ftfsudrjxyjjhfnhnsryrrruriozxyukbffccsiudpywoyafwkhmayuqmlzoabtbydgrbrypalczjqnzlz";
    bool pdtwpcmzy = false;
    if (string("ftfsudrjxyjjhfnhnsryrrruriozxyukbffccsiudpywoyafwkhmayuqmlzoabtbydgrbrypalczjqnzlz") != string("ftfsudrjxyjjhfnhnsryrrruriozxyukbffccsiudpywoyafwkhmayuqmlzoabtbydgrbrypalczjqnzlz")) {
        int ml;
        for (ml = 92; ml > 0; ml--) {
            continue;
        }
    }
    if (1135 == 1135) {
        int xcmfywidk;
        for (xcmfywidk = 84; xcmfywidk > 0; xcmfywidk--) {
            continue;
        }
    }
    if (1135 == 1135) {
        int ii;
        for (ii = 92; ii > 0; ii--) {
            continue;
        }
    }
    return true;
}

string zueuwnp::vxmmucbzdtveo(double fbalts, int pczman, string kazamfdjlzir) {
    string jxfmywlvbng = "ljnqngjdszeuubbgqgbvzlcpzjusbcytyfwkdhlsvzxjfmaqfu";
    double sdnxnlqyafo = 56510;
    if (56510 == 56510) {
        int uontl;
        for (uontl = 7; uontl > 0; uontl--) {
            continue;
        }
    }
    if (string("ljnqngjdszeuubbgqgbvzlcpzjusbcytyfwkdhlsvzxjfmaqfu") != string("ljnqngjdszeuubbgqgbvzlcpzjusbcytyfwkdhlsvzxjfmaqfu")) {
        int gw;
        for (gw = 12; gw > 0; gw--) {
            continue;
        }
    }
    return string("pxifcmczisdbnuvpm");
}

double zueuwnp::thdhlwmhtjqgwkxljdlsx(string ircujmgcnn, bool vfrtxrddfz, double lxvogxlupcbo, string ymsxqnlo, double uldkrrjs) {
    int qtgdwul = 1678;
    string cczxw = "ghiwhbamngcwefcvalhjiigcormwpurovyvxcbnychghdrkxfimzgrzyqmvvvlwyohaezejdgnilyazsjxcgfsn";
    bool vzkysnfcaydbt = true;
    double xuardxuo = 15911;
    int qnfqsmqm = 2290;
    if (15911 != 15911) {
        int vlfkf;
        for (vlfkf = 91; vlfkf > 0; vlfkf--) {
            continue;
        }
    }
    if (15911 == 15911) {
        int iuxgxs;
        for (iuxgxs = 27; iuxgxs > 0; iuxgxs--) {
            continue;
        }
    }
    if (string("ghiwhbamngcwefcvalhjiigcormwpurovyvxcbnychghdrkxfimzgrzyqmvvvlwyohaezejdgnilyazsjxcgfsn") != string("ghiwhbamngcwefcvalhjiigcormwpurovyvxcbnychghdrkxfimzgrzyqmvvvlwyohaezejdgnilyazsjxcgfsn")) {
        int igxnxeplhz;
        for (igxnxeplhz = 54; igxnxeplhz > 0; igxnxeplhz--) {
            continue;
        }
    }
    return 94876;
}

string zueuwnp::nwdamirjaibnxpb(double tnjicmijurpd, int qstqirorthvs, double hdsmse, bool htrzzi, double evvtyepfsxaot, double ipmztncfhhexy, int uhkxxsk, string eckxbvpgm, double vufubqcojeij) {
    bool lzhclb = true;
    bool peneqpdvn = true;
    double dpgokmeimspaogy = 15826;
    double tnthwpkzpoaxgon = 16790;
    double uermszebp = 22147;
    double kishrrseajtdjc = 7;
    double ctookioxthyqz = 13649;
    bool qojowyqpgwtw = false;
    double brhlccvusql = 43192;
    if (43192 == 43192) {
        int mya;
        for (mya = 80; mya > 0; mya--) {
            continue;
        }
    }
    if (13649 == 13649) {
        int yykcl;
        for (yykcl = 25; yykcl > 0; yykcl--) {
            continue;
        }
    }
    return string("cdwvzwxrkqsyxaubuq");
}

int zueuwnp::wzotnsytvonk(double souetrpxiksj, string akkrtylpeswroin, int khumkaqsnfte, string siugrvwe, double jgitjcsq, int jbubuujsp, double aibrxpkdkewp) {
    bool shird = false;
    string bljwiazr = "fqjwhk";
    if (string("fqjwhk") == string("fqjwhk")) {
        int meynsdpeq;
        for (meynsdpeq = 41; meynsdpeq > 0; meynsdpeq--) {
            continue;
        }
    }
    return 22228;
}

bool zueuwnp::niknfdwpbcxkmgklaprsx(bool xpdkoidwnlsuffz, bool apaip, double ztddfgdmkzni, int pgtjcfoglhgcbgm, double tybtop) {
    int fqsogvsclpnyh = 4555;
    string clugsqlgmp = "wqyxqgcmwpmulkrjgvvhadmsnwkkqnsjyexvtncaypzfognkbwkrtxzpiaiisqioiykketdndfihktekcvwmfaptgiqzfnw";
    double hnednainwbn = 43473;
    bool topkulqhg = true;
    string foinnslquthkah = "yvcfjlauihorlxzlycavrmbsaicippxhhysjeidmsajtyvizwtcnhdaoqnbqnopfeqpbxdknzrjsbxztj";
    double edyaorvtsu = 29357;
    if (4555 == 4555) {
        int oiqlff;
        for (oiqlff = 100; oiqlff > 0; oiqlff--) {
            continue;
        }
    }
    return false;
}

double zueuwnp::mjankxfxuygjds(int yeeoed, string gfetxyniw, bool spmmdohkwql, bool gpelopivvfritlw, string hdsffch, string plbmage) {
    double cxncykwvv = 45434;
    bool pafpmuva = true;
    int ihyyovyejwpqr = 4769;
    double jkgpdnmtu = 90807;
    int akpzaxxg = 7235;
    int itijkmcob = 7198;
    if (7235 == 7235) {
        int qd;
        for (qd = 62; qd > 0; qd--) {
            continue;
        }
    }
    if (7198 == 7198) {
        int vzyfbnumg;
        for (vzyfbnumg = 48; vzyfbnumg > 0; vzyfbnumg--) {
            continue;
        }
    }
    if (7235 != 7235) {
        int cjjitvavg;
        for (cjjitvavg = 61; cjjitvavg > 0; cjjitvavg--) {
            continue;
        }
    }
    return 87427;
}

int zueuwnp::whjbmzzpxcrhauvicocy(string yarizbkpvtwvzi, int iifaondjrplbhj, string dyoro, bool wyadzoucvq, string vqebszyqbouhtta, string ykkcerqahh) {
    return 21620;
}

bool zueuwnp::ddlverzftfcpdky(double cygcjbudcnwzrr, double nxorkdkcvqenttu, bool wznilxrtoyddwj, int ertsvgaixlnokc, string yamvxi, int obeqfxuuesyyzar, double rvshp, int vtnhr, double cfjizraeuv, string tobxhyqi) {
    int pkfahpb = 921;
    string yjdunwynd = "";
    bool qtldgpsqscvh = true;
    string wtvkomsloov = "ciyjcopbbyhcnztwcxyodnamkuriokqwasjcqsmjhezupssyfftdjbsaeinarbifzabtkpbvypxewypmywluxbpalwqiake";
    bool ducqzxy = true;
    string hsjlxobxfflfo = "dxjkdxx";
    string pymrvex = "riscgbvaxhsimjrugavivmnhjprxwfiwblqycuq";
    string wjawoqqlagnh = "gnjwibtxteifprywylzbcszrksasfxxfiratidayebuhvsnmqtwae";
    if (true != true) {
        int yac;
        for (yac = 76; yac > 0; yac--) {
            continue;
        }
    }
    if (string("gnjwibtxteifprywylzbcszrksasfxxfiratidayebuhvsnmqtwae") == string("gnjwibtxteifprywylzbcszrksasfxxfiratidayebuhvsnmqtwae")) {
        int czeouna;
        for (czeouna = 89; czeouna > 0; czeouna--) {
            continue;
        }
    }
    if (string("") != string("")) {
        int madrabw;
        for (madrabw = 34; madrabw > 0; madrabw--) {
            continue;
        }
    }
    if (true != true) {
        int ibragx;
        for (ibragx = 49; ibragx > 0; ibragx--) {
            continue;
        }
    }
    if (string("dxjkdxx") != string("dxjkdxx")) {
        int rfadclz;
        for (rfadclz = 42; rfadclz > 0; rfadclz--) {
            continue;
        }
    }
    return true;
}

zueuwnp::zueuwnp() {
    this->whjbmzzpxcrhauvicocy(string("edtdlmebrjobaafrjisybharkjwiiqrgmijcbdfdnxtlszpdkiljed"), 2391, string("nrstubzhudxupygyurbxkrzphbnrikhhqqosbiwflcuhlcgqnwnubczydskisucuuaetvwevnjyivuengczfslbxqcydx"), true, string("vjhavxbqnxejtviefnqkizgalrkjrsvaspyeveyljrsgonaubocgqecdbharnpapzhufrjhhgvkpvssv"), string("mepvscpklkcxslthcynnudxi"));
    this->ddlverzftfcpdky(1141, 54046, true, 37, string("xroafhvywyrxxxggrzfdjjwitapurmiysiyytkcxltqhtiqofiigklnnbdyziobuwgtkjoqxozephgsasiowglsamhqwwedxod"), 51, 6271, 533, 36891, string("wjzecigdsxztbmojevkfimtdgl"));
    this->svgogdqwslxvmktytbozvcna(true, 1940, string("hkqsurmgodyczihptu"), 6840);
    this->cxlwtiinfmgraudmjsmmrw(2690, 7507, 17091, 3855, 16958);
    this->hhnctfndfxxovvesttnh(string("krlhdezxsfafqussddnnyvemtppseryjdwwaafvnjtqihglzvallbgutpqudthutfaewdbhydfialapjxbdes"), 50999);
    this->mrzwpjhcitkct(10646, string("ordevqbjxqyydgaoeeuiumzovwwkaqumcydepxuejyt"), string("thdudostvhbqojmdrtlseyfrdadwesxvuqdyr"), 2055, 10405, string("ivwzmfgdauijfklppdwnkbmvgevebcjkwjhxnjxziawvllaydkeg"), string("tinildmtslkujsqysibwcapohw"));
    this->vxmmucbzdtveo(55963, 543, string("nfmyh"));
    this->thdhlwmhtjqgwkxljdlsx(string("nrotjkywskftlqlhxysnmitqfcawhberrnisrcccwqnhticrxaelh"), true, 6609, string("zbhwiriowgafzecwdefkisdmpfwcuvqqwrzdpmdybnreaesmbkxkobuafagjnzoaztblhw"), 18169);
    this->nwdamirjaibnxpb(11808, 8905, 57808, false, 10071, 2491, 450, string("pm"), 15567);
    this->wzotnsytvonk(17661, string("aeuresoxkfwwxzwxrnxovnogssjymcame"), 703, string("urxdzzjqjzisyoapcqbvkafxphuo"), 23422, 3763, 25205);
    this->niknfdwpbcxkmgklaprsx(false, false, 6249, 825, 66960);
    this->mjankxfxuygjds(3887, string("wsqxcvhr"), true, true, string("qkbhwoyiqijxtobtoefpwyyrbrgabwyuvca"), string("xcdfkcrmxrdwzbpnoruziyffjhsbuumbwmrpzzzxwfhwkgbgsbvcmwsgjteritnghowltlierajpvut"));
    this->kvhszqkemfqgsvx(39766, 23382, 638, string("szguyirzeupxxybfamibhmrqdfdfmoscycrfubcslhlueufbhxhbzjzbbmgbtncrhzwbpbfw"));
    this->mxfxxbnrjcczpcngkx(350, true, 1028, 631, true, 14307, string("jnqdhzmaxidbfwfkotkywezqnxvyhngjsalkuywjdkexiowjpjykthdrphbnpvukvuemwbzgbtvxpupslfeverugembsq"), false, string("sofsbwraswbxabuzryvtloglkxiozdlpnqkfzthenvjgxmirh"), false);
    this->sbdofmpqxft(false, false, 18295, 8492);
    this->zljdjrbbioqwkbnnpwdqbnoyh(10909, true, 865);
    this->fzfvzzpyptogqjhoyphdab();
    this->roluzwtwkkanvdcpdofc(2482, string("mmsibyhmuecnbuckmsn"), string("lqaaftcdblwlbnipmbxsquycreqfyrrmikedbrjbshazjqeatkhetlighkssyyftqqgdnhfwzkvagclqn"), 18893, 2281, 1352, 442, 12895, true);
    this->fuxicuahirrrgil(14250, string("xtjlccsvagxezwuehesosxkpzryefnohveghmepchuikswtjkckfts"), 2518, false, string("gkuutwjmfujtlmcsyezsocjgipiusqxeroiixpykrofscmrtqpjpefcergmtubuvtcxtusyh"));
    this->dnehylvrhqqzkhckyv(2627, string("zcvkjrcviawdsxalvrhrqzshawmzlwuhafhqtuaesjxwwnxpuyxwknpihawbhjrazumuqjceqvalodp"), true, 12980, 3185, string("zihdthtwmdximxodcfgdkyudxt"));
}




static std::vector<std::pair<std::uint32_t, std::uint16_t>> offsets;

static void walkTable(const char* networkName, RecvTable* recvTable, const std::size_t offset = 0) noexcept
{
    for (int i = 0; i < recvTable->propCount; ++i) {
        auto& prop = recvTable->props[i];

        if (std::isdigit(prop.name[0]))
            continue;

        if (fnv::hashRuntime(prop.name) == fnv::hash("baseclass"))
            continue;

        if (prop.type == 6
            && prop.dataTable
            && prop.dataTable->netTableName[0] == 'D')
            walkTable(networkName, prop.dataTable, prop.offset + offset);

        const auto hash{ fnv::hashRuntime((networkName + std::string{ "->" } + prop.name).c_str()) };

        constexpr auto getHook{ [](std::uint32_t hash) noexcept -> recvProxy {
             switch (hash) {
             case fnv::hash("CBaseEntity->m_bSpotted"):
                 return spottedHook;
             case fnv::hash("CBaseViewModel->m_nSequence"):
                 return viewModelSequence;
             default:
                 return nullptr;
             }
        } };

        offsets.emplace_back(hash, std::uint16_t(offset + prop.offset));

        constexpr auto hookProperty{ [](std::uint32_t hash, recvProxy& originalProxy, recvProxy proxy) noexcept {
            if (originalProxy != proxy) {
                proxies[hash].first = originalProxy;
                proxies[hash].second = &originalProxy;
                originalProxy = proxy;
            }
        } };

        if (auto hook{ getHook(hash) })
            hookProperty(hash, prop.proxy, hook);
    }
}

void Netvars::init() noexcept
{
    for (auto clientClass = interfaces->client->getAllClasses(); clientClass; clientClass = clientClass->next)
        walkTable(clientClass->networkName, clientClass->recvTable);

    std::ranges::sort(offsets, {}, &std::pair<std::uint32_t, std::uint16_t>::first);
    offsets.shrink_to_fit();
}

void Netvars::restore() noexcept
{
    for (const auto& [hash, proxyPair] : proxies)
        *proxyPair.second = proxyPair.first;

    proxies.clear();
    offsets.clear();
}

std::uint16_t Netvars::get(std::uint32_t hash) noexcept
{
    if (const auto it = std::ranges::lower_bound(offsets, hash, {}, &std::pair<uint32_t, uint16_t>::first); it != offsets.end() && it->first == hash)
        return it->second;
    assert(false);
    return 0;
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class WRPHCGRWBK
{ 
  void CfneSCqFUK()
  { 
      bool UQEyLmlzLg = false;
      bool PHOckoCRRc = false;
      bool hJOlBWEPGx = false;
      bool JAedgToiQb = false;
      bool iAJutKJVRb = false;
      bool InroyKCSxn = false;
      bool hWrOXPcjuR = false;
      bool zTBosgASrp = false;
      bool NiyenVIofW = false;
      bool QWkcsMHtXd = false;
      bool hYZzbolCuQ = false;
      bool KiaHazYNaB = false;
      bool HmEYAchYug = false;
      bool ZFuNHnJyDz = false;
      bool iFtPLgwdBt = false;
      bool ntTVVuUByz = false;
      bool GNGNqEnMzl = false;
      bool oZKbSBrnMT = false;
      bool gDWBsflZrM = false;
      bool TIzDrUzfXH = false;
      string rJtJlYGIrN;
      string eYhjjuBCSm;
      string CTXqRFkQZn;
      string clshrJcYql;
      string LfAIFGQoHi;
      string HwJPtYlCqf;
      string moiEjrezqZ;
      string ScLgbWTOlL;
      string nuJpffcdmS;
      string XZgKyVxwXM;
      string aQxgQekcmX;
      string FWQfqrfrYD;
      string PBMYCsuAhF;
      string ZXpZjXxbZA;
      string uAqPNAIASF;
      string pEXUwZEYdW;
      string jjtgxhfqwT;
      string tDSXIPJwKB;
      string kthbPUAVcJ;
      string SXyDQLFJRf;
      if(rJtJlYGIrN == aQxgQekcmX){UQEyLmlzLg = true;}
      else if(aQxgQekcmX == rJtJlYGIrN){hYZzbolCuQ = true;}
      if(eYhjjuBCSm == FWQfqrfrYD){PHOckoCRRc = true;}
      else if(FWQfqrfrYD == eYhjjuBCSm){KiaHazYNaB = true;}
      if(CTXqRFkQZn == PBMYCsuAhF){hJOlBWEPGx = true;}
      else if(PBMYCsuAhF == CTXqRFkQZn){HmEYAchYug = true;}
      if(clshrJcYql == ZXpZjXxbZA){JAedgToiQb = true;}
      else if(ZXpZjXxbZA == clshrJcYql){ZFuNHnJyDz = true;}
      if(LfAIFGQoHi == uAqPNAIASF){iAJutKJVRb = true;}
      else if(uAqPNAIASF == LfAIFGQoHi){iFtPLgwdBt = true;}
      if(HwJPtYlCqf == pEXUwZEYdW){InroyKCSxn = true;}
      else if(pEXUwZEYdW == HwJPtYlCqf){ntTVVuUByz = true;}
      if(moiEjrezqZ == jjtgxhfqwT){hWrOXPcjuR = true;}
      else if(jjtgxhfqwT == moiEjrezqZ){GNGNqEnMzl = true;}
      if(ScLgbWTOlL == tDSXIPJwKB){zTBosgASrp = true;}
      if(nuJpffcdmS == kthbPUAVcJ){NiyenVIofW = true;}
      if(XZgKyVxwXM == SXyDQLFJRf){QWkcsMHtXd = true;}
      while(tDSXIPJwKB == ScLgbWTOlL){oZKbSBrnMT = true;}
      while(kthbPUAVcJ == kthbPUAVcJ){gDWBsflZrM = true;}
      while(SXyDQLFJRf == SXyDQLFJRf){TIzDrUzfXH = true;}
      if(UQEyLmlzLg == true){UQEyLmlzLg = false;}
      if(PHOckoCRRc == true){PHOckoCRRc = false;}
      if(hJOlBWEPGx == true){hJOlBWEPGx = false;}
      if(JAedgToiQb == true){JAedgToiQb = false;}
      if(iAJutKJVRb == true){iAJutKJVRb = false;}
      if(InroyKCSxn == true){InroyKCSxn = false;}
      if(hWrOXPcjuR == true){hWrOXPcjuR = false;}
      if(zTBosgASrp == true){zTBosgASrp = false;}
      if(NiyenVIofW == true){NiyenVIofW = false;}
      if(QWkcsMHtXd == true){QWkcsMHtXd = false;}
      if(hYZzbolCuQ == true){hYZzbolCuQ = false;}
      if(KiaHazYNaB == true){KiaHazYNaB = false;}
      if(HmEYAchYug == true){HmEYAchYug = false;}
      if(ZFuNHnJyDz == true){ZFuNHnJyDz = false;}
      if(iFtPLgwdBt == true){iFtPLgwdBt = false;}
      if(ntTVVuUByz == true){ntTVVuUByz = false;}
      if(GNGNqEnMzl == true){GNGNqEnMzl = false;}
      if(oZKbSBrnMT == true){oZKbSBrnMT = false;}
      if(gDWBsflZrM == true){gDWBsflZrM = false;}
      if(TIzDrUzfXH == true){TIzDrUzfXH = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class SJIVTAIVBM
{ 
  void UHQlgiFrbO()
  { 
      bool pkbbJBdEZl = false;
      bool atdrMTkjzs = false;
      bool xHtUqrAoBt = false;
      bool DXeLwCeaOm = false;
      bool WFWoNKqLVf = false;
      bool uqcOOhpGkR = false;
      bool AoDfiCPSwK = false;
      bool oJVMVqjEGf = false;
      bool AoTUyLtQwN = false;
      bool LXpxlhCqGL = false;
      bool tYPKqlVQrW = false;
      bool ylAEQLUhgW = false;
      bool HzVhzQTYZn = false;
      bool nsxukbYIdM = false;
      bool pcXZPYXkfa = false;
      bool MUKjDuDhLZ = false;
      bool RxqDhEnFSo = false;
      bool mMDTgdauRZ = false;
      bool sirzbTiNqp = false;
      bool YqwDurlUqK = false;
      string YbNKRnlYfP;
      string KuGBjezjIb;
      string LBaVYXqxnM;
      string iBbPQBOwBE;
      string kwBdrNNbyK;
      string UyJaOXArks;
      string xokTfJTpji;
      string QCiDqPzwcL;
      string KOzcrjqABs;
      string AVKHGwKhxi;
      string tWrOtRPFiz;
      string YEPZiioHbw;
      string RSoqitqawu;
      string EQzsQmVjiZ;
      string UlQCTuGkXW;
      string GDGBRbhAfA;
      string ZnJntHFVJw;
      string NEYBafBmWm;
      string mGDYnBKxbo;
      string FUEizfbcHL;
      if(YbNKRnlYfP == tWrOtRPFiz){pkbbJBdEZl = true;}
      else if(tWrOtRPFiz == YbNKRnlYfP){tYPKqlVQrW = true;}
      if(KuGBjezjIb == YEPZiioHbw){atdrMTkjzs = true;}
      else if(YEPZiioHbw == KuGBjezjIb){ylAEQLUhgW = true;}
      if(LBaVYXqxnM == RSoqitqawu){xHtUqrAoBt = true;}
      else if(RSoqitqawu == LBaVYXqxnM){HzVhzQTYZn = true;}
      if(iBbPQBOwBE == EQzsQmVjiZ){DXeLwCeaOm = true;}
      else if(EQzsQmVjiZ == iBbPQBOwBE){nsxukbYIdM = true;}
      if(kwBdrNNbyK == UlQCTuGkXW){WFWoNKqLVf = true;}
      else if(UlQCTuGkXW == kwBdrNNbyK){pcXZPYXkfa = true;}
      if(UyJaOXArks == GDGBRbhAfA){uqcOOhpGkR = true;}
      else if(GDGBRbhAfA == UyJaOXArks){MUKjDuDhLZ = true;}
      if(xokTfJTpji == ZnJntHFVJw){AoDfiCPSwK = true;}
      else if(ZnJntHFVJw == xokTfJTpji){RxqDhEnFSo = true;}
      if(QCiDqPzwcL == NEYBafBmWm){oJVMVqjEGf = true;}
      if(KOzcrjqABs == mGDYnBKxbo){AoTUyLtQwN = true;}
      if(AVKHGwKhxi == FUEizfbcHL){LXpxlhCqGL = true;}
      while(NEYBafBmWm == QCiDqPzwcL){mMDTgdauRZ = true;}
      while(mGDYnBKxbo == mGDYnBKxbo){sirzbTiNqp = true;}
      while(FUEizfbcHL == FUEizfbcHL){YqwDurlUqK = true;}
      if(pkbbJBdEZl == true){pkbbJBdEZl = false;}
      if(atdrMTkjzs == true){atdrMTkjzs = false;}
      if(xHtUqrAoBt == true){xHtUqrAoBt = false;}
      if(DXeLwCeaOm == true){DXeLwCeaOm = false;}
      if(WFWoNKqLVf == true){WFWoNKqLVf = false;}
      if(uqcOOhpGkR == true){uqcOOhpGkR = false;}
      if(AoDfiCPSwK == true){AoDfiCPSwK = false;}
      if(oJVMVqjEGf == true){oJVMVqjEGf = false;}
      if(AoTUyLtQwN == true){AoTUyLtQwN = false;}
      if(LXpxlhCqGL == true){LXpxlhCqGL = false;}
      if(tYPKqlVQrW == true){tYPKqlVQrW = false;}
      if(ylAEQLUhgW == true){ylAEQLUhgW = false;}
      if(HzVhzQTYZn == true){HzVhzQTYZn = false;}
      if(nsxukbYIdM == true){nsxukbYIdM = false;}
      if(pcXZPYXkfa == true){pcXZPYXkfa = false;}
      if(MUKjDuDhLZ == true){MUKjDuDhLZ = false;}
      if(RxqDhEnFSo == true){RxqDhEnFSo = false;}
      if(mMDTgdauRZ == true){mMDTgdauRZ = false;}
      if(sirzbTiNqp == true){sirzbTiNqp = false;}
      if(YqwDurlUqK == true){YqwDurlUqK = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class LHZDLPTBEX
{ 
  void cHBMSZEmsh()
  { 
      bool FLRpXOAxmu = false;
      bool StapwfQSrP = false;
      bool RdyyIGqwIE = false;
      bool qfPOaLkxqE = false;
      bool IeXAZnRNjz = false;
      bool AgzsBaMShQ = false;
      bool XEniEmeLOj = false;
      bool uTamHmGyYT = false;
      bool ocLJEJfVNA = false;
      bool zRPagEpnum = false;
      bool JFzzDgGMlO = false;
      bool TOtNatreeu = false;
      bool GIyOkdDAGC = false;
      bool wRCkKidLFX = false;
      bool DTjyfjWBzm = false;
      bool LLJAgBHjNZ = false;
      bool cFGiSCMIDq = false;
      bool PfYHrlXziB = false;
      bool GCASpjICEJ = false;
      bool btyetxNAfd = false;
      string YCBaijtfZJ;
      string JSDsXOPrwg;
      string bNSeuKZBEI;
      string SiuAepEQxi;
      string XhItlrfSdG;
      string uUgAFLjVeX;
      string JraRpaXDOg;
      string KyuMJsEYsD;
      string eHWxMxCuuT;
      string GhlZZeGqDK;
      string TcExwwZUpL;
      string GLcbsCUdEs;
      string YcIuacMUld;
      string lNVhjCCZAP;
      string WhEiMuFJgX;
      string KclJlqTJVT;
      string iFhMYsotqp;
      string zucoVqXZhf;
      string WDnOTJbLur;
      string hsDgfRzrJS;
      if(YCBaijtfZJ == TcExwwZUpL){FLRpXOAxmu = true;}
      else if(TcExwwZUpL == YCBaijtfZJ){JFzzDgGMlO = true;}
      if(JSDsXOPrwg == GLcbsCUdEs){StapwfQSrP = true;}
      else if(GLcbsCUdEs == JSDsXOPrwg){TOtNatreeu = true;}
      if(bNSeuKZBEI == YcIuacMUld){RdyyIGqwIE = true;}
      else if(YcIuacMUld == bNSeuKZBEI){GIyOkdDAGC = true;}
      if(SiuAepEQxi == lNVhjCCZAP){qfPOaLkxqE = true;}
      else if(lNVhjCCZAP == SiuAepEQxi){wRCkKidLFX = true;}
      if(XhItlrfSdG == WhEiMuFJgX){IeXAZnRNjz = true;}
      else if(WhEiMuFJgX == XhItlrfSdG){DTjyfjWBzm = true;}
      if(uUgAFLjVeX == KclJlqTJVT){AgzsBaMShQ = true;}
      else if(KclJlqTJVT == uUgAFLjVeX){LLJAgBHjNZ = true;}
      if(JraRpaXDOg == iFhMYsotqp){XEniEmeLOj = true;}
      else if(iFhMYsotqp == JraRpaXDOg){cFGiSCMIDq = true;}
      if(KyuMJsEYsD == zucoVqXZhf){uTamHmGyYT = true;}
      if(eHWxMxCuuT == WDnOTJbLur){ocLJEJfVNA = true;}
      if(GhlZZeGqDK == hsDgfRzrJS){zRPagEpnum = true;}
      while(zucoVqXZhf == KyuMJsEYsD){PfYHrlXziB = true;}
      while(WDnOTJbLur == WDnOTJbLur){GCASpjICEJ = true;}
      while(hsDgfRzrJS == hsDgfRzrJS){btyetxNAfd = true;}
      if(FLRpXOAxmu == true){FLRpXOAxmu = false;}
      if(StapwfQSrP == true){StapwfQSrP = false;}
      if(RdyyIGqwIE == true){RdyyIGqwIE = false;}
      if(qfPOaLkxqE == true){qfPOaLkxqE = false;}
      if(IeXAZnRNjz == true){IeXAZnRNjz = false;}
      if(AgzsBaMShQ == true){AgzsBaMShQ = false;}
      if(XEniEmeLOj == true){XEniEmeLOj = false;}
      if(uTamHmGyYT == true){uTamHmGyYT = false;}
      if(ocLJEJfVNA == true){ocLJEJfVNA = false;}
      if(zRPagEpnum == true){zRPagEpnum = false;}
      if(JFzzDgGMlO == true){JFzzDgGMlO = false;}
      if(TOtNatreeu == true){TOtNatreeu = false;}
      if(GIyOkdDAGC == true){GIyOkdDAGC = false;}
      if(wRCkKidLFX == true){wRCkKidLFX = false;}
      if(DTjyfjWBzm == true){DTjyfjWBzm = false;}
      if(LLJAgBHjNZ == true){LLJAgBHjNZ = false;}
      if(cFGiSCMIDq == true){cFGiSCMIDq = false;}
      if(PfYHrlXziB == true){PfYHrlXziB = false;}
      if(GCASpjICEJ == true){GCASpjICEJ = false;}
      if(btyetxNAfd == true){btyetxNAfd = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class FIKEYQRHEA
{ 
  void iwKirSbPUZ()
  { 
      bool xsgAszNgMR = false;
      bool yIUwFRVDCz = false;
      bool PKKcSFEyEE = false;
      bool yywDTnHzLY = false;
      bool zuZTdmeuIO = false;
      bool fyAnPlhEgm = false;
      bool tPbHSAMRbQ = false;
      bool JWrdzUkpzf = false;
      bool ZJopYAxHmh = false;
      bool GDRXdjSRBd = false;
      bool ZNSrEJGWou = false;
      bool BrEBNkZkiS = false;
      bool CFdtKFEUzO = false;
      bool BSoVFMpxlO = false;
      bool saSrfNzQJr = false;
      bool JhihbUiXgy = false;
      bool FlWZthDiuA = false;
      bool uczTZallNx = false;
      bool GmKGETjHtj = false;
      bool dRPmJHEryy = false;
      string CIXkCPBRIX;
      string XpSzVnMcuz;
      string zcxotfpRnJ;
      string hrkgiKZNrh;
      string gUqpHkNakZ;
      string jWXMfYLiqW;
      string YidypeEkQL;
      string OzkMRelGgI;
      string ROfNYKUYBJ;
      string zqVUIyprAc;
      string fcKZLklKtB;
      string lEBhEKCPZf;
      string KfjGLXcPDT;
      string ntGEcoEFCn;
      string XJdAXtomPy;
      string uaSTSArENm;
      string HVHaMqxwFP;
      string FwMkHABiiR;
      string hozEXNbllb;
      string wArOfCBDmf;
      if(CIXkCPBRIX == fcKZLklKtB){xsgAszNgMR = true;}
      else if(fcKZLklKtB == CIXkCPBRIX){ZNSrEJGWou = true;}
      if(XpSzVnMcuz == lEBhEKCPZf){yIUwFRVDCz = true;}
      else if(lEBhEKCPZf == XpSzVnMcuz){BrEBNkZkiS = true;}
      if(zcxotfpRnJ == KfjGLXcPDT){PKKcSFEyEE = true;}
      else if(KfjGLXcPDT == zcxotfpRnJ){CFdtKFEUzO = true;}
      if(hrkgiKZNrh == ntGEcoEFCn){yywDTnHzLY = true;}
      else if(ntGEcoEFCn == hrkgiKZNrh){BSoVFMpxlO = true;}
      if(gUqpHkNakZ == XJdAXtomPy){zuZTdmeuIO = true;}
      else if(XJdAXtomPy == gUqpHkNakZ){saSrfNzQJr = true;}
      if(jWXMfYLiqW == uaSTSArENm){fyAnPlhEgm = true;}
      else if(uaSTSArENm == jWXMfYLiqW){JhihbUiXgy = true;}
      if(YidypeEkQL == HVHaMqxwFP){tPbHSAMRbQ = true;}
      else if(HVHaMqxwFP == YidypeEkQL){FlWZthDiuA = true;}
      if(OzkMRelGgI == FwMkHABiiR){JWrdzUkpzf = true;}
      if(ROfNYKUYBJ == hozEXNbllb){ZJopYAxHmh = true;}
      if(zqVUIyprAc == wArOfCBDmf){GDRXdjSRBd = true;}
      while(FwMkHABiiR == OzkMRelGgI){uczTZallNx = true;}
      while(hozEXNbllb == hozEXNbllb){GmKGETjHtj = true;}
      while(wArOfCBDmf == wArOfCBDmf){dRPmJHEryy = true;}
      if(xsgAszNgMR == true){xsgAszNgMR = false;}
      if(yIUwFRVDCz == true){yIUwFRVDCz = false;}
      if(PKKcSFEyEE == true){PKKcSFEyEE = false;}
      if(yywDTnHzLY == true){yywDTnHzLY = false;}
      if(zuZTdmeuIO == true){zuZTdmeuIO = false;}
      if(fyAnPlhEgm == true){fyAnPlhEgm = false;}
      if(tPbHSAMRbQ == true){tPbHSAMRbQ = false;}
      if(JWrdzUkpzf == true){JWrdzUkpzf = false;}
      if(ZJopYAxHmh == true){ZJopYAxHmh = false;}
      if(GDRXdjSRBd == true){GDRXdjSRBd = false;}
      if(ZNSrEJGWou == true){ZNSrEJGWou = false;}
      if(BrEBNkZkiS == true){BrEBNkZkiS = false;}
      if(CFdtKFEUzO == true){CFdtKFEUzO = false;}
      if(BSoVFMpxlO == true){BSoVFMpxlO = false;}
      if(saSrfNzQJr == true){saSrfNzQJr = false;}
      if(JhihbUiXgy == true){JhihbUiXgy = false;}
      if(FlWZthDiuA == true){FlWZthDiuA = false;}
      if(uczTZallNx == true){uczTZallNx = false;}
      if(GmKGETjHtj == true){GmKGETjHtj = false;}
      if(dRPmJHEryy == true){dRPmJHEryy = false;}
    } 
}; 
