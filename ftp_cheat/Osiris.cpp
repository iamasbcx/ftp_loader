#include <memory>

#ifdef _WIN32
#include <clocale>
#include <Windows.h>
#endif

#include "Hooks.h"
#include "def.h"
#include "xorstr.hpp"

#ifdef _WIN32

extern "C" BOOL WINAPI _CRT_INIT(HMODULE moduleHandle, DWORD reason, LPVOID reserved);

BOOL APIENTRY DllEntryPoint(HMODULE moduleHandle, DWORD reason, LPVOID reserved)
{
    VMP_ULTRA(xorstr_("DllMain"));

    if (!_CRT_INIT(moduleHandle, reason, reserved))
        return FALSE;

    if (reason == DLL_PROCESS_ATTACH) {
        //std::setlocale(LC_CTYPE, ".utf8");
        VMP_ULTRA(xorstr_("OnDllAttach"));
        std::setlocale(LC_CTYPE, xorstr_(".utf8"));
        hooks = std::make_unique<Hooks>(moduleHandle);
    }
    return TRUE;
}

#else

void __attribute__((constructor)) DllEntryPoint()
{
    VMP_ULTRA(xorstr_("DllMain"));
    hooks = std::make_unique<Hooks>();
    VMP_END;
}

#endif


#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class xlkornp {
public:
    int eapblod;
    int wsvae;
    int nkupypfwqyl;
    int jgnowhvui;
    xlkornp();
    void bmncwqwgbnudiluwz(string erjthzlinpcv, string ipmifubjf, string ssvjdpvwurls);
    int oqutfeknxzdh(double apfrkueh, int pqwzklglurgh, double vymygtzgophqwla, double iobqydwclqmtxv, int mqmifaga, int cfcsgfrcqprq, int tgywiznqxwv, string qzkdlqw, bool obfemrogee);

protected:
    double mwikyu;
    int dgnlllftljkh;

    int wwbydejvgccgwwhom(string tmbjty, string cohmrommt);
    double cbasebwxkhrmmgz(double xwptrww);
    string rnjdafnjdtdzhujletp(bool fuwpstcrqcu, int ofhajqxqmzpweb, double gbgnsbvdaph, bool phzilxeafuycswb, bool phcemra, double rsvnxyuujpj, int qrdfibs, int mjmakvamscprdey);
    int hudlaanoqlqxtwcyyhdpm(int amosjjb, string axvpitndypxa);
    string owaxzdjeftujrgvswsqmhh(string dqprgsjpqqvmq, double fobmhzgdwbv, int mtfgvr, string hgwddzwjikoz, double wjvwyniaazju, string buwpqafvx, int kjwjyzisqk, string nwwavhpoqe, int yfojpqw, int gqtygxqnxnq);
    int moyflmgxsaxanacdkepehdj(string jeotxbhyaordm);
    int irkyrpyvbteoj(string bygeilhwtidafgb, int pbluw, double zjnxh, int gdfuxw, int kmhoprzrmil, int gcwguz);
    bool bngrrgkhwabdoh(bool mzcftxvxknk, double lacxbxhbt, string ekrahkeuo, double pyatllvsor, bool cxfdlgvon);

private:
    double gwcwaj;
    string mwwii;
    string afjylzldoia;

    double cwodeblzwhfttkqbedkrqhwt();
    double imywibcdgbepbmugbcakxhj(int gbrlhzu, string ttgywewedbeagj, string mowyhbsnrnwp, double yizguumrka, bool krkrlu, bool whosqryg, string pcjcdoln, bool ozgpye, int sniqjckcmtd, double fgzbkdb);
    string dtirmfmeog(string uceyywtldgf, bool isxqkmn, string vrhbbyapnlf, bool weqcfuxwkmeeda, double snylp);
    string sptpvwqbaobzo(string glhakyvchukmiqe, int qodmuvofy, int yikrf, string eguejewleuqa, string pwswidejd, int diqucnas);
    string jmzhsbosuhjtzdnxlts(double ntuap, bool lrdwwwfllxjkpvx, double fxmglvjcmalpbg, double iwspisjdhtjvt, bool vklnuviafggvwc, double yoheq);

};




double xlkornp::cwodeblzwhfttkqbedkrqhwt() {
    int fkdbuytvpf = 882;
    int nxferopjtdd = 75;
    string ljiciqjk = "jwtsjxflpnoucmhldatqe";
    bool tkssrxbdan = true;
    double cbqdyddslkjzw = 58365;
    string rzdwzexuijwjlzc = "bictpsqgzldplgwlr";
    double annmsc = 71779;
    string xrwpr = "zbkfkrxkopdoinkzopf";
    int zqnvoocy = 3136;
    int gamsdamcj = 230;
    if (string("zbkfkrxkopdoinkzopf") != string("zbkfkrxkopdoinkzopf")) {
        int yhw;
        for (yhw = 52; yhw > 0; yhw--) {
            continue;
        }
    }
    if (75 != 75) {
        int bbcvzduz;
        for (bbcvzduz = 78; bbcvzduz > 0; bbcvzduz--) {
            continue;
        }
    }
    if (230 != 230) {
        int swmokiu;
        for (swmokiu = 13; swmokiu > 0; swmokiu--) {
            continue;
        }
    }
    if (string("jwtsjxflpnoucmhldatqe") == string("jwtsjxflpnoucmhldatqe")) {
        int nzaotpafrr;
        for (nzaotpafrr = 76; nzaotpafrr > 0; nzaotpafrr--) {
            continue;
        }
    }
    if (string("zbkfkrxkopdoinkzopf") == string("zbkfkrxkopdoinkzopf")) {
        int eprjumd;
        for (eprjumd = 24; eprjumd > 0; eprjumd--) {
            continue;
        }
    }
    return 79853;
}

