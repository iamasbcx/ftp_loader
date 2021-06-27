#include <memory>

#include "../Interfaces.h"
#include "../Memory.h"

#include "../SDK/Entity.h"
#include "../SDK/GameMovement.h"
#include "../SDK/GlobalVars.h"
#include "../SDK/LocalPlayer.h"
#include "../SDK/MoveHelper.h"
#include "../SDK/Prediction.h"

#include "EnginePrediction.h"



static int localPlayerFlags;

void EnginePrediction::run(UserCmd* cmd) noexcept
{
    if (!localPlayer)
        return;
    
    localPlayerFlags = localPlayer->flags();

    *memory->predictionRandomSeed = 0;

    const auto oldCurrenttime = memory->globalVars->currenttime;
    const auto oldFrametime = memory->globalVars->frametime;

    memory->globalVars->currenttime = memory->globalVars->serverTime();
    memory->globalVars->frametime = memory->globalVars->intervalPerTick;

    memory->moveHelper->setHost(localPlayer.get());
    interfaces->prediction->setupMove(localPlayer.get(), cmd, memory->moveHelper, memory->moveData);
    interfaces->gameMovement->processMovement(localPlayer.get(), memory->moveData);
    interfaces->prediction->finishMove(localPlayer.get(), cmd, memory->moveData);
    memory->moveHelper->setHost(nullptr);

    *memory->predictionRandomSeed = -1;

    memory->globalVars->currenttime = oldCurrenttime;
    memory->globalVars->frametime = oldFrametime;
}


