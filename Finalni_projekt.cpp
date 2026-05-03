#include <iostream>
#include <string>

using namespace std;

class Hrac {
public:
    string jmeno;
    string trida;

    int zivoty;
    int maxZivoty;
    int mana;
    int zlato;
    int uroven;
    int zkusenosti;
    int potrebaZkusenosti;
    int utok;
    int cennosti;

    Hrac() {
        zivoty = 0;
        maxZivoty = 0;
        mana = 0;
        zlato = 0;
        uroven = 1;
        zkusenosti = 0;
        potrebaZkusenosti = 5;
        utok = 0;
        cennosti = 0;
    }

    void zobrazStatistiky() {
        cout << "\n=== POSTAVA ===\n";
        cout << "Jmeno: " << jmeno << "\n";
        cout << "Trida: " << trida << "\n";
        cout << "Zivoty: " << zivoty << "/" << maxZivoty << "\n";
        cout << "Utok: " << utok << "\n";
        cout << "Mana: " << mana << "\n";
        cout << "Zlato: " << zlato << "\n";
        cout << "Uroven : " << uroven << "\n";
        cout << "\n=== POSTAVA ===\n";
    }
};
class Hra {
public:
    Hrac hrac;

    void vyberTridu() {
        int volba;
        bool potvrzeno = false;

        cout << "Zadej jmeno sve postavy: ";
        cin >> hrac.jmeno;

        while (!potvrzeno) {
            cout << "\nVyber si tridu: \n";
            cout << "1) Rybar (mix) \n";
            cout << "2) Lovec (dobry health staty) \n";
            cout << "3) nizsi slechtic (hodne zlata) \n";
            cout << "Volba: ";
            cin >> volba;

            if (volba == 1) {
                hrac.trida = "Rybar";
                hrac.zivoty = 5;
                hrac.maxZivoty = 5;
                hrac.utok = 3;
                hrac.zlato = 10;
            }
            else if (volba == 2) {
                hrac.trida = "Lovec";
                hrac.zivoty = 6;
                hrac.maxZivoty = 6;
                hrac.utok = 3;
                hrac.zlato = 5;
            }
            else if (volba == 3) {
                hrac.trida = "nizsi slechtic";
                hrac.zivoty = 4;
                hrac.maxZivoty = 4;
                hrac.utok = 5;
                hrac.zlato = 12;
            }
            else {
                cout << "Neplatna volba. \n";
                continue;
            }

            cout << "\nVybral sis tridu: " << hrac.trida << "\n";
            cout << "Chces ji potvrdit? (1 = ano, 0 = ne): ";
            cin >> potvrzeno;
        }
    }

    void start() {
        cout << "=== prologue ===\n"
                "tato hra byla zalozena na pribehu z knih george rr martina jmenem feast of skane\n"
                "je to jenom interpretace prastare povidky samotny pribeh udalosti nezname \n"
                "================================================================================\n";

        vyberTridu();
        hrac.zobrazStatistiky();

        cout <<"================"<<endl;

        cout <<"jmenujes se "<< hrac.jmeno; cout << " ""a pochazis z ostrova skane v kralostvi severu tvuj otec byl" " "<<hrac.trida; cout << " ""stejne jako ty\n"
                "avsak vaseho otce jste nedavno pochovali potom co se priotravil zkazenym masem a vzala ho horecka\n"
                "je ti jenom 12 let ale jako nejstrasi syn musis podstoupit vycvikem pred divokymi najezdniky z dalekeho severu a bajnych the others\n";

        cout <<"===================================================MAPA OSTROVA===================================================\n";
        cout <<
                                                    "                .....       \n"
                                                    "               ........  \n"
                                                    "                ..........\n"
                                                    "                .............\n"
                                                    "              ...............\n"
                                                    "          ...................\n"
                                                    "        ......................    \n"
                                                    "            ....................     \n"
                                                    "         ........................      \n"
                                                    "       ...........................       \n"
                                                    "       ..............................        \n"
                                                    "       ...............................          \n"
                                                    "       .............................            \n"
                                                    "         ........................             \n"
                                                    "                 ...................     \n"
                                                    "                      ................  \n"
                                                    "                           ...........             \n"
                                                    "                              .......             \n"
                                                    "                                ...            \n"
                                                    "                                 .            \n";


        cout <<"===================================================MAPA OSTROVA===================================================\n";
        cout << "rano te zbudi matka ze se pujdete pomodlit k weirwood stromu\n"
                " pac na delsi dobu odejdes na vycvik a vratis ze se az za dve zimy\n";



        cout << "=== kapitola 1 - Odchod ===\n"

             << "nez se vydas na cestu muzes si ukrast jednu vec:\n";
             bool potvrzeno = false;

             while (!potvrzeno) {

            cout <<" 1) uspory mladsiho bratra (+2 zlata) \n";
            cout <<" 2) sousedovu sekeru (+1 utok) \n";
            cout <<" 3) nic \n";
            cout <<"volba: "<<endl;
            int volba;
            cin >> volba;

                switch(volba){
                case 1:

                hrac.zlato += 2;
                cout<<"doufej ze te nikdo nevidel"<<endl;
                potvrzeno = true;
                break;

                case 2:

                hrac.utok += 1;
               cout<<"ten si drevo dlouho neposeka"<<endl;
                potvrzeno = true;
                break;

                case 3:

                hrac.mana +=1;
                cout<<"stari bohove se odmenili za tvoji cest(+1 mana)"<<endl;
                potvrzeno = true;
                break;
                default:

                cout << " \n";

                break;
                }

            }
hrac.zobrazStatistiky();

cout<<"s matkou opustite vesnici behem toho co zbytek domacnosti jeste spi\n"
       "po ceste vidis mnoho havranu ktere nad vami krouzi\n"
       "co udelas?\n";


            potvrzeno = false;
             while (!potvrzeno) {

            cout <<" 1) zacnes machat rukama jako divoch \n";
            cout <<" 2) hodis po nich kamen\n";
            cout <<" 3) nic \n";
            cout <<"volba: "<<endl;
            int volba;
            cin >> volba;

                switch(volba){
                case 1:

                hrac.cennosti += 1;
                cout<<"jeden z havranu se te lekl a vypadlo z neho pirko(+1 cennost)"<<endl;
                potvrzeno = true;
                break;

                case 2:

                hrac.zivoty -= 1;
               cout<<"matka ti dala vychovny pohlavek (-1 zivot)"<<endl;
                potvrzeno = true;
                break;

                case 3:

                hrac.uroven +=1;
                cout<<"potichu si sledoval jak se chovaji\n"
                "a pochopil si zaklady jeji pohybove reci\n";
                potvrzeno = true;
                break;
                default:

                cout << " \n";

                break;
                }

            }
hrac.zobrazStatistiky();

    }
};

int main() {
    Hra hra;
    hra.start();


    return 0;
}