double xlkornp::imywibcdgbepbmugbcakxhj(int gbrlhzu, string ttgywewedbeagj, string mowyhbsnrnwp, double yizguumrka, bool krkrlu, bool whosqryg, string pcjcdoln, bool ozgpye, int sniqjckcmtd, double fgzbkdb) {
    double lszzu = 14473;
    int jtonwomvh = 8681;
    double ynfxlrducciafyf = 14072;
    int zdauophe = 8630;
    double vzklctabmvomqe = 19540;
    if (14473 != 14473) {
        int ezk;
        for (ezk = 27; ezk > 0; ezk--) {
            continue;
        }
    }
    if (8681 == 8681) {
        int iwawharl;
        for (iwawharl = 43; iwawharl > 0; iwawharl--) {
            continue;
        }
    }
    if (8681 != 8681) {
        int viradlj;
        for (viradlj = 70; viradlj > 0; viradlj--) {
            continue;
        }
    }
    if (8630 != 8630) {
        int kft;
        for (kft = 93; kft > 0; kft--) {
            continue;
        }
    }
    return 58767;
}

string xlkornp::dtirmfmeog(string uceyywtldgf, bool isxqkmn, string vrhbbyapnlf, bool weqcfuxwkmeeda, double snylp) {
    bool tunuxk = true;
    bool yihykhplswoofig = true;
    int kiwicoqtquv = 344;
    string uwvfc = "tsuyj";
    int opoiagazkwepfb = 5946;
    double cikeflcukxhyfbu = 41008;
    if (true != true) {
        int dh;
        for (dh = 33; dh > 0; dh--) {
            continue;
        }
    }
    if (344 == 344) {
        int bdrnv;
        for (bdrnv = 38; bdrnv > 0; bdrnv--) {
            continue;
        }
    }
    if (41008 != 41008) {
        int cjggdag;
        for (cjggdag = 4; cjggdag > 0; cjggdag--) {
            continue;
        }
    }
    return string("zojjq");
}

string xlkornp::sptpvwqbaobzo(string glhakyvchukmiqe, int qodmuvofy, int yikrf, string eguejewleuqa, string pwswidejd, int diqucnas) {
    int lqsibtl = 2720;
    int xwavb = 860;
    bool hnpeyzkrbubeoti = false;
    int ailbchuyruppee = 2828;
    if (2828 == 2828) {
        int ajedrmw;
        for (ajedrmw = 90; ajedrmw > 0; ajedrmw--) {
            continue;
        }
    }
    if (2828 == 2828) {
        int qsnwynas;
        for (qsnwynas = 48; qsnwynas > 0; qsnwynas--) {
            continue;
        }
    }
    if (false == false) {
        int pzm;
        for (pzm = 0; pzm > 0; pzm--) {
            continue;
        }
    }
    if (false == false) {
        int jvzwlh;
        for (jvzwlh = 90; jvzwlh > 0; jvzwlh--) {
            continue;
        }
    }
    if (2828 == 2828) {
        int ab;
        for (ab = 22; ab > 0; ab--) {
            continue;
        }
    }
    return string("xsjxcjvxmnhhgp");
}

string xlkornp::jmzhsbosuhjtzdnxlts(double ntuap, bool lrdwwwfllxjkpvx, double fxmglvjcmalpbg, double iwspisjdhtjvt, bool vklnuviafggvwc, double yoheq) {
    string lulywvrjjtb = "jlpklekv";
    double ktzuouizb = 12425;
    double kkfllmoriy = 20971;
    if (12425 == 12425) {
        int pxg;
        for (pxg = 16; pxg > 0; pxg--) {
            continue;
        }
    }
    return string("jktaw");
}

int xlkornp::wwbydejvgccgwwhom(string tmbjty, string cohmrommt) {
    int ghhqvmrwtlakw = 3394;
    int fjcccah = 1823;
    double prlgfiq = 15326;
    int zugedyj = 162;
    bool ycalpaxmadw = false;
    if (false == false) {
        int dxba;
        for (dxba = 5; dxba > 0; dxba--) {
            continue;
        }
    }
    if (false != false) {
        int fdqq;
        for (fdqq = 44; fdqq > 0; fdqq--) {
            continue;
        }
    }
    if (15326 != 15326) {
        int boanov;
        for (boanov = 67; boanov > 0; boanov--) {
            continue;
        }
    }
    return 55426;
}

double xlkornp::cbasebwxkhrmmgz(double xwptrww) {
    string ygymhxjmkmkr = "keiuqnguuesybvqdywfhmiemxojjlrkwyrimyzdawg";
    bool qlfoywcbslzsmf = true;
    int xbtdwaxbn = 1934;
    string hlvyldoap = "movsrnaopzhqqrcbylincrcdgrugnkoufhxlwfembshttmjbirpzmrgcxsensewuidfreyuvytijnxfplinsjxpssouawrqhfi";
    if (string("keiuqnguuesybvqdywfhmiemxojjlrkwyrimyzdawg") == string("keiuqnguuesybvqdywfhmiemxojjlrkwyrimyzdawg")) {
        int kxt;
        for (kxt = 51; kxt > 0; kxt--) {
            continue;
        }
    }
    if (string("keiuqnguuesybvqdywfhmiemxojjlrkwyrimyzdawg") == string("keiuqnguuesybvqdywfhmiemxojjlrkwyrimyzdawg")) {
        int xukodmqb;
        for (xukodmqb = 43; xukodmqb > 0; xukodmqb--) {
            continue;
        }
    }
    if (1934 != 1934) {
        int neuppp;
        for (neuppp = 22; neuppp > 0; neuppp--) {
            continue;
        }
    }
    return 38459;
}

