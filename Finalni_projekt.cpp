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
        cout << "Zkusenosti : " << zkusenosti << "\n";
        cout << "Cennosti : " << cennosti << "\n"
             << "\n=== POSTAVA ===\n";
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
            cout << "3) Nizsi slechtic (hodne zlata) \n";
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
                hrac.trida = "Nizsi slechtic";
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
                "Tato hra byla zalozena na pribehu z knih George R.R. Martina jmenem Feast of Skane.\n"
                "Je to jenom interpretace stare povidky, samotny prubeh udalosti je neznamy.\n"
                "================================================================================\n";

        vyberTridu();
        hrac.zobrazStatistiky();



        cout <<"Jmenujes se "<< hrac.jmeno; cout << " ""a pochazis z ostrova Skane v Kralostvi severu.\n";
         cout <<"Tvuj otec byl" " "<<hrac.trida; cout << ", ""stejne jako ty.\n"
                "Avsak vaseho otce jste nedavno pochovali pote, co se priotravil zkazenym masem a vzala ho horecka.\n"
                "Je ti jenom 12 let, ale jako nejstrasi syn musis podstoupit vycvikem pred divokymi najezdniky z dalekeho severu\n"
                "a bajnych the others.\n";

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
        cout << "Rano te zbudi tva matka, ze se pujdete pomodlit k weirwood stromu,\n"
                "protoze tvuj nastup na vojensky vycvik se blizi a vratis se az za tri zimy.\n";



        cout << "=== kapitola 1 - Odchod ===\n"

             << "Predtim nez se vydas na cestu, muzes ukrast jednu vec: \n";
             bool potvrzeno = false;

             while (!potvrzeno) {

            cout <<" 1) Uspory mladsiho bratra (+2 zlata) \n";
            cout <<" 2) Sousedovu sekeru (+1 utok) \n";
            cout <<" 3) Nic \n";
            cout <<"Volba: "<<endl;
            int volba;
            cin >> volba;

                switch(volba){
                case 1:

                hrac.zlato += 2;
                cout<<"Doufej, ze te nikdo nevidel."<<endl;
                potvrzeno = true;
                break;

                case 2:

                hrac.utok += 1;
               cout<<"Ten si drevo dlouho neposeka."<<endl;
                potvrzeno = true;
                break;

                case 3:

                hrac.mana +=1;
                cout<<"Stari bohove se odmenili za tvoji cest.(+1 mana)"<<endl;
                potvrzeno = true;
                break;
                default:

                cout << " \n";

                break;
                }

            }
hrac.zobrazStatistiky();

cout<<"S matkou opustite vesnici, behem toho co zbytek visky jeste spi.\n"
       "Po ceste vidis mnoho havranu, kteri nad vami krouzi.\n"
       "Co udelas?\n";


            potvrzeno = false;
             while (!potvrzeno) {

            cout <<" 1) Zacnes machat rukama jako divoch. \n";
            cout <<" 2) Hodis po nich kamen.\n";
            cout <<" 3) Nic. \n";
            cout <<"Volba: "<<endl;
            int volba;
            cin >> volba;

                switch(volba){
                case 1:

                hrac.cennosti += 1;
                cout<<"Jeden z havranu se te lekl a vypadlo z neho pirko.(+1 cennost)"<<endl;
                potvrzeno = true;
                break;

                case 2:

                hrac.zivoty -= 1;
               cout<<"Matka ti dala vychovny pohlavek.(-1 zivot)"<<endl;
                potvrzeno = true;
                break;

                case 3:

                hrac.uroven +=1;
                cout<<"Potichu jsi sledoval, jak se chovaji,\n"
                "a pochopil jsi zaklady jejich pohybove reci.\n";
                potvrzeno = true;
                break;
                default:

                cout << " \n";

                break;
                }

            }
hrac.zobrazStatistiky();



    potvrzeno = false;
    while (!potvrzeno) {

 cout<<"Blizite se k posvatnemu weirwood stromu. \n"
       "Za co se pomodlite?\n"
       "1) Posmrtny zivot vaseho zesnuleho otce.\n"
       "2) Aby tvuj vojensky vycvik sel hladce.\n"
       "3) Za dobrou urodu skanenu.\n"
       "4) Za bezpecnost skanenu pred divokymi severany.\n";
       cout << "volba: "<<endl;
       int volba;
       cin >> volba;

       switch(volba){

        case 1:
            cout<<" \n";
        cout<<"Slysite slaby hlasek ve vetru, ktery vas vede dal ke korenum stromu hluboko do lesa."<<endl;
        potvrzeno = true;
        break;

        case 2:
            cout<<" \n";
        cout<<"Pri skloneni vam vypadne dyka z pochvy a skutali se dolu z kopce hluboko do lesa."<<endl;
        potvrzeno=true;
        break;

        case 3:
            cout<<" \n";
        cout<<"Na hranici lesa muzete videt velke boruvci\n";
        potvrzeno=true;
        break;

        case 4:
            cout<<" \n";
        cout<<"slysite hlasite otresy a vidite velike humanoidni stopy."<<endl;
        potvrzeno=true;
        break;

        default:
            cout<<" "<<endl;
            break;

                }
            }
    cout<<"  "<<endl;
   cout<<"Postupujes dal do hlubokeho lesa. Cim vice casu co tu stravis, tim hur ti je.\n"
   "Dojde ti, ze ses ztratil a neznas cestu zpet. Hlava se ti mota vic a vic,\n"
   "dokud neodpadnes do hlubokeho spanku.\n";





        }
    };

int main() {
    Hra hra;
    hra.start();


    return 0;
}