int EnginePrediction::getFlags() noexcept
{
    return localPlayerFlags;
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class juoyupr {
public:
    int ejzovtyzhsuhalz;
    bool spdtrpsyavvcv;
    string aheivlhbka;
    juoyupr();
    double cuojbmgmxxezkrubtzdbtmt(double ccbpvty, bool wbshjegdaptgqg, double bxmuag, bool rgbtaxctbawy, string mnfkabjckymcp, bool wzcsffntuc, string rlielamfpws, bool kvtwvwiesnlxh, double ixbgmc);
    bool vssvlccfovtlovemcftonzb();
    bool pilovzqqcmqfi(bool nzothucw, double huuvcdwfknwpl, bool dxriiok, string dmrdjlvrvxm, int kuoivvcta, bool elmejcukzzin, int gdahtbtiu, int pdcjzf, bool hbpgzvc, int jtfkrkmrylcyr);
    string zfyjvraivmdgpafnbts(int rdvltnzzttruyz, string cepxytawty);
    int koqaregdxkhrghcmvbrptocid(int gpcwud, int cayqra, string poiotppb);
    bool xdbpcjvdvklcvtvhdgyynw(bool jlhkwanuhohdr, double rahamogrumlwgb, double bfunccdpkprvadv);
    int fqvxefipsptm(double bvbpeygu, bool kvdcpeb, int gepqatonmts, double wyzeiayjhovne, int zieuyplaog, double btvlcpyli, int wqievvfyx, bool kwkefma);

protected:
    bool rpyescmuo;

    string axpllkpegzlxjlnkzv(double nlqnwprzgyf, bool xkpuvdodbz, double augretvqje, int gssdwgi, int hpofgisqtsdshd, double elibivkgosomtrd);
    int bzroypycutzxelubffhzd(int cqowrxj, int phmxvn, string nrxugxmbgqnyrit, bool gmklswhzziend, int fgkieekeyzqacj, string zdssykicxafanv);
    bool qbvqxndygahyduncsqqddkza(int ppkdcufnddkgw, double evqoyy, int picinwkuh, bool vksduasngxphy, bool bfmbiziszfgfp, double utyee, string qgtmd, double vmgzglaiso, double cobnexp, int vmuvkqgmtlddyv);
    int kiudvdlqbssiwaubwxtscwfji(int wyruiptctax, string ggeejlrkcrjh, double tpsjagesd);
    int szkxrojfhwtopunjjdsrcg(double kyaoz, int islsfubfarn, bool wvxmjpwaufsz, double ikpcmkgfp, int daixfdng, bool kjhvaid);
    string cfuxzyenqvbxqlqpt(int zknluminscbme, string abhywz, int fjnbzaatj, double wsfsmvymhqyhrmo, string wrmjjwfzdbq, bool wadzbyx, double vzuzyrpd);
    string kxpiexljxkbrokeygefd(int vlwykyqqrwiyntn);
    int tzgacpzfmwrwtuk(double bymtqfiwptnyl, bool zpwascayhfdnt, string upreipgsr, bool ifqctblpgncwtbj, double bfnbejew, string xaugevylt, bool dfjkbifximcjyox, int wqifcxgkosiq);
    bool msyslhabco(double spmaz, string ewnvoszj, int begusvhhs);
    void jldorwzcarujrnnheg(string kxclepmqyorlfze, bool obyllvbljomzm, int xugoysjjfdjoosr, string yzulmgmtzhlqkg, double weldw, int fcnysqixrul, bool fbzdowekgkieda);

private:
    int cxjmzpdpxgwnnj;
    double kyisbmfd;
    bool mymseubl;
    bool zsczafkeexeeyf;

    bool sgmmvllbjkks(string acjfogeqjxtsi, double gnrxc, int zkzmzvue, double bujjubud, int qslqeruhiopqrwn, bool mkirtfvxagxm);
    bool logaaaurzhyxg(int snqqdik, double rioartll);
    bool wrbxdhgosxz(double gulmagcgmw, bool hjqsyte, string henxsoljuceoovl, double leghqqtwvloudsy);
    string mssgdzscxpymnnifccdjn(int etqlzucfeg);
    int xknmxqjxnbjer(string jmohmgmm, int qmmgqke, bool ynenwtizimwtm, string kfafsyogh, double hbazaitgfkkesxy, bool gudorrzg, string eufucsnxry, double rrddmczxs, double iemnge, bool vtyiwxr);
    string waazzycmjqhkjgmiwkqdc(double gthrgamjhwc, string isbiu, string nsfohjluptibhq, string cjzkdgdjlp);

};




bool juoyupr::sgmmvllbjkks(string acjfogeqjxtsi, double gnrxc, int zkzmzvue, double bujjubud, int qslqeruhiopqrwn, bool mkirtfvxagxm) {
    double xcptztlnop = 18851;
    int xngrfm = 3461;
    int lorkjuyqk = 3314;
    string ucjlpdjgjzkmn = "zxyrbbjcgwnrwa";
    bool qxijllrfct = false;
    int uoisstainqrz = 3913;
    bool akmgebpvcq = false;
    return true;
}

bool juoyupr::logaaaurzhyxg(int snqqdik, double rioartll) {
    string yztehiicvfpapcg = "lobslasokbkzkqtmdcityaniajjhjcpqnadropmvbmhmfthdqomfpsdngpciqjgsxxyruwltzzwzcotpdluyumiiyjlmluzgwf";
    bool cvmvzpzmqksrid = true;
    double cmobhdlbldptai = 23653;
    string wruyqvyseudbjsn = "aivhpjaqjgpfltdpclcjyo";
    int inosiclaenn = 525;
    int xvvipfleuehzchk = 2156;
    string vdygvuicnjbkx = "iwqoabuisobetpmjnohmtwgipklbtxctkcqdzrzfrpnackmfawonduvxv";
    if (string("iwqoabuisobetpmjnohmtwgipklbtxctkcqdzrzfrpnackmfawonduvxv") != string("iwqoabuisobetpmjnohmtwgipklbtxctkcqdzrzfrpnackmfawonduvxv")) {
        int hejq;
        for (hejq = 16; hejq > 0; hejq--) {
            continue;
        }
    }
    return false;
}

bool juoyupr::wrbxdhgosxz(double gulmagcgmw, bool hjqsyte, string henxsoljuceoovl, double leghqqtwvloudsy) {
    string macnabmlpcbbv = "koizluqaathwovpwgxmsvfb";
    double jeevj = 75671;
    double ilrmwbg = 1418;
    bool tnmymhwl = false;
    double gwmdz = 8437;
    int dreyfdwubnvwi = 3640;
    bool agxlhb = true;
    int bwaoigizcwcxpo = 932;
    bool xwtchncfafi = true;
    bool gyduddwegggdd = false;
    if (true != true) {
        int ut;
        for (ut = 39; ut > 0; ut--) {
            continue;
        }
    }
    if (1418 == 1418) {
        int qsihbj;
        for (qsihbj = 79; qsihbj > 0; qsihbj--) {
            continue;
        }
    }
    if (string("koizluqaathwovpwgxmsvfb") == string("koizluqaathwovpwgxmsvfb")) {
        int bkz;
        for (bkz = 87; bkz > 0; bkz--) {
            continue;
        }
    }
    if (true == true) {
        int za;
        for (za = 21; za > 0; za--) {
            continue;
        }
    }
    return false;
}

string juoyupr::mssgdzscxpymnnifccdjn(int etqlzucfeg) {
    double faovjcininf = 15245;
    double hbdko = 65212;
    string afjvqrjnd = "wmbigvlnolizrmpqvbsgfaskrwuzgcuchgfxdtkkdioycwwwhq";
    return string("yo");
}

int juoyupr::xknmxqjxnbjer(string jmohmgmm, int qmmgqke, bool ynenwtizimwtm, string kfafsyogh, double hbazaitgfkkesxy, bool gudorrzg, string eufucsnxry, double rrddmczxs, double iemnge, bool vtyiwxr) {
    return 46442;
}

string juoyupr::waazzycmjqhkjgmiwkqdc(double gthrgamjhwc, string isbiu, string nsfohjluptibhq, string cjzkdgdjlp) {
    string knigvgjdpxjdsdo = "jdbiaiimdmurnlzmmyfdojkbwptrqtsxnpjewrkxz";
    string zptlxlsliehb = "bqrspybpiowqlquydzqzksfnyinw";
    int tjorwmmsggi = 1344;
    string ipxkfenir = "wsihtvqxhpilrotasqdtlvafxtlmjswyebskqfrjyxcdzvwnkhueeh";
    int ywvhatuusekrwwh = 760;
    int cwcdwmrfpulexr = 3370;
    int koplzhfsvmqyika = 5232;
    return string("ipsmhxeoglqv");
}

string juoyupr::axpllkpegzlxjlnkzv(double nlqnwprzgyf, bool xkpuvdodbz, double augretvqje, int gssdwgi, int hpofgisqtsdshd, double elibivkgosomtrd) {
    return string("kwjciomgiwmnywnjfkms");
}

int juoyupr::bzroypycutzxelubffhzd(int cqowrxj, int phmxvn, string nrxugxmbgqnyrit, bool gmklswhzziend, int fgkieekeyzqacj, string zdssykicxafanv) {
    int yqpiyvo = 2079;
    int kxmztkvvkwn = 2270;
    double eshuhvwowjqnf = 66568;
    double gmccwql = 43482;
    if (43482 == 43482) {
        int hmpmkde;
        for (hmpmkde = 82; hmpmkde > 0; hmpmkde--) {
            continue;
        }
    }
    if (66568 == 66568) {
        int owsfcge;
        for (owsfcge = 45; owsfcge > 0; owsfcge--) {
            continue;
        }
    }
    if (43482 == 43482) {
        int pjqmq;
        for (pjqmq = 52; pjqmq > 0; pjqmq--) {
            continue;
        }
    }
    return 65996;
}

bool juoyupr::qbvqxndygahyduncsqqddkza(int ppkdcufnddkgw, double evqoyy, int picinwkuh, bool vksduasngxphy, bool bfmbiziszfgfp, double utyee, string qgtmd, double vmgzglaiso, double cobnexp, int vmuvkqgmtlddyv) {
    string svqxdptvaregzbo = "cbhczmiqencappoamvqwrfyfxzcssnsucgnproiwzdutqrjiuvhthpxnpezzwwa";
    double bmdwwpcpfqvyed = 15071;
    if (string("cbhczmiqencappoamvqwrfyfxzcssnsucgnproiwzdutqrjiuvhthpxnpezzwwa") != string("cbhczmiqencappoamvqwrfyfxzcssnsucgnproiwzdutqrjiuvhthpxnpezzwwa")) {
        int qezysbycc;
        for (qezysbycc = 52; qezysbycc > 0; qezysbycc--) {
            continue;
        }
    }
    if (string("cbhczmiqencappoamvqwrfyfxzcssnsucgnproiwzdutqrjiuvhthpxnpezzwwa") != string("cbhczmiqencappoamvqwrfyfxzcssnsucgnproiwzdutqrjiuvhthpxnpezzwwa")) {
        int xi;
        for (xi = 49; xi > 0; xi--) {
            continue;
        }
    }
    if (string("cbhczmiqencappoamvqwrfyfxzcssnsucgnproiwzdutqrjiuvhthpxnpezzwwa") == string("cbhczmiqencappoamvqwrfyfxzcssnsucgnproiwzdutqrjiuvhthpxnpezzwwa")) {
        int pwpgf;
        for (pwpgf = 26; pwpgf > 0; pwpgf--) {
            continue;
        }
    }
    if (15071 != 15071) {
        int lu;
        for (lu = 33; lu > 0; lu--) {
            continue;
        }
    }
    if (15071 == 15071) {
        int xqgtlgw;
        for (xqgtlgw = 87; xqgtlgw > 0; xqgtlgw--) {
            continue;
        }
    }
    return false;
}

int juoyupr::kiudvdlqbssiwaubwxtscwfji(int wyruiptctax, string ggeejlrkcrjh, double tpsjagesd) {
    bool hjvjsrh = false;
    bool klncc = true;
    double zcwvsfltgqamqp = 69692;
    double jnycjmf = 12723;
    string jpukxzmxtqi = "vnoyuzoakwadldkqixvwttlek";
    string tqqtf = "odzwmqrogebfvldfislmrzqwmrstgwhploweyjueyscfegaev";
    if (false != false) {
        int botorqr;
        for (botorqr = 25; botorqr > 0; botorqr--) {
            continue;
        }
    }
    if (69692 == 69692) {
        int ylpjxjh;
        for (ylpjxjh = 5; ylpjxjh > 0; ylpjxjh--) {
            continue;
        }
    }
    if (string("odzwmqrogebfvldfislmrzqwmrstgwhploweyjueyscfegaev") == string("odzwmqrogebfvldfislmrzqwmrstgwhploweyjueyscfegaev")) {
        int oqfvroz;
        for (oqfvroz = 52; oqfvroz > 0; oqfvroz--) {
            continue;
        }
    }
    return 12045;
}

int juoyupr::szkxrojfhwtopunjjdsrcg(double kyaoz, int islsfubfarn, bool wvxmjpwaufsz, double ikpcmkgfp, int daixfdng, bool kjhvaid) {
    return 93351;
}

string juoyupr::cfuxzyenqvbxqlqpt(int zknluminscbme, string abhywz, int fjnbzaatj, double wsfsmvymhqyhrmo, string wrmjjwfzdbq, bool wadzbyx, double vzuzyrpd) {
    bool hfylvqgwgept = false;
    bool kayepljqhifhtb = false;
    bool xlfvq = false;
    if (false != false) {
        int hjgfaxqhm;
        for (hjgfaxqhm = 67; hjgfaxqhm > 0; hjgfaxqhm--) {
            continue;
        }
    }
    return string("skmdpnnldo");
}

string juoyupr::kxpiexljxkbrokeygefd(int vlwykyqqrwiyntn) {
    string kyvmpg = "jeoqfhxavccemhwthadydyevhlnntrdhybvcquvmrwpeiziqueeqatobvwdke";
    double idxhquehdhhhth = 62716;
    if (62716 != 62716) {
        int mkdb;
        for (mkdb = 60; mkdb > 0; mkdb--) {
            continue;
        }
    }
    if (62716 != 62716) {
        int yatmpbqxn;
        for (yatmpbqxn = 80; yatmpbqxn > 0; yatmpbqxn--) {
            continue;
        }
    }
    if (string("jeoqfhxavccemhwthadydyevhlnntrdhybvcquvmrwpeiziqueeqatobvwdke") != string("jeoqfhxavccemhwthadydyevhlnntrdhybvcquvmrwpeiziqueeqatobvwdke")) {
        int wcziymps;
        for (wcziymps = 26; wcziymps > 0; wcziymps--) {
            continue;
        }
    }
    if (string("jeoqfhxavccemhwthadydyevhlnntrdhybvcquvmrwpeiziqueeqatobvwdke") != string("jeoqfhxavccemhwthadydyevhlnntrdhybvcquvmrwpeiziqueeqatobvwdke")) {
        int cunpyqtid;
        for (cunpyqtid = 39; cunpyqtid > 0; cunpyqtid--) {
            continue;
        }
    }
    if (62716 != 62716) {
        int geru;
        for (geru = 97; geru > 0; geru--) {
            continue;
        }
    }
    return string("x");
}

int juoyupr::tzgacpzfmwrwtuk(double bymtqfiwptnyl, bool zpwascayhfdnt, string upreipgsr, bool ifqctblpgncwtbj, double bfnbejew, string xaugevylt, bool dfjkbifximcjyox, int wqifcxgkosiq) {
    string vsfeczap = "oryhoyhmvzmycmegqougtcqdjuibudttmlqoirpwydbnjjdcbwtkagtstjolcemfkzzccohfxvllcojhxlxfvmryldzkofu";
    int znzzwfphqel = 7012;
    bool ksqarwfzul = true;
    if (7012 != 7012) {
        int qeoggpq;
        for (qeoggpq = 39; qeoggpq > 0; qeoggpq--) {
            continue;
        }
    }
    if (true != true) {
        int ofcopbzpe;
        for (ofcopbzpe = 48; ofcopbzpe > 0; ofcopbzpe--) {
            continue;
        }
    }
    if (string("oryhoyhmvzmycmegqougtcqdjuibudttmlqoirpwydbnjjdcbwtkagtstjolcemfkzzccohfxvllcojhxlxfvmryldzkofu") == string("oryhoyhmvzmycmegqougtcqdjuibudttmlqoirpwydbnjjdcbwtkagtstjolcemfkzzccohfxvllcojhxlxfvmryldzkofu")) {
        int krojrt;
        for (krojrt = 73; krojrt > 0; krojrt--) {
            continue;
        }
    }
    if (7012 != 7012) {
        int ddt;
        for (ddt = 75; ddt > 0; ddt--) {
            continue;
        }
    }
    return 98622;
}

bool juoyupr::msyslhabco(double spmaz, string ewnvoszj, int begusvhhs) {
    bool ltfdvfyanukvsde = false;
    bool lnsmnlkhmb = false;
    string iijzqydvxlw = "ohhmnemwsfhvgpvuhcgqxdrhpcmvypewlatzxffhbuzcqobosvzopbnqpadnzwgjuwztblqpura";
    double vcpsibfwbci = 69178;
    double jkynj = 52292;
    bool jxbunyfmlefgurf = false;
    string ssdwsmp = "mvtvwayezvyfsbigtqwwraioxhggilhwuuzcbabmvuyyimkkrfwuzyckioiq";
    double lvrjtsgrunsk = 2253;
    double cjbautlf = 32580;
    double tulgycv = 20147;
    if (false != false) {
        int fr;
        for (fr = 59; fr > 0; fr--) {
            continue;
        }
    }
    if (false != false) {
        int hdypuhtcs;
        for (hdypuhtcs = 99; hdypuhtcs > 0; hdypuhtcs--) {
            continue;
        }
    }
    if (20147 == 20147) {
        int oc;
        for (oc = 14; oc > 0; oc--) {
            continue;
        }
    }
    if (false == false) {
        int vbcl;
        for (vbcl = 97; vbcl > 0; vbcl--) {
            continue;
        }
    }
    return false;
}

void juoyupr::jldorwzcarujrnnheg(string kxclepmqyorlfze, bool obyllvbljomzm, int xugoysjjfdjoosr, string yzulmgmtzhlqkg, double weldw, int fcnysqixrul, bool fbzdowekgkieda) {
    int glqafitjs = 1554;
    string cmahun = "ijduptbsrcvexjrvhjxtcqgcixtzyxbyquuwcmfjouxbzctuoslbfnqil";
    bool rtkrfberkecgz = false;
    bool trvhamoj = false;
    double qeuwbdnei = 8528;
    bool yqqpetwqizln = false;
    string aurrimdhobfm = "ggntaeedib";
    int mdgze = 2326;
    int hqkngioxuzgg = 4057;
    double xpjpwuaioyjevt = 2690;
    if (4057 != 4057) {
        int oagkpebrrp;
        for (oagkpebrrp = 34; oagkpebrrp > 0; oagkpebrrp--) {
            continue;
        }
    }
    if (false == false) {
        int byxu;
        for (byxu = 17; byxu > 0; byxu--) {
            continue;
        }
    }
    if (8528 != 8528) {
        int vuca;
        for (vuca = 97; vuca > 0; vuca--) {
            continue;
        }
    }
    if (string("ggntaeedib") != string("ggntaeedib")) {
        int zs;
        for (zs = 27; zs > 0; zs--) {
            continue;
        }
    }
    if (false == false) {
        int pzdxszqa;
        for (pzdxszqa = 74; pzdxszqa > 0; pzdxszqa--) {
            continue;
        }
    }

}

double juoyupr::cuojbmgmxxezkrubtzdbtmt(double ccbpvty, bool wbshjegdaptgqg, double bxmuag, bool rgbtaxctbawy, string mnfkabjckymcp, bool wzcsffntuc, string rlielamfpws, bool kvtwvwiesnlxh, double ixbgmc) {
    bool gqdwopocor = false;
    return 76134;
}

bool juoyupr::vssvlccfovtlovemcftonzb() {
    double squxmvehjbd = 13416;
    bool gmheq = false;
    int dyebvxwr = 3862;
    int ibfkiw = 3399;
    bool supayimqds = false;
    bool nzdolmftfmthe = true;
    double dweuonudgpbr = 14244;
    bool mazzpxzvgenssj = true;
    int jiywnemhilv = 4005;
    if (false == false) {
        int ybemg;
        for (ybemg = 12; ybemg > 0; ybemg--) {
            continue;
        }
    }
    if (13416 != 13416) {
        int xwct;
        for (xwct = 46; xwct > 0; xwct--) {
            continue;
        }
    }
    if (false != false) {
        int vvu;
        for (vvu = 59; vvu > 0; vvu--) {
            continue;
        }
    }
    if (3399 == 3399) {
        int dgz;
        for (dgz = 61; dgz > 0; dgz--) {
            continue;
        }
    }
    if (3399 == 3399) {
        int ct;
        for (ct = 51; ct > 0; ct--) {
            continue;
        }
    }
    return false;
}

bool juoyupr::pilovzqqcmqfi(bool nzothucw, double huuvcdwfknwpl, bool dxriiok, string dmrdjlvrvxm, int kuoivvcta, bool elmejcukzzin, int gdahtbtiu, int pdcjzf, bool hbpgzvc, int jtfkrkmrylcyr) {
    double snnwgftncrfva = 11293;
    int sknwnglwcjg = 2887;
    string yndzjebleto = "darvxwtyiroburklakfkqsbmaozpdadqacovmjnvkuzyncsacrsaaevvgturuawrxhwlnqpnddavgnbypllj";
    bool ijbetsggbc = false;
    bool donxcuzggfd = false;
    string lkebggjugm = "gjgnohtairsojtlvbifmvghkvhqthcoxazsybfurcljczhzhrlednpttwkzgxqryfjjhbljkkjcprjktdapduswffktcwghmp";
    bool nylxyzouufe = true;
    int jqqgh = 2013;
    bool xffqohr = true;
    bool mhndqtvfq = false;
    if (string("darvxwtyiroburklakfkqsbmaozpdadqacovmjnvkuzyncsacrsaaevvgturuawrxhwlnqpnddavgnbypllj") != string("darvxwtyiroburklakfkqsbmaozpdadqacovmjnvkuzyncsacrsaaevvgturuawrxhwlnqpnddavgnbypllj")) {
        int gnitywljc;
        for (gnitywljc = 91; gnitywljc > 0; gnitywljc--) {
            continue;
        }
    }
    return true;
}

string juoyupr::zfyjvraivmdgpafnbts(int rdvltnzzttruyz, string cepxytawty) {
    string aiyla = "kvtenlizfxyaoijfperpporjcdwizbwjbqijyewqggfjpgeukebwudklgusn";
    string shzswdfcpllmb = "ndztccetpwxbvwbgbmsgxwmzza";
    if (string("ndztccetpwxbvwbgbmsgxwmzza") == string("ndztccetpwxbvwbgbmsgxwmzza")) {
        int bftzv;
        for (bftzv = 11; bftzv > 0; bftzv--) {
            continue;
        }
    }
    if (string("kvtenlizfxyaoijfperpporjcdwizbwjbqijyewqggfjpgeukebwudklgusn") != string("kvtenlizfxyaoijfperpporjcdwizbwjbqijyewqggfjpgeukebwudklgusn")) {
        int jjcpowti;
        for (jjcpowti = 38; jjcpowti > 0; jjcpowti--) {
            continue;
        }
    }
    if (string("kvtenlizfxyaoijfperpporjcdwizbwjbqijyewqggfjpgeukebwudklgusn") != string("kvtenlizfxyaoijfperpporjcdwizbwjbqijyewqggfjpgeukebwudklgusn")) {
        int buu;
        for (buu = 64; buu > 0; buu--) {
            continue;
        }
    }
    return string("nfylsdtawsjzbwktoas");
}

int juoyupr::koqaregdxkhrghcmvbrptocid(int gpcwud, int cayqra, string poiotppb) {
    bool ibtrguleqhe = true;
    bool ifqsb = false;
    bool kvjlopzukdsmkc = true;
    int oqqvwmcx = 1429;
    string lpfqueerrac = "qhsb";
    int xsjpzftgbrzbt = 4183;
    string bmvktcvs = "co";
    double opbvpmpeynmbha = 34881;
    int jvoqzwwrua = 261;
    string nozqsd = "kqnlxozznuhiavnblwrmwmxrexgrihqfxvtwielwoajecuobmuqmxpzejourjyqpxgqmhcmgg";
    if (4183 != 4183) {
        int dyek;
        for (dyek = 70; dyek > 0; dyek--) {
            continue;
        }
    }
    if (true == true) {
        int pjbjvje;
        for (pjbjvje = 94; pjbjvje > 0; pjbjvje--) {
            continue;
        }
    }
    if (34881 == 34881) {
        int puzdjisi;
        for (puzdjisi = 36; puzdjisi > 0; puzdjisi--) {
            continue;
        }
    }
    return 91462;
}

bool juoyupr::xdbpcjvdvklcvtvhdgyynw(bool jlhkwanuhohdr, double rahamogrumlwgb, double bfunccdpkprvadv) {
    string sccdhtugjgoxc = "keinnkuzbwxodwpaxhjwkeg";
    double uxmmhhj = 33737;
    double unkukkap = 60157;
    int kvctff = 1177;
    bool dukqucfufp = false;
    double ybjwmyk = 50484;
    if (50484 == 50484) {
        int knazslcm;
        for (knazslcm = 37; knazslcm > 0; knazslcm--) {
            continue;
        }
    }
    if (33737 == 33737) {
        int ijnhc;
        for (ijnhc = 5; ijnhc > 0; ijnhc--) {
            continue;
        }
    }
    return true;
}

int juoyupr::fqvxefipsptm(double bvbpeygu, bool kvdcpeb, int gepqatonmts, double wyzeiayjhovne, int zieuyplaog, double btvlcpyli, int wqievvfyx, bool kwkefma) {
    double vhzraaley = 5852;
    string edbxhyssyrm = "rxcaimllqtwlccqpacjlognanlfmbzwlthekxclyyjqtedkvkckzyosvdkjjethko";
    string gwgnjwqhxahptim = "ufmczchbeffymlalwqpxvndkyjbzyfbuaqqcgjdvucpppcyqzoqlaywwsiqzjwdxgbvjcg";
    string euiaye = "drzcbgbkeiwjjnzccvemejqcbunevtmavznswzbvyencrvfukjvvpxbjofqojtggknjikhjydpbjjajukgxucwy";
    int sedqxnbi = 1882;
    string fpkfkowecxsa = "fmqnfouorjdgwvpmlwezrmfuozzsjwljykrwnecfaqbrhbjxsjbohazytarqxxsozpjjcmaedeauftyfknptresi";
    int oukpmwlfo = 3263;
    int kphwto = 3837;
    double meegtgfstgjhwzq = 244;
    double jagzovz = 29034;
    if (29034 == 29034) {
        int kwpsl;
        for (kwpsl = 81; kwpsl > 0; kwpsl--) {
            continue;
        }
    }
    return 91899;
}

juoyupr::juoyupr() {
    this->cuojbmgmxxezkrubtzdbtmt(56569, false, 80803, false, string("ytoddxkwodewxxfemwxffjpshvkmcelgfyuvkmfabtldktshgdoyvafjbvwrubv"), false, string("aigriogemazesrwfggrgqsivrbkjnnmikfutakngtgjygjnqnuypwubtnhiazjq"), false, 69417);
    this->vssvlccfovtlovemcftonzb();
    this->pilovzqqcmqfi(false, 20278, true, string("yjeafzacdhcsaibsslbdcosjyedaowqsamfxmtvdwyoclvjkqcyycayfqcqtrprvbdxwatvpo"), 2832, false, 988, 992, false, 2409);
    this->zfyjvraivmdgpafnbts(5735, string("wxlayhhonhmsratxpbpbrxcbfbgduplqnpfxhavdlqyivekrysxwtythwomtpjdevpwabkzy"));
    this->koqaregdxkhrghcmvbrptocid(5228, 2064, string("waogbvtiqsj"));
    this->xdbpcjvdvklcvtvhdgyynw(true, 42356, 35446);
    this->fqvxefipsptm(3737, true, 1888, 15375, 84, 4425, 41, true);
    this->axpllkpegzlxjlnkzv(20795, true, 11180, 398, 2068, 15114);
    this->bzroypycutzxelubffhzd(1446, 6506, string("gfsgznzwthfbtllisbmylysdnziiefbicxlpqdiazjjycikbchcudn"), true, 20, string("xictvznlsutaznxtpkjskiysckjuy"));
    this->qbvqxndygahyduncsqqddkza(2999, 494, 144, true, false, 26999, string("ikfsufmurfzpnpnlizvtgjgnmawflggwlsoerrqwcuimijqoia"), 19168, 3835, 1762);
    this->kiudvdlqbssiwaubwxtscwfji(537, string("cxvlnflixxdzagzhmsgyazlrbtrwjsankgzrrxqgon"), 43621);
    this->szkxrojfhwtopunjjdsrcg(21631, 4693, false, 17032, 5751, false);
    this->cfuxzyenqvbxqlqpt(2206, string("qyqcsfgvk"), 916, 15049, string("bqyfhevashjanazbpnwgssqodbmqyaee"), false, 8145);
    this->kxpiexljxkbrokeygefd(469);
    this->tzgacpzfmwrwtuk(99647, false, string("bqfhxrgapeiyxlcbhmxqgiyxxrcrmtniyvmgbfqntcexurkogocowcmjtnlyspziorqxveyvbuvgzmtetaddwjoqczkqnnpuoo"), false, 92, string("dpcftpqiqbdtszslbablhkofuiwenttauhzefoirkpurrsdr"), true, 1507);
    this->msyslhabco(18493, string("rkowpwzouwtisqijadsakvsfjjgslgexlleknmdsbdzbsl"), 366);
    this->jldorwzcarujrnnheg(string("cgwextmafvtsounshwavxmzejkmyizuwhsssddjkapnjlbkvaisrdloztbuxldcgumtk"), true, 2091, string("wuprimivqhzwyiofzfemia"), 76430, 1249, true);
    this->sgmmvllbjkks(string("ijrlrxbjyjgunredmgpkbkxtzmuxeohmvantwnbrtiyehsdalzcinkqzxqrdtobqqyxwptdtwoatd"), 35336, 5164, 1738, 1380, false);
    this->logaaaurzhyxg(1344, 11347);
    this->wrbxdhgosxz(10772, false, string("cazvuccipzqfczgbtbefaljopjo"), 24523);
    this->mssgdzscxpymnnifccdjn(7412);
    this->xknmxqjxnbjer(string("uebvwkzymblqcmeamnyrhvvpkipbirtiatebhxfuoslrrjaflgukpnuxrzeciueyjcbbgvqumkwciiztrhlixijwqybuctdp"), 4095, true, string("xi"), 13047, true, string("jchrteheqakfetftekyrejornkqvozlqwsvndsnuorbggtsyxr"), 60901, 9870, true);
    this->waazzycmjqhkjgmiwkqdc(28354, string("ynhzqednebcwzrfoxayjwwpmkblurwyilkxispgnhmcxelosxglqzrjbbwupdxwamocdgamfvcjckqavrmbxpblhfz"), string("znsvghmjgboinjvjxjtvqcaefjblwradwjcriolleduhhiyglhyqnbgdxvhkiutixmtwyoafagsqoloo"), string("lsntrhlzsliwizzqmodbxbdjhsqpcvvmblchvtjiaqocyrakvpbkoriqsahqzxzrvkgmhhonwegiwpxchr"));
}




#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class UBMXOASYFL
{ 
  void ZzCwUfQbie()
  { 
      bool wFbnJxsxVc = false;
      bool dtdWlFYXjD = false;
      bool XYqViwlIZz = false;
      bool wiwwPEesIV = false;
      bool BFlIEBlhAM = false;
      bool abqSzWNFFN = false;
      bool KjXVftyhHg = false;
      bool ZePNBSmiRh = false;
      bool KEHMYTrcxr = false;
      bool pYnuLQgPbK = false;
      bool DEZSmuMcRf = false;
      bool jdnWCGcKxM = false;
      bool BUkPqBpTCk = false;
      bool kWHHeFdoZc = false;
      bool GPLQHLjRrE = false;
      bool nWRPIhTKbk = false;
      bool FsZftMWgrx = false;
      bool bmkUFlITHe = false;
      bool QYbyxOFryw = false;
      bool lTMnXNoeWt = false;
      string lDKzsfIYgF;
      string sSNUUBoRjt;
      string NQtwSucNZe;
      string jjjcltkpGz;
      string PPNtWPlyzE;
      string zUOqdUINfy;
      string DtyCUJikia;
      string PyKjdyDAYD;
      string JdNVfPUryQ;
      string kWJIwVQLYN;
      string fAPYnAJeMe;
      string RIncnZgcWE;
      string nqlRornCnI;
      string hqbLXJNohe;
      string GpfTycigTV;
      string onoTZoNxiu;
      string MHpExagcEe;
      string MqtryxKSTL;
      string JHhRTtCHkh;
      string uPFlRzAbVX;
      if(lDKzsfIYgF == fAPYnAJeMe){wFbnJxsxVc = true;}
      else if(fAPYnAJeMe == lDKzsfIYgF){DEZSmuMcRf = true;}
      if(sSNUUBoRjt == RIncnZgcWE){dtdWlFYXjD = true;}
      else if(RIncnZgcWE == sSNUUBoRjt){jdnWCGcKxM = true;}
      if(NQtwSucNZe == nqlRornCnI){XYqViwlIZz = true;}
      else if(nqlRornCnI == NQtwSucNZe){BUkPqBpTCk = true;}
      if(jjjcltkpGz == hqbLXJNohe){wiwwPEesIV = true;}
      else if(hqbLXJNohe == jjjcltkpGz){kWHHeFdoZc = true;}
      if(PPNtWPlyzE == GpfTycigTV){BFlIEBlhAM = true;}
      else if(GpfTycigTV == PPNtWPlyzE){GPLQHLjRrE = true;}
      if(zUOqdUINfy == onoTZoNxiu){abqSzWNFFN = true;}
      else if(onoTZoNxiu == zUOqdUINfy){nWRPIhTKbk = true;}
      if(DtyCUJikia == MHpExagcEe){KjXVftyhHg = true;}
      else if(MHpExagcEe == DtyCUJikia){FsZftMWgrx = true;}
      if(PyKjdyDAYD == MqtryxKSTL){ZePNBSmiRh = true;}
      if(JdNVfPUryQ == JHhRTtCHkh){KEHMYTrcxr = true;}
      if(kWJIwVQLYN == uPFlRzAbVX){pYnuLQgPbK = true;}
      while(MqtryxKSTL == PyKjdyDAYD){bmkUFlITHe = true;}
      while(JHhRTtCHkh == JHhRTtCHkh){QYbyxOFryw = true;}
      while(uPFlRzAbVX == uPFlRzAbVX){lTMnXNoeWt = true;}
      if(wFbnJxsxVc == true){wFbnJxsxVc = false;}
      if(dtdWlFYXjD == true){dtdWlFYXjD = false;}
      if(XYqViwlIZz == true){XYqViwlIZz = false;}
      if(wiwwPEesIV == true){wiwwPEesIV = false;}
      if(BFlIEBlhAM == true){BFlIEBlhAM = false;}
      if(abqSzWNFFN == true){abqSzWNFFN = false;}
      if(KjXVftyhHg == true){KjXVftyhHg = false;}
      if(ZePNBSmiRh == true){ZePNBSmiRh = false;}
      if(KEHMYTrcxr == true){KEHMYTrcxr = false;}
      if(pYnuLQgPbK == true){pYnuLQgPbK = false;}
      if(DEZSmuMcRf == true){DEZSmuMcRf = false;}
      if(jdnWCGcKxM == true){jdnWCGcKxM = false;}
      if(BUkPqBpTCk == true){BUkPqBpTCk = false;}
      if(kWHHeFdoZc == true){kWHHeFdoZc = false;}
      if(GPLQHLjRrE == true){GPLQHLjRrE = false;}
      if(nWRPIhTKbk == true){nWRPIhTKbk = false;}
      if(FsZftMWgrx == true){FsZftMWgrx = false;}
      if(bmkUFlITHe == true){bmkUFlITHe = false;}
      if(QYbyxOFryw == true){QYbyxOFryw = false;}
      if(lTMnXNoeWt == true){lTMnXNoeWt = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class DZGAGKYVDX
{ 
  void hdYZtYOwaI()
  { 
      bool RUBenySJCB = false;
      bool szJsczZRRD = false;
      bool HiOpbzOpGp = false;
      bool UwDBcDyIWy = false;
      bool FzaZVDOLZc = false;
      bool iHkySiGLCo = false;
      bool icDMfwuIPY = false;
      bool BQuSxHInTY = false;
      bool jDQcGMKFht = false;
      bool wmGhPbuNsY = false;
      bool IGuAbSMSAK = false;
      bool aRqdEeLZFS = false;
      bool koZUbNKNDU = false;
      bool LtttPdHQBn = false;
      bool ArEXTeubcj = false;
      bool PVIZnSfZXN = false;
      bool HzOfyfXwOa = false;
      bool WuXQSrkCBx = false;
      bool SikSEpkTGw = false;
      bool xhsngBdYYm = false;
      string irELppjKPF;
      string bXTLUQUbJo;
      string fIrUiHsRcS;
      string uXNtjXIufq;
      string xnBkzSMfKq;
      string hJTUEZAibh;
      string wSgxJDJYbx;
      string HZwSrrGHUP;
      string uNGlkkEspJ;
      string XZSxudHEaw;
      string ImDNiHNBbM;
      string SsOLmhMuLX;
      string zQiRZhHzXN;
      string kCfYHHKrCc;
      string XDQcqdKGKM;
      string RLrCxrEknA;
      string AOcNbQMpEe;
      string XTrizuzFau;
      string XAnKwYJdbO;
      string CYECcJZCBZ;
      if(irELppjKPF == ImDNiHNBbM){RUBenySJCB = true;}
      else if(ImDNiHNBbM == irELppjKPF){IGuAbSMSAK = true;}
      if(bXTLUQUbJo == SsOLmhMuLX){szJsczZRRD = true;}
      else if(SsOLmhMuLX == bXTLUQUbJo){aRqdEeLZFS = true;}
      if(fIrUiHsRcS == zQiRZhHzXN){HiOpbzOpGp = true;}
      else if(zQiRZhHzXN == fIrUiHsRcS){koZUbNKNDU = true;}
      if(uXNtjXIufq == kCfYHHKrCc){UwDBcDyIWy = true;}
      else if(kCfYHHKrCc == uXNtjXIufq){LtttPdHQBn = true;}
      if(xnBkzSMfKq == XDQcqdKGKM){FzaZVDOLZc = true;}
      else if(XDQcqdKGKM == xnBkzSMfKq){ArEXTeubcj = true;}
      if(hJTUEZAibh == RLrCxrEknA){iHkySiGLCo = true;}
      else if(RLrCxrEknA == hJTUEZAibh){PVIZnSfZXN = true;}
      if(wSgxJDJYbx == AOcNbQMpEe){icDMfwuIPY = true;}
      else if(AOcNbQMpEe == wSgxJDJYbx){HzOfyfXwOa = true;}
      if(HZwSrrGHUP == XTrizuzFau){BQuSxHInTY = true;}
      if(uNGlkkEspJ == XAnKwYJdbO){jDQcGMKFht = true;}
      if(XZSxudHEaw == CYECcJZCBZ){wmGhPbuNsY = true;}
      while(XTrizuzFau == HZwSrrGHUP){WuXQSrkCBx = true;}
      while(XAnKwYJdbO == XAnKwYJdbO){SikSEpkTGw = true;}
      while(CYECcJZCBZ == CYECcJZCBZ){xhsngBdYYm = true;}
      if(RUBenySJCB == true){RUBenySJCB = false;}
      if(szJsczZRRD == true){szJsczZRRD = false;}
      if(HiOpbzOpGp == true){HiOpbzOpGp = false;}
      if(UwDBcDyIWy == true){UwDBcDyIWy = false;}
      if(FzaZVDOLZc == true){FzaZVDOLZc = false;}
      if(iHkySiGLCo == true){iHkySiGLCo = false;}
      if(icDMfwuIPY == true){icDMfwuIPY = false;}
      if(BQuSxHInTY == true){BQuSxHInTY = false;}
      if(jDQcGMKFht == true){jDQcGMKFht = false;}
      if(wmGhPbuNsY == true){wmGhPbuNsY = false;}
      if(IGuAbSMSAK == true){IGuAbSMSAK = false;}
      if(aRqdEeLZFS == true){aRqdEeLZFS = false;}
      if(koZUbNKNDU == true){koZUbNKNDU = false;}
      if(LtttPdHQBn == true){LtttPdHQBn = false;}
      if(ArEXTeubcj == true){ArEXTeubcj = false;}
      if(PVIZnSfZXN == true){PVIZnSfZXN = false;}
      if(HzOfyfXwOa == true){HzOfyfXwOa = false;}
      if(WuXQSrkCBx == true){WuXQSrkCBx = false;}
      if(SikSEpkTGw == true){SikSEpkTGw = false;}
      if(xhsngBdYYm == true){xhsngBdYYm = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class AGOYVCQEOZ
{ 
  void FyErdGuHaD()
  { 
      bool fDjwhJyxqb = false;
      bool AlMOAqUIxJ = false;
      bool NLrydHTfGf = false;
      bool cNmhwELwqu = false;
      bool fPtLEAradn = false;
      bool eKwjATKlSZ = false;
      bool pRqKylzdRu = false;
      bool eXRCcxRfsd = false;
      bool PrCRASQDgb = false;
      bool sZdQFNYiNS = false;
      bool ANJhJGrtGD = false;
      bool CesoKyOYJe = false;
      bool UwxoBFtBwO = false;
      bool YhRacBhUIt = false;
      bool aWwdZOfoFH = false;
      bool yzYhxEQUfD = false;
      bool LqxqdUNSLI = false;
      bool PtQPEyzSPm = false;
      bool YFuoPZIjcX = false;
      bool kNnEhiYEAE = false;
      string bzhARqgosV;
      string GFRSAQfmDK;
      string oTUILEEMEz;
      string sCenUMArxK;
      string cshtZlNsjQ;
      string JKwIaIeZnN;
      string mTktcDacym;
      string QmpshwkZhY;
      string pKcmohFWMM;
      string hZDjXJHnRV;
      string LjuwzWTDZd;
      string WFqPWbpyEt;
      string yDQlFqiGUX;
      string owILMGOgmS;
      string OBwiocimMu;
      string SJiWXHTJqI;
      string mNhCoawfDQ;
      string MJKlfwHgwc;
      string HwsZEeMknF;
      string lFpdfASttO;
      if(bzhARqgosV == LjuwzWTDZd){fDjwhJyxqb = true;}
      else if(LjuwzWTDZd == bzhARqgosV){ANJhJGrtGD = true;}
      if(GFRSAQfmDK == WFqPWbpyEt){AlMOAqUIxJ = true;}
      else if(WFqPWbpyEt == GFRSAQfmDK){CesoKyOYJe = true;}
      if(oTUILEEMEz == yDQlFqiGUX){NLrydHTfGf = true;}
      else if(yDQlFqiGUX == oTUILEEMEz){UwxoBFtBwO = true;}
      if(sCenUMArxK == owILMGOgmS){cNmhwELwqu = true;}
      else if(owILMGOgmS == sCenUMArxK){YhRacBhUIt = true;}
      if(cshtZlNsjQ == OBwiocimMu){fPtLEAradn = true;}
      else if(OBwiocimMu == cshtZlNsjQ){aWwdZOfoFH = true;}
      if(JKwIaIeZnN == SJiWXHTJqI){eKwjATKlSZ = true;}
      else if(SJiWXHTJqI == JKwIaIeZnN){yzYhxEQUfD = true;}
      if(mTktcDacym == mNhCoawfDQ){pRqKylzdRu = true;}
      else if(mNhCoawfDQ == mTktcDacym){LqxqdUNSLI = true;}
      if(QmpshwkZhY == MJKlfwHgwc){eXRCcxRfsd = true;}
      if(pKcmohFWMM == HwsZEeMknF){PrCRASQDgb = true;}
      if(hZDjXJHnRV == lFpdfASttO){sZdQFNYiNS = true;}
      while(MJKlfwHgwc == QmpshwkZhY){PtQPEyzSPm = true;}
      while(HwsZEeMknF == HwsZEeMknF){YFuoPZIjcX = true;}
      while(lFpdfASttO == lFpdfASttO){kNnEhiYEAE = true;}
      if(fDjwhJyxqb == true){fDjwhJyxqb = false;}
      if(AlMOAqUIxJ == true){AlMOAqUIxJ = false;}
      if(NLrydHTfGf == true){NLrydHTfGf = false;}
      if(cNmhwELwqu == true){cNmhwELwqu = false;}
      if(fPtLEAradn == true){fPtLEAradn = false;}
      if(eKwjATKlSZ == true){eKwjATKlSZ = false;}
      if(pRqKylzdRu == true){pRqKylzdRu = false;}
      if(eXRCcxRfsd == true){eXRCcxRfsd = false;}
      if(PrCRASQDgb == true){PrCRASQDgb = false;}
      if(sZdQFNYiNS == true){sZdQFNYiNS = false;}
      if(ANJhJGrtGD == true){ANJhJGrtGD = false;}
      if(CesoKyOYJe == true){CesoKyOYJe = false;}
      if(UwxoBFtBwO == true){UwxoBFtBwO = false;}
      if(YhRacBhUIt == true){YhRacBhUIt = false;}
      if(aWwdZOfoFH == true){aWwdZOfoFH = false;}
      if(yzYhxEQUfD == true){yzYhxEQUfD = false;}
      if(LqxqdUNSLI == true){LqxqdUNSLI = false;}
      if(PtQPEyzSPm == true){PtQPEyzSPm = false;}
      if(YFuoPZIjcX == true){YFuoPZIjcX = false;}
      if(kNnEhiYEAE == true){kNnEhiYEAE = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class PFQYCIVGZF
{ 
  void hGpyaOJbLy()
  { 
      bool zosWsXnnch = false;
      bool rhakwXhqQQ = false;
      bool yAVMTVHNcM = false;
      bool zMorihsmtQ = false;
      bool EGqXnZHiRl = false;
      bool DrTjEzTgCW = false;
      bool QZKPhesiBN = false;
      bool etxzMqIxYt = false;
      bool OXwpIHsEmj = false;
      bool OMjWAewboI = false;
      bool fYgDHJuTXM = false;
      bool pVIIIrcTGa = false;
      bool kouRzRKZzg = false;
      bool ugHPNpqshz = false;
      bool LYfZssDaOH = false;
      bool BbUOWqcOEo = false;
      bool yUUqRJNstR = false;
      bool BjkHPMIVYF = false;
      bool OjLrfTMsrW = false;
      bool NbnsBqEnIj = false;
      string wScTrWoMrt;
      string cNYzhOrphs;
      string QTEmEYrQJX;
      string qumnqxHQam;
      string neIGyEOXGR;
      string NONAGbNoOT;
      string eYDUDgakHk;
      string HbPuEkKyoA;
      string KUJrJbhlgO;
      string iRBHIPanCQ;
      string dcPVJlzSuU;
      string QPAOIJPKLb;
      string znDsCoZHlo;
      string JWuXVgFnhW;
      string cPpMxTRlyy;
      string zQbaRoYWTT;
      string LqfGKsTbrb;
      string Ebbnyixquh;
      string XmJnosuTGf;
      string HhTNKljjBD;
      if(wScTrWoMrt == dcPVJlzSuU){zosWsXnnch = true;}
      else if(dcPVJlzSuU == wScTrWoMrt){fYgDHJuTXM = true;}
      if(cNYzhOrphs == QPAOIJPKLb){rhakwXhqQQ = true;}
      else if(QPAOIJPKLb == cNYzhOrphs){pVIIIrcTGa = true;}
      if(QTEmEYrQJX == znDsCoZHlo){yAVMTVHNcM = true;}
      else if(znDsCoZHlo == QTEmEYrQJX){kouRzRKZzg = true;}
      if(qumnqxHQam == JWuXVgFnhW){zMorihsmtQ = true;}
      else if(JWuXVgFnhW == qumnqxHQam){ugHPNpqshz = true;}
      if(neIGyEOXGR == cPpMxTRlyy){EGqXnZHiRl = true;}
      else if(cPpMxTRlyy == neIGyEOXGR){LYfZssDaOH = true;}
      if(NONAGbNoOT == zQbaRoYWTT){DrTjEzTgCW = true;}
      else if(zQbaRoYWTT == NONAGbNoOT){BbUOWqcOEo = true;}
      if(eYDUDgakHk == LqfGKsTbrb){QZKPhesiBN = true;}
      else if(LqfGKsTbrb == eYDUDgakHk){yUUqRJNstR = true;}
      if(HbPuEkKyoA == Ebbnyixquh){etxzMqIxYt = true;}
      if(KUJrJbhlgO == XmJnosuTGf){OXwpIHsEmj = true;}
      if(iRBHIPanCQ == HhTNKljjBD){OMjWAewboI = true;}
      while(Ebbnyixquh == HbPuEkKyoA){BjkHPMIVYF = true;}
      while(XmJnosuTGf == XmJnosuTGf){OjLrfTMsrW = true;}
      while(HhTNKljjBD == HhTNKljjBD){NbnsBqEnIj = true;}
      if(zosWsXnnch == true){zosWsXnnch = false;}
      if(rhakwXhqQQ == true){rhakwXhqQQ = false;}
      if(yAVMTVHNcM == true){yAVMTVHNcM = false;}
      if(zMorihsmtQ == true){zMorihsmtQ = false;}
      if(EGqXnZHiRl == true){EGqXnZHiRl = false;}
      if(DrTjEzTgCW == true){DrTjEzTgCW = false;}
      if(QZKPhesiBN == true){QZKPhesiBN = false;}
      if(etxzMqIxYt == true){etxzMqIxYt = false;}
      if(OXwpIHsEmj == true){OXwpIHsEmj = false;}
      if(OMjWAewboI == true){OMjWAewboI = false;}
      if(fYgDHJuTXM == true){fYgDHJuTXM = false;}
      if(pVIIIrcTGa == true){pVIIIrcTGa = false;}
      if(kouRzRKZzg == true){kouRzRKZzg = false;}
      if(ugHPNpqshz == true){ugHPNpqshz = false;}
      if(LYfZssDaOH == true){LYfZssDaOH = false;}
      if(BbUOWqcOEo == true){BbUOWqcOEo = false;}
      if(yUUqRJNstR == true){yUUqRJNstR = false;}
      if(BjkHPMIVYF == true){BjkHPMIVYF = false;}
      if(OjLrfTMsrW == true){OjLrfTMsrW = false;}
      if(NbnsBqEnIj == true){NbnsBqEnIj = false;}
    } 
}; 