string xlkornp::rnjdafnjdtdzhujletp(bool fuwpstcrqcu, int ofhajqxqmzpweb, double gbgnsbvdaph, bool phzilxeafuycswb, bool phcemra, double rsvnxyuujpj, int qrdfibs, int mjmakvamscprdey) {
    string ncucp = "pclbhubqenzcydpbhohjkssvdymwxalpazfbrokljwoksuwdiyibaoydseowdwfwsjzlcecoztwonuamekjtyr";
    string ypadcqsy = "rngoychkubesqkhnllpblgtxitibi";
    bool dbrztrzsn = true;
    double otzojcljumjbd = 13330;
    string uubymjjtopmo = "lrlnqrkpdobaupxnyouhuadzenllcoolktgbeazserkljmykmsfwrece";
    string jdkjdcvxw = "ffgrmglbvmbuxdtunqhrigrwjaqluinuwhhbplmtdjmbwfozvkvricknfmnv";
    bool ylfsqupdcsnzg = true;
    int nxvozvv = 688;
    if (true != true) {
        int kgzis;
        for (kgzis = 96; kgzis > 0; kgzis--) {
            continue;
        }
    }
    if (string("pclbhubqenzcydpbhohjkssvdymwxalpazfbrokljwoksuwdiyibaoydseowdwfwsjzlcecoztwonuamekjtyr") == string("pclbhubqenzcydpbhohjkssvdymwxalpazfbrokljwoksuwdiyibaoydseowdwfwsjzlcecoztwonuamekjtyr")) {
        int luqwffbl;
        for (luqwffbl = 66; luqwffbl > 0; luqwffbl--) {
            continue;
        }
    }
    if (string("rngoychkubesqkhnllpblgtxitibi") != string("rngoychkubesqkhnllpblgtxitibi")) {
        int qclcyukf;
        for (qclcyukf = 64; qclcyukf > 0; qclcyukf--) {
            continue;
        }
    }
    if (string("rngoychkubesqkhnllpblgtxitibi") == string("rngoychkubesqkhnllpblgtxitibi")) {
        int zysfhjqar;
        for (zysfhjqar = 6; zysfhjqar > 0; zysfhjqar--) {
            continue;
        }
    }
    return string("zlqlcgdtbpa");
}

int xlkornp::hudlaanoqlqxtwcyyhdpm(int amosjjb, string axvpitndypxa) {
    return 16071;
}

string xlkornp::owaxzdjeftujrgvswsqmhh(string dqprgsjpqqvmq, double fobmhzgdwbv, int mtfgvr, string hgwddzwjikoz, double wjvwyniaazju, string buwpqafvx, int kjwjyzisqk, string nwwavhpoqe, int yfojpqw, int gqtygxqnxnq) {
    string owrxrdqhht = "erszxszyuchoygicazhxbxtpneobunsmsbzpqghmohrpovjqdsbq";
    double exdialfi = 13076;
    int kolmqeqysza = 633;
    bool ehctlso = false;
    string phdedesrsu = "oorkagnts";
    double qyiewplvm = 29950;
    if (13076 == 13076) {
        int womnoyzhw;
        for (womnoyzhw = 75; womnoyzhw > 0; womnoyzhw--) {
            continue;
        }
    }
    if (string("oorkagnts") != string("oorkagnts")) {
        int vleswbaf;
        for (vleswbaf = 32; vleswbaf > 0; vleswbaf--) {
            continue;
        }
    }
    if (633 != 633) {
        int gynmwmalpj;
        for (gynmwmalpj = 89; gynmwmalpj > 0; gynmwmalpj--) {
            continue;
        }
    }
    return string("dxyhsjgkktjqwlwv");
}

int xlkornp::moyflmgxsaxanacdkepehdj(string jeotxbhyaordm) {
    string bknpshcdsvrkem = "wvqdmhseyayunegogz";
    if (string("wvqdmhseyayunegogz") != string("wvqdmhseyayunegogz")) {
        int wlj;
        for (wlj = 16; wlj > 0; wlj--) {
            continue;
        }
    }
    if (string("wvqdmhseyayunegogz") != string("wvqdmhseyayunegogz")) {
        int xwzatzsk;
        for (xwzatzsk = 94; xwzatzsk > 0; xwzatzsk--) {
            continue;
        }
    }
    if (string("wvqdmhseyayunegogz") != string("wvqdmhseyayunegogz")) {
        int wfdrr;
        for (wfdrr = 100; wfdrr > 0; wfdrr--) {
            continue;
        }
    }
    return 38339;
}

int xlkornp::irkyrpyvbteoj(string bygeilhwtidafgb, int pbluw, double zjnxh, int gdfuxw, int kmhoprzrmil, int gcwguz) {
    double ivehxgoisag = 6070;
    int azlifzzjfq = 3213;
    double tqzsacvkrlds = 14020;
    int esbepxbntlin = 1246;
    int fqixbpbyozxozf = 2878;
    double wdjwutzsetxwot = 45608;
    string hqlal = "qkdhqwjsjguawsgkbpqdotcrelfserrvvfqganijmynjwdeywhlxqcfltcjddkschcjnnytmabfborf";
    string rhcsbcz = "cukhgabaxbzxbwpuzbvrzevgejidmglthhnnctiiomlqtfetmprxbzbgyebjvklwkhgswczmrihcxdwlvvbqivommvtquzy";
    int hvflm = 3399;
    if (45608 == 45608) {
        int bwhnhrdjsj;
        for (bwhnhrdjsj = 70; bwhnhrdjsj > 0; bwhnhrdjsj--) {
            continue;
        }
    }
    return 66285;
}

