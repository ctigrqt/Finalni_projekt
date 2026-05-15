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
    int reputace;

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
        reputace = 0;
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
        cout << "Cennosti : " << cennosti << "\n";
        cout << "Reputace : " << reputace << "\n";
             cout<< "\n=== POSTAVA ===\n";
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
                hrac.reputace = 4;
            }
            else if (volba == 2) {
                hrac.trida = "Lovec";
                hrac.zivoty = 6;
                hrac.maxZivoty = 6;
                hrac.utok = 3;
                hrac.zlato = 5;
                hrac.reputace = 6;
            }
            else if (volba == 3) {
                hrac.trida = "Nizsi slechtic";
                hrac.zivoty = 4;
                hrac.maxZivoty = 4;
                hrac.utok = 5;
                hrac.zlato = 12;
                hrac.reputace = 8;
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
                hrac.reputace --;
                hrac.zivoty -= 1;
               cout<<"Matka ti dala vychovny pohlavek.(-1 zivot & -1 reputace)"<<endl;
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



    cout<<"Probudis se ve velike nore, vzduch pachne hnilobou.\n"
    "Jak pokracujes dale, tim se pach zvetsuje...\n"
    "Na rozcesti vidis 3 havrany, jsou agresivni a vyleti proti tobe.\n"
    "Co udelas?\n"<<endl;

    int havrani = 3;
    int havrani_zivoty = 6;

    while (havrani > 0){
       if (hrac.zivoty <= 1) {

        cout << "\nJsi prilis zraneny a utikas hloubeji do nory.\n";
        break;
    }
    cout<<"============="<<endl;
    cout<<" Havrani: "<<havrani<<endl;
    cout<<" Zivoty havranu: "<<havrani_zivoty<<endl;
    hrac.zobrazStatistiky();

    cout<<"1) Zacnes machat rukama (light utok)\n"
    "2) Hodis po nich kameny co jsi nasel v nore (heavy utok)\n";
    cout<<"3) Zacnes vyvolavat stare bohy v bitevnim pokriku (-1 mana)"<<endl;
    cout<<"Volba :"<<endl;
    int volba;
    cin >> volba;

    switch(volba){
case 1:

     cout << "\nZacal jsi divoce machat rukama.\n";
     havrani_zivoty -= 1;
     if (rand() % 2 == 0) {
     cout << "Havrani se netrefili.\n";
                    }
     else {
        hrac.zivoty--;
     cout << "Havrani te ozobali. (-1 zivot)\n";
                    }
     break;


case 2:

    cout << "\nHodil jsi po havranech par kamenu.\n";
    havrani_zivoty -= 3;
    hrac.zivoty--;
    cout << "Havrani te pri utoku poskrabali. (-1 zivot)\n";

    break;

case 3:

    if (hrac.mana >= 1) {
    hrac.mana--;
    havrani = 0;

cout << "Zacal jsi kricet modlitbu.\n"
 "Havrani se v panice rozleteli proti stenam nory\n"
 "a umreli pri srazeni\n";
 hrac.zkusenosti += 2;
        hrac.cennosti += 3;
        hrac.uroven += 1;

                }
else {
cout << "Nemas dostatek many.\n";
            }
break;

default:
cout << "Neplatna volba.\n";

break;


          }
if (havrani_zivoty <= 0) {

        havrani = 0;

        cout << "\nPosledni havran padl mrtvy k zemi.\n";
        cout <<"Aspon si muzes vzit jejich pirka jako cennosti."<<endl;
        hrac.zkusenosti += 2;
        hrac.cennosti += 3;
        hrac.uroven += 1;

    }
hrac.zobrazStatistiky();
         }
         potvrzeno = false;
             while (!potvrzeno) {
         cout<<"Pokracujes dal do nory.\n"
         "Korenu pribyva a pribyva, najdes krizovatku a uprosted ni sedi 3 okky havran.\n"
         "Po chvilce trapne tichosti havran na tebe promluvi.\n"
         "Rekne ti, ze te sem prived sam osud, ze musis zachranit Skane.\n"
         "Budes mu verit?\n";
         cout<<"1) Ano"<<endl;
         cout<<"2) Ne"<<endl;

        cout << "Volba: "<<endl;
        int volba;
        cin >> volba;

        switch(volba){
case 1:
    cout<<"Spravne premyslis ale i tak tve myslenky jsou temne (+reputace)\n"
    "moje jmeno je Cold hands\n";
    hrac.reputace += 1;
    potvrzeno=true;
    break;
case 2:
    cout<<"Hlupacku slysim tvoje myslenky budouci i minule(-reputace)\n"
    "Ale i tak jsem ti poveren pomoct.\n"
    "Moje jmeno je Cold hands.\n";
    hrac.reputace--;
    potvrzeno=true;
    break;
default:
cout<<"Neplatna volba."<<endl;
break;
          }
         }
cout<<"Prosim nasleduj me.\n"
    "    \n"
    "======Jak sestupujete hloubeji do nory havran zacne vysvetlovat okolnosti======\n"
    "              Tvrdi, ze jsi jediny, kdo dokaze zachranit Skane.\n"
    "     \n";
    cout<<"TY: Ja? Vzdyt jsem jeste dite a predkym bych ho mel vubec zachranovat."<<endl;
    cout<<"TY: Pred najezdniky ze severu zdi?"<<endl;
    cout<<"COLDHANDS: Musis zachranit Skane, to snad chces udelat?"<<endl;
    cout<<"TY: Jsem jenom "<< hrac.trida; cout <<",ale pro Skane udelam cokoliv"<<endl;
    cout<<"COLDHANDS: Tohle neni jen pro Skane. Budete to stat hodne mozna na to zapones,\n"
    "ale jednoho dne pride den, kdy si vzpomenes na to kolik te to stalo\n";
    cout<<"TY: Kam to vubec jdeme...?"<<endl;
    cout<<"   "<<endl;
    cout<<"Havran na jednou zmizi a zpoza rohu se vynori vysoky postarsi muz.\n"
    "Ma velmi bledou plet a cerne umrzle ruce\n";




        potvrzeno = false;
        while (!potvrzeno) {

        cout<<"-------------------------"<<endl;
        cout<<"TY: Kdo jsi?!!\n"
        "Snad jsem rikal, ze jsem Coldhands.\n";
        cout<<"1) Ty jsi mrtvej?\n"
            "2) Kdo kurva jses.\n";
       cout << "volba: "<<endl;
       int volba;
       cin >> volba;
        cout<<"--------"<<endl;
       switch(volba){

        case 1:
            cout<<" \n";
        cout<<"Byval jsem, ted jsem neco mezi."<<endl;
        potvrzeno = true;
        break;

        case 2:
            cout<<" \n";
        cout<<"Mrtvi me neberou mezi sebe a zivi se modli, abych prisel pozde"<<endl;
        potvrzeno=true;
        break;

        default:
            cout<<" "<<endl;
            break;

                }
            }
            cout<<"-----------------------------------"<<endl;
cout<<"dorazite ke dnu nory.\n"
"Citis odporny zapach, ktery pochazi z mista, kde se potkavaji koreny.\n";
cout<<"   "<<endl;
cout<<"Vidis stareho pana, ktery je prorostly koreny stromu.\n"
"Napadne te utect, ale Coldhands te chyti a presune te blize ke starci.\n";
cout<<"  "<<endl;
cout<<"GREENSEER: Neboj se "<<hrac.jmeno; cout<<" i ja se stydim za svuj stav.\n"
"GREENSEER: Colhands ti rikal o tvem poslani?.\n"
"TY: Ano ale zminil, ze me to bude stat draze, co tim myslel?\n"
"GREENSEER: Chlapce to ti nemohu rici, bojim se, ze bys pak nesouhlasil.\n"
"Bez a varuj Skane, potom pluj na Skagos a vypros mistniho pana o pomoc.\n"
"Ma mocne lode, ktere potrebujete.\n"
"  \n"
"Jestli mas nejake cennosti, muzeme spolu udelat obchod.\n";


potvrzeno = false;
while (!potvrzeno) {
if (hrac.mana >= 0){
    int volba;
    cout<<"Vidim, ze nemas zadnou naklonost bohu, ze jsi bez many"<<endl;
    cout<<"Za tvoje je zkusenosti jest manu muzu vymenit."<<endl;
    cout<<"Volba?: (1/2)"<<endl;
    cin>>volba;
    if (volba == 1) {
        cout<<"Nuze dobra"<<endl;
        if(hrac.zkusenosti < 1){
        cout<<"Nemas zadne zkusenosti";
        }
        if(hrac.zkusenosti >= 1){
        hrac.zkusenosti --;
        hrac.mana +=1;
        cout<<"Obdrzel jsi manu"<<endl;
        }
        potvrzeno = true;
    }
else if (volba == 2) {

            cout << "Jak si prejes." << endl;
            potvrzeno = true;
        }
        else {
        cout << "Neplatna volba. Zadej pouze 1 nebo 2." << endl;
        }

}

}
cout<<" "<<endl;
  cout<<"Nyni muzes ziskat.\n";
  potvrzeno = false;

while (!potvrzeno) {

    cout << "\n===== OBCHOD S GREENSEEREM =====\n";
    cout << "Tvoje cennosti: " << hrac.cennosti << "\n";
    cout << "1) 1 cennost -> +3 zlata\n";
    cout << "2) 2 cennosti -> +1 utok\n";
    cout << "3) 1 cennost -> +1 reputace\n";
    cout << "4) Odejit\n";
    cout << "Volba: ";

    int volba;
    cin >> volba;

    switch(volba) {

    case 1:
    if (hrac.cennosti >= 1) {
    hrac.cennosti -= 1;
    hrac.zlato += 3;

    cout << "Greenseer ti predal stare mince. (+3 zlata)\n";
    }
    else {
    cout << "Nemas dostatek cennosti.\n";
    }

    break;

    case 2:
    if (hrac.cennosti >= 1) {
    hrac.cennosti -= 1;
    hrac.utok += 1;

    cout << "Greenseer ti pozehnal silou korenu. (+1 utok)\n";
    }
    else {
    cout << "Potrebujes alespon 2 cennosti.\n";
    }

    break;

    case 3:
    if (hrac.cennosti >= 1) {
    hrac.cennosti -= 1;
    hrac.reputace += 1;

    cout << "Tvoje jmeno bude mezi lidmi znamo. (+1 reputace)\n";
}
    else {
    cout << "Nemas dostatek cennosti.\n";
}
    break;

    case 4:
    cout << "Greenseer prikyvl a obchod skoncil.\n";
    potvrzeno = true;

    break;

    default:
    cout << "Neplatna volba.\n";

    break;
}
    hrac.zobrazStatistiky();
}




        }
       };

int main() {
    Hra hra;
    hra.start();


    return 0;
}