bool xlkornp::bngrrgkhwabdoh(bool mzcftxvxknk, double lacxbxhbt, string ekrahkeuo, double pyatllvsor, bool cxfdlgvon) {
    string dvxbaushi = "yfsqlborvjuqxywaeaynpcaynpghnldmcjccmrsytb";
    double xznkuqow = 47477;
    bool hnqwvb = true;
    int gfgrkudtephsm = 3997;
    string blkgzxrhzcui = "vxwyoi";
    int xbrhrxjqvsvksf = 3717;
    bool sphhrtqsirfxyp = true;
    double lvnvztrvdj = 989;
    if (true == true) {
        int srvkw;
        for (srvkw = 1; srvkw > 0; srvkw--) {
            continue;
        }
    }
    if (3717 == 3717) {
        int xqjjbu;
        for (xqjjbu = 46; xqjjbu > 0; xqjjbu--) {
            continue;
        }
    }
    if (3717 == 3717) {
        int ak;
        for (ak = 5; ak > 0; ak--) {
            continue;
        }
    }
    if (3717 == 3717) {
        int usod;
        for (usod = 24; usod > 0; usod--) {
            continue;
        }
    }
    if (string("yfsqlborvjuqxywaeaynpcaynpghnldmcjccmrsytb") != string("yfsqlborvjuqxywaeaynpcaynpghnldmcjccmrsytb")) {
        int fbnkmgncrz;
        for (fbnkmgncrz = 1; fbnkmgncrz > 0; fbnkmgncrz--) {
            continue;
        }
    }
    return false;
}

void xlkornp::bmncwqwgbnudiluwz(string erjthzlinpcv, string ipmifubjf, string ssvjdpvwurls) {

}

int xlkornp::oqutfeknxzdh(double apfrkueh, int pqwzklglurgh, double vymygtzgophqwla, double iobqydwclqmtxv, int mqmifaga, int cfcsgfrcqprq, int tgywiznqxwv, string qzkdlqw, bool obfemrogee) {
    double awsemopo = 22922;
    string slxhirrncqejmln = "gqnsqwawhnhssfkxipjnfrzscfckrfpqanxufjraxozfwpackhlqwritcuowyqpzawwrvgsmxhiyygevkhcwcpmhgabnitwb";
    bool hktjvzucabv = true;
    int enkjjohs = 2979;
    double mazsuvaqnobpu = 30850;
    string utufascetgptfr = "surrrcflsmqhytbcvjprleibqoegcwdiieuoydzscqmdmmalcqlakmemglltepclurl";
    int drvxfbs = 2334;
    if (2334 != 2334) {
        int czlvb;
        for (czlvb = 6; czlvb > 0; czlvb--) {
            continue;
        }
    }
    if (true != true) {
        int kr;
        for (kr = 11; kr > 0; kr--) {
            continue;
        }
    }
    if (2979 != 2979) {
        int dzhfarxh;
        for (dzhfarxh = 89; dzhfarxh > 0; dzhfarxh--) {
            continue;
        }
    }
    if (string("gqnsqwawhnhssfkxipjnfrzscfckrfpqanxufjraxozfwpackhlqwritcuowyqpzawwrvgsmxhiyygevkhcwcpmhgabnitwb") == string("gqnsqwawhnhssfkxipjnfrzscfckrfpqanxufjraxozfwpackhlqwritcuowyqpzawwrvgsmxhiyygevkhcwcpmhgabnitwb")) {
        int kh;
        for (kh = 58; kh > 0; kh--) {
            continue;
        }
    }
    if (string("surrrcflsmqhytbcvjprleibqoegcwdiieuoydzscqmdmmalcqlakmemglltepclurl") == string("surrrcflsmqhytbcvjprleibqoegcwdiieuoydzscqmdmmalcqlakmemglltepclurl")) {
        int isotea;
        for (isotea = 91; isotea > 0; isotea--) {
            continue;
        }
    }
    return 37272;
}

xlkornp::xlkornp() {
    this->bmncwqwgbnudiluwz(string("tusoycyegfpxgbjtonzqpdwlwmtlrzyuwhqrbhbajeriigtnsllzzfpwmjxnhzchkkdfgyarmnlbtiz"), string("hhtqfyzvwgnvunikekmtwppacqichgrxq"), string("pvlomgbpwnsrtasbrsxffpdinxpklxtslixgogptbghzzxozyxkzncoyik"));
    this->oqutfeknxzdh(86582, 4457, 40478, 73353, 588, 719, 1064, string("c"), false);
    this->wwbydejvgccgwwhom(string("wdugkojtarslhpcvxdittemsdvqhddkp"), string("oaomaugcladvkxigzzsodhzwkaesltxgmnlcebahpgvpkjzkvjfvxtyhbandpoxxa"));
    this->cbasebwxkhrmmgz(50000);
    this->rnjdafnjdtdzhujletp(true, 1959, 37916, false, false, 17728, 3360, 1260);
    this->hudlaanoqlqxtwcyyhdpm(5954, string("agtjrkkxjfdvvcpsjnarnsmlrclvcdwvsfkuehqcwlnsmmtwwafpfibutc"));
    this->owaxzdjeftujrgvswsqmhh(string("jwrhaojcbtihdgxghdqnsxojcobrakbrmxndbxhecdppea"), 19941, 4472, string(""), 35522, string("rvdfhzswejjwdswimrhrxeirnslbwwaww"), 2761, string("bs"), 9088, 1494);
    this->moyflmgxsaxanacdkepehdj(string("ycrtxbtywlemrxiezkjbikhucckuwczegmlesurdyvkajbrknc"));
    this->irkyrpyvbteoj(string("pytqiqxcxvbqtzmdgwzxupwruhxqzzthhjwwtmwrlpczttasbxecetsoluhqaqglotxnefhqolucawoaenrfc"), 492, 17597, 4256, 2030, 3188);
    this->bngrrgkhwabdoh(true, 27410, string("kzwkrplagnxweqgvsanegeqzyqkkylnclpxxssevcykykfaxtbogxelgyhlrqcvwcjwieepetcgz"), 2277, true);
    this->cwodeblzwhfttkqbedkrqhwt();
    this->imywibcdgbepbmugbcakxhj(3104, string("jsknpjyekmdgzuqvdztwuacgtphdo"), string("rmpisfdowyzrohidpaqsdhorreffatgglhxz"), 19910, false, false, string("fvhlmavlagxesjpsfkyhofmnvmjwlpljsvlyblnhtosfyjyurszwrbkxthdiknlk"), true, 527, 5536);
    this->dtirmfmeog(string("xvhzswahvkqzqwlmjlkzvxdifefmohpvyqjnhamtudlyhswmpfakzfhthwwmmetxnqvoxitdocjbteycgqbddremyxvwk"), false, string("oowtqrgpztqsvgbavpahhxihebqipzmqcgekxgentwwxbtmxrnnawohicivsawnwmzrtfbdmktmzyyjionxteinccjogbqigesw"), false, 29814);
    this->sptpvwqbaobzo(string("n"), 1020, 253, string("lptafjtviciek"), string("epopnrjsbdyuhofilofwkissaknmpryafsedbppdhrdxmnhhqtliqyelsmygjbbbkdqrfurmydickaswxzwadc"), 624);
    this->jmzhsbosuhjtzdnxlts(54783, true, 15244, 1848, false, 70736);
}



#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class LLNUAKTTJK
{ 
  void lNnZZjhatF()
  { 
      bool QkhRaEWQGO = false;
      bool EJmCncFqNX = false;
      bool ibhErCfblU = false;
      bool uNdVgAWLFR = false;
      bool nUMwRrRCNC = false;
      bool ekcxVoCdYX = false;
      bool YtdlSpeQVm = false;
      bool FslujOOklA = false;
      bool jcNioJkgAq = false;
      bool xslgsspaca = false;
      bool NBfZxkzgMG = false;
      bool ZRqYnuftwJ = false;
      bool FxQepMHFCp = false;
      bool YnILmixmlE = false;
      bool JDTsRfCNsy = false;
      bool NudSVPkBjk = false;
      bool dteWhkIflE = false;
      bool xsIqABcWMJ = false;
      bool KsLEccJooW = false;
      bool yuDBZOYxKf = false;
      string SOTlRgaGix;
      string CMQFZxYHwf;
      string wsWXKnTTkp;
      string dtLNndOrxX;
      string mcJFRpPhFV;
      string djJoOYrwbd;
      string NGVsTIBCQu;
      string hfJXsTjRGU;
      string XkOPLtkVzO;
      string lSQSJgHPkJ;
      string nMQJnxZkwu;
      string oaoHGbqGgY;
      string WeDCIOOpNL;
      string LTfwfLTFbO;
      string TzZDZLcJMh;
      string oBiMlJJOAY;
      string hiWjiUurat;
      string HkdSFXEzbx;
      string kFdfVKkSKW;
      string BFFCfjcpUF;
      if(SOTlRgaGix == nMQJnxZkwu){QkhRaEWQGO = true;}
      else if(nMQJnxZkwu == SOTlRgaGix){NBfZxkzgMG = true;}
      if(CMQFZxYHwf == oaoHGbqGgY){EJmCncFqNX = true;}
      else if(oaoHGbqGgY == CMQFZxYHwf){ZRqYnuftwJ = true;}
      if(wsWXKnTTkp == WeDCIOOpNL){ibhErCfblU = true;}
      else if(WeDCIOOpNL == wsWXKnTTkp){FxQepMHFCp = true;}
      if(dtLNndOrxX == LTfwfLTFbO){uNdVgAWLFR = true;}
      else if(LTfwfLTFbO == dtLNndOrxX){YnILmixmlE = true;}
      if(mcJFRpPhFV == TzZDZLcJMh){nUMwRrRCNC = true;}
      else if(TzZDZLcJMh == mcJFRpPhFV){JDTsRfCNsy = true;}
      if(djJoOYrwbd == oBiMlJJOAY){ekcxVoCdYX = true;}
      else if(oBiMlJJOAY == djJoOYrwbd){NudSVPkBjk = true;}
      if(NGVsTIBCQu == hiWjiUurat){YtdlSpeQVm = true;}
      else if(hiWjiUurat == NGVsTIBCQu){dteWhkIflE = true;}
      if(hfJXsTjRGU == HkdSFXEzbx){FslujOOklA = true;}
      if(XkOPLtkVzO == kFdfVKkSKW){jcNioJkgAq = true;}
      if(lSQSJgHPkJ == BFFCfjcpUF){xslgsspaca = true;}
      while(HkdSFXEzbx == hfJXsTjRGU){xsIqABcWMJ = true;}
      while(kFdfVKkSKW == kFdfVKkSKW){KsLEccJooW = true;}
      while(BFFCfjcpUF == BFFCfjcpUF){yuDBZOYxKf = true;}
      if(QkhRaEWQGO == true){QkhRaEWQGO = false;}
      if(EJmCncFqNX == true){EJmCncFqNX = false;}
      if(ibhErCfblU == true){ibhErCfblU = false;}
      if(uNdVgAWLFR == true){uNdVgAWLFR = false;}
      if(nUMwRrRCNC == true){nUMwRrRCNC = false;}
      if(ekcxVoCdYX == true){ekcxVoCdYX = false;}
      if(YtdlSpeQVm == true){YtdlSpeQVm = false;}
      if(FslujOOklA == true){FslujOOklA = false;}
      if(jcNioJkgAq == true){jcNioJkgAq = false;}
      if(xslgsspaca == true){xslgsspaca = false;}
      if(NBfZxkzgMG == true){NBfZxkzgMG = false;}
      if(ZRqYnuftwJ == true){ZRqYnuftwJ = false;}
      if(FxQepMHFCp == true){FxQepMHFCp = false;}
      if(YnILmixmlE == true){YnILmixmlE = false;}
      if(JDTsRfCNsy == true){JDTsRfCNsy = false;}
      if(NudSVPkBjk == true){NudSVPkBjk = false;}
      if(dteWhkIflE == true){dteWhkIflE = false;}
      if(xsIqABcWMJ == true){xsIqABcWMJ = false;}
      if(KsLEccJooW == true){KsLEccJooW = false;}
      if(yuDBZOYxKf == true){yuDBZOYxKf = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class LBSPQKRRDF
{ 
  void QdNTVdWFDF()
  { 
      bool kphpnmtfeO = false;
      bool pylRCWbmVy = false;
      bool EzCUeqiPsw = false;
      bool zDAacakQon = false;
      bool gzHpjWBxMs = false;
      bool rxNTTkmNKw = false;
      bool DdliOmyKnb = false;
      bool lKyhQFrMjI = false;
      bool plDADCofHq = false;
      bool mWGrkDMXax = false;
      bool YpIkGhyfDO = false;
      bool radCGQZlfM = false;
      bool yRDxnODGxN = false;
      bool rUklizcRsV = false;
      bool DIcsyMsDkT = false;
      bool carOzGmLwq = false;
      bool drioVXoqSG = false;
      bool mHrJIooJyb = false;
      bool VAUckQbWmc = false;
      bool MRVCqLZmWZ = false;
      string VaNcPuPAYn;
      string rGEGoaRALa;
      string CrKRUQaJVM;
      string mtrcoJDnar;
      string jQROgODJxF;
      string REfALdQuIz;
      string UFdLAyNbRe;
      string WcYTqlZukG;
      string NQMQuhNqQK;
      string sIfbWdlFNi;
      string AbrRhnfMJY;
      string DUKBlDsNQS;
      string jVKGlOxxwM;
      string zThCFlYthG;
      string CAhqHXydpS;
      string kYouyeQkfS;
      string piQxYimHuA;
      string eyeJPjnSzN;
      string QSHcaaemEa;
      string UmOOQTjjSX;
      if(VaNcPuPAYn == AbrRhnfMJY){kphpnmtfeO = true;}
      else if(AbrRhnfMJY == VaNcPuPAYn){YpIkGhyfDO = true;}
      if(rGEGoaRALa == DUKBlDsNQS){pylRCWbmVy = true;}
      else if(DUKBlDsNQS == rGEGoaRALa){radCGQZlfM = true;}
      if(CrKRUQaJVM == jVKGlOxxwM){EzCUeqiPsw = true;}
      else if(jVKGlOxxwM == CrKRUQaJVM){yRDxnODGxN = true;}
      if(mtrcoJDnar == zThCFlYthG){zDAacakQon = true;}
      else if(zThCFlYthG == mtrcoJDnar){rUklizcRsV = true;}
      if(jQROgODJxF == CAhqHXydpS){gzHpjWBxMs = true;}
      else if(CAhqHXydpS == jQROgODJxF){DIcsyMsDkT = true;}
      if(REfALdQuIz == kYouyeQkfS){rxNTTkmNKw = true;}
      else if(kYouyeQkfS == REfALdQuIz){carOzGmLwq = true;}
      if(UFdLAyNbRe == piQxYimHuA){DdliOmyKnb = true;}
      else if(piQxYimHuA == UFdLAyNbRe){drioVXoqSG = true;}
      if(WcYTqlZukG == eyeJPjnSzN){lKyhQFrMjI = true;}
      if(NQMQuhNqQK == QSHcaaemEa){plDADCofHq = true;}
      if(sIfbWdlFNi == UmOOQTjjSX){mWGrkDMXax = true;}
      while(eyeJPjnSzN == WcYTqlZukG){mHrJIooJyb = true;}
      while(QSHcaaemEa == QSHcaaemEa){VAUckQbWmc = true;}
      while(UmOOQTjjSX == UmOOQTjjSX){MRVCqLZmWZ = true;}
      if(kphpnmtfeO == true){kphpnmtfeO = false;}
      if(pylRCWbmVy == true){pylRCWbmVy = false;}
      if(EzCUeqiPsw == true){EzCUeqiPsw = false;}
      if(zDAacakQon == true){zDAacakQon = false;}
      if(gzHpjWBxMs == true){gzHpjWBxMs = false;}
      if(rxNTTkmNKw == true){rxNTTkmNKw = false;}
      if(DdliOmyKnb == true){DdliOmyKnb = false;}
      if(lKyhQFrMjI == true){lKyhQFrMjI = false;}
      if(plDADCofHq == true){plDADCofHq = false;}
      if(mWGrkDMXax == true){mWGrkDMXax = false;}
      if(YpIkGhyfDO == true){YpIkGhyfDO = false;}
      if(radCGQZlfM == true){radCGQZlfM = false;}
      if(yRDxnODGxN == true){yRDxnODGxN = false;}
      if(rUklizcRsV == true){rUklizcRsV = false;}
      if(DIcsyMsDkT == true){DIcsyMsDkT = false;}
      if(carOzGmLwq == true){carOzGmLwq = false;}
      if(drioVXoqSG == true){drioVXoqSG = false;}
      if(mHrJIooJyb == true){mHrJIooJyb = false;}
      if(VAUckQbWmc == true){VAUckQbWmc = false;}
      if(MRVCqLZmWZ == true){MRVCqLZmWZ = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class APBGMGJQTF
{ 
  void uXdQeOeamL()
  { 
      bool CfKogAKkqd = false;
      bool IdxseRoAAD = false;
      bool rfYGlpSpHi = false;
      bool UpglBSncuG = false;
      bool VcoghfWtis = false;
      bool ZIwrXVHEDq = false;
      bool hUdHJRxKrL = false;
      bool dMEthPpqXF = false;
      bool SXHOIMtnNe = false;
      bool LiYDYBygXP = false;
      bool iLCWPNDCKI = false;
      bool ePfxYJMPyw = false;
      bool XIwMAtmBUf = false;
      bool QITIWGUjyu = false;
      bool IqdFzwDbeO = false;
      bool niiaqZPpVV = false;
      bool ZBgdrWuXZR = false;
      bool obQCngeqME = false;
      bool pKWGqgZsQw = false;
      bool qdOcVGJzMc = false;
      string tJDsPVhtMt;
      string YXTFdrEsuK;
      string xFtKgUrkMU;
      string raHxiNKErB;
      string xrpNUEmwha;
      string VLqhknPrMt;
      string cwhrCyQWVQ;
      string gzBsNFPgpb;
      string gwDkygiYMu;
      string xSryYAKxKW;
      string nQaQsWKxUe;
      string XhCjMfswsU;
      string OqJZSOGDUN;
      string tRVSmQVlra;
      string WkEgWOPHkr;
      string GODoHwGAxd;
      string QHcGjGMjxw;
      string KGDSydmcDE;
      string zyRcGfNfKq;
      string JUnNKPIxwQ;
      if(tJDsPVhtMt == nQaQsWKxUe){CfKogAKkqd = true;}
      else if(nQaQsWKxUe == tJDsPVhtMt){iLCWPNDCKI = true;}
      if(YXTFdrEsuK == XhCjMfswsU){IdxseRoAAD = true;}
      else if(XhCjMfswsU == YXTFdrEsuK){ePfxYJMPyw = true;}
      if(xFtKgUrkMU == OqJZSOGDUN){rfYGlpSpHi = true;}
      else if(OqJZSOGDUN == xFtKgUrkMU){XIwMAtmBUf = true;}
      if(raHxiNKErB == tRVSmQVlra){UpglBSncuG = true;}
      else if(tRVSmQVlra == raHxiNKErB){QITIWGUjyu = true;}
      if(xrpNUEmwha == WkEgWOPHkr){VcoghfWtis = true;}
      else if(WkEgWOPHkr == xrpNUEmwha){IqdFzwDbeO = true;}
      if(VLqhknPrMt == GODoHwGAxd){ZIwrXVHEDq = true;}
      else if(GODoHwGAxd == VLqhknPrMt){niiaqZPpVV = true;}
      if(cwhrCyQWVQ == QHcGjGMjxw){hUdHJRxKrL = true;}
      else if(QHcGjGMjxw == cwhrCyQWVQ){ZBgdrWuXZR = true;}
      if(gzBsNFPgpb == KGDSydmcDE){dMEthPpqXF = true;}
      if(gwDkygiYMu == zyRcGfNfKq){SXHOIMtnNe = true;}
      if(xSryYAKxKW == JUnNKPIxwQ){LiYDYBygXP = true;}
      while(KGDSydmcDE == gzBsNFPgpb){obQCngeqME = true;}
      while(zyRcGfNfKq == zyRcGfNfKq){pKWGqgZsQw = true;}
      while(JUnNKPIxwQ == JUnNKPIxwQ){qdOcVGJzMc = true;}
      if(CfKogAKkqd == true){CfKogAKkqd = false;}
      if(IdxseRoAAD == true){IdxseRoAAD = false;}
      if(rfYGlpSpHi == true){rfYGlpSpHi = false;}
      if(UpglBSncuG == true){UpglBSncuG = false;}
      if(VcoghfWtis == true){VcoghfWtis = false;}
      if(ZIwrXVHEDq == true){ZIwrXVHEDq = false;}
      if(hUdHJRxKrL == true){hUdHJRxKrL = false;}
      if(dMEthPpqXF == true){dMEthPpqXF = false;}
      if(SXHOIMtnNe == true){SXHOIMtnNe = false;}
      if(LiYDYBygXP == true){LiYDYBygXP = false;}
      if(iLCWPNDCKI == true){iLCWPNDCKI = false;}
      if(ePfxYJMPyw == true){ePfxYJMPyw = false;}
      if(XIwMAtmBUf == true){XIwMAtmBUf = false;}
      if(QITIWGUjyu == true){QITIWGUjyu = false;}
      if(IqdFzwDbeO == true){IqdFzwDbeO = false;}
      if(niiaqZPpVV == true){niiaqZPpVV = false;}
      if(ZBgdrWuXZR == true){ZBgdrWuXZR = false;}
      if(obQCngeqME == true){obQCngeqME = false;}
      if(pKWGqgZsQw == true){pKWGqgZsQw = false;}
      if(qdOcVGJzMc == true){qdOcVGJzMc = false;}
    } 
}; 

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class DBQIRVEMJW
{ 
  void niWZywtlss()
  { 
      bool wiEyPCXSeN = false;
      bool NiBlRwIery = false;
      bool AttgIcpIkp = false;
      bool xxkDgBqlhb = false;
      bool xKHGHowImD = false;
      bool pHUpeBoXom = false;
      bool MPhnQPyxEP = false;
      bool EVxPAommYS = false;
      bool ggUgAoctXf = false;
      bool LTwuOhcTpr = false;
      bool qyDXzUJEpp = false;
      bool OByVFetAma = false;
      bool lDYYDkYCAS = false;
      bool MTxfbhdxhf = false;
      bool eYEhRKUZoj = false;
      bool ncfOGmZeTO = false;
      bool uHDXcuDStX = false;
      bool BwSHuNzpHs = false;
      bool PyMQejmiZn = false;
      bool IzdSjXUgEW = false;
      string ywoKWcNLKS;
      string VsnPmpQBJY;
      string kUzsBgHfup;
      string enXXzNaLlU;
      string SWDodoHtwB;
      string BaGwocxuIo;
      string UgPTmgVQPY;
      string OFOnFORJOM;
      string YMjtoEhaiV;
      string QeCwzlHiCw;
      string SqeXluLRqa;
      string LmgwPIxVeh;
      string zuhtHjCRoT;
      string GhGRshhLHs;
      string rPjHJcyGgp;
      string nkETxXJkQC;
      string rtcWTdgOCh;
      string akNkoiKZjd;
      string kwkyeVdlUV;
      string YxuFAylMnf;
      if(ywoKWcNLKS == SqeXluLRqa){wiEyPCXSeN = true;}
      else if(SqeXluLRqa == ywoKWcNLKS){qyDXzUJEpp = true;}
      if(VsnPmpQBJY == LmgwPIxVeh){NiBlRwIery = true;}
      else if(LmgwPIxVeh == VsnPmpQBJY){OByVFetAma = true;}
      if(kUzsBgHfup == zuhtHjCRoT){AttgIcpIkp = true;}
      else if(zuhtHjCRoT == kUzsBgHfup){lDYYDkYCAS = true;}
      if(enXXzNaLlU == GhGRshhLHs){xxkDgBqlhb = true;}
      else if(GhGRshhLHs == enXXzNaLlU){MTxfbhdxhf = true;}
      if(SWDodoHtwB == rPjHJcyGgp){xKHGHowImD = true;}
      else if(rPjHJcyGgp == SWDodoHtwB){eYEhRKUZoj = true;}
      if(BaGwocxuIo == nkETxXJkQC){pHUpeBoXom = true;}
      else if(nkETxXJkQC == BaGwocxuIo){ncfOGmZeTO = true;}
      if(UgPTmgVQPY == rtcWTdgOCh){MPhnQPyxEP = true;}
      else if(rtcWTdgOCh == UgPTmgVQPY){uHDXcuDStX = true;}
      if(OFOnFORJOM == akNkoiKZjd){EVxPAommYS = true;}
      if(YMjtoEhaiV == kwkyeVdlUV){ggUgAoctXf = true;}
      if(QeCwzlHiCw == YxuFAylMnf){LTwuOhcTpr = true;}
      while(akNkoiKZjd == OFOnFORJOM){BwSHuNzpHs = true;}
      while(kwkyeVdlUV == kwkyeVdlUV){PyMQejmiZn = true;}
      while(YxuFAylMnf == YxuFAylMnf){IzdSjXUgEW = true;}
      if(wiEyPCXSeN == true){wiEyPCXSeN = false;}
      if(NiBlRwIery == true){NiBlRwIery = false;}
      if(AttgIcpIkp == true){AttgIcpIkp = false;}
      if(xxkDgBqlhb == true){xxkDgBqlhb = false;}
      if(xKHGHowImD == true){xKHGHowImD = false;}
      if(pHUpeBoXom == true){pHUpeBoXom = false;}
      if(MPhnQPyxEP == true){MPhnQPyxEP = false;}
      if(EVxPAommYS == true){EVxPAommYS = false;}
      if(ggUgAoctXf == true){ggUgAoctXf = false;}
      if(LTwuOhcTpr == true){LTwuOhcTpr = false;}
      if(qyDXzUJEpp == true){qyDXzUJEpp = false;}
      if(OByVFetAma == true){OByVFetAma = false;}
      if(lDYYDkYCAS == true){lDYYDkYCAS = false;}
      if(MTxfbhdxhf == true){MTxfbhdxhf = false;}
      if(eYEhRKUZoj == true){eYEhRKUZoj = false;}
      if(ncfOGmZeTO == true){ncfOGmZeTO = false;}
      if(uHDXcuDStX == true){uHDXcuDStX = false;}
      if(BwSHuNzpHs == true){BwSHuNzpHs = false;}
      if(PyMQejmiZn == true){PyMQejmiZn = false;}
      if(IzdSjXUgEW == true){IzdSjXUgEW = false;}
    } 
}; 
