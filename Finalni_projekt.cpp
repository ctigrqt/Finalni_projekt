#include <iostream>
#include <string>
#include <ctime>

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
    int maxMana;
    Hrac() {
        zivoty = 0;
        maxZivoty = 0;
        maxMana = 1;
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

if (hrac.zivoty < 0) hrac.zivoty = 0;


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
if (hrac.mana == 0){
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
    hrac.cennosti -= 2;
    hrac.utok += 1;

    cout << "Greenseer ti pozehnal silou korenu. (+1 utok)\n";
    }
    else {
    cout << "Potrebujes alespon jednu cennost.\n";
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
cout<<" "<<endl;
cout<<"Vylezes z nory a obeznamis matce tvoji situaci, ale neveri ti.\n"
"Zacne nadavat, ze se jen snazis vyhnout vycviku a ze je z tebe zklamana. (-reputace)\n"
"Kdyz se otoci ani se neohlidnes a vezmes nohy na ramena.\n"
"Zacnes utikat smerem Driftwood hall na ostrov Skagos\n";
cout<<" "<<endl;
hrac.reputace -=1;
cout<<"KAPITOPLA 2 - VLK V ROUSE BERANCIM"<<endl;
cout<<" "<<endl;
cout<<"Po nekolika tezkych dnech cestovani si konecne muzes odpocinout.\n"
"Ale mas hlad a v blizkosti slysis kance.\n"
"Rozhodl ses odpocinout a regenerovat sily.\n";
hrac.zivoty = hrac.maxZivoty;
cout << "Po odpocinku ses citil znovu plny sil.\n";
cout<<"kanci zvuky se zvetsuji a zvetsuji nez se kanec vynori z krovi"<<endl;


cout << "\n====== SOUBOJ S KANCEM ======\n";
int kanec_zivoty = 5;
bool kanecNazivu = true;
bool leckaPouzita = false;
int puvodniUtok = hrac.utok;

while (kanecNazivu && hrac.zivoty > 0) {
cout << "\n=========================\n";
cout << "KANEC HP: " << kanec_zivoty << endl;

hrac.zobrazStatistiky();

cout << "\nCo udelas?\n";
    cout << "1) Light utok\n";
    cout << "2) Heavy utok\n";
    cout << "3) Vyvolani starych bohu (-1 mana)\n";
    cout << "4) Lecka\n";
    cout << "Volba: ";

    int volba;
    cin >> volba;

    switch(volba) {

    case 1:

        cout << "\nZautocil jsi lehkym utokem.\n";
        kanec_zivoty -= 1;
        if (rand() % 100 < 50) {
            hrac.zivoty -= 1;
            cout << "Kanec te zasahl klem. (-1 HP)\n";
        }
        else {
            cout << "Uhnul jsi jeho utoku.\n";
        }
        break;

    case 2:
        cout << "\nRozbehl ses do silneho utoku.\n";
        kanec_zivoty -= 2;
        hrac.zivoty -= 2;
        cout << "Kanec te pri stretu zranil. (-2 HP)\n";

        break;

    case 3:
        if (hrac.mana >= 1) {
            hrac.mana--;
            cout << "\nZacal jsi vyvolavat stare bohy.\n";
            kanec_zivoty = 0;
            cout << "Korene roztrhaly kance na kusy.\n";
        }
        else {
            cout << "Nemas dost many.\n";
        }

        break;

    case 4: {

        if (leckaPouzita) {
            cout << "Uz jsi jednu lecku pripravil.\n";
            break;
        }
        leckaPouzita = true;
        cout << "\nPokousel ses pripravit lecku...\n";
        int sance = 0;
        if (hrac.trida == "Lovec") {
            sance = 60;
        }
        else if (hrac.trida == "Nizsi slechtic") {
            sance = 40;
        }
        else if (hrac.trida == "Rybar") {
            sance = 15;
        }
        int hod = rand() % 100;
        if (hod < sance) {
            cout << "Lecka vysla!\n";
            kanec_zivoty -= 3;
            cout << "Kanec se chytil do pasti. (-3 HP)\n";
        }
        else {
            cout << "Lecka selhala!\n";
            hrac.zivoty -= 1;
            cout << "Kanec te zasahl klem. (-1 HP)\n";
        }
        break;
    }
    default:
        cout << "Neplatna volba.\n";
        break;
    }

if (kanec_zivoty <= 0) {
    kanecNazivu = false;
    cout << "\n===== KANEC PADL =====\n";
    cout << "Po dlouhem boji jsi skolil kance.\n";
    cout << "Vyrezal jsi jeho kly jako trofej.\n";
    hrac.cennosti += 2;
    cout << "(+2 cennosti)\n";
    hrac.uroven += 1;
    cout << "(+1 uroven)\n";
    hrac.zkusenosti += 3;
    cout << "(+3 zkusenosti)\n";
    hrac.zivoty = hrac.maxZivoty;
    cout << "Najedl ses a odpocinul sis. Zivoty obnoveny.\n";
    hrac.utok = puvodniUtok;
    cout << "Tvoje sila se vratila do normalu.\n";
}

if (hrac.zivoty <= 0) {

    cout << "\nKanec te rozdupal.\n";
    cout << "Konec hry.\n";

    return;
    }
}
   cout<<"Konecne ulehnes ke spanku ted uz s plnym zaludkem"<<endl;
   cout<<"V noci se neco zacne plyzit kolem tebe....."<<endl;
   cout<<"Probudis se uprosted noci a stoji nad tebou podivny muz"<<endl;
   cout<<"Predstavi se jako Cyclechon a zacne se omlouvat za naruseni"<<endl;
   cout<<"Pry mu byla zima a jen se chtel ohrat u tveho ohne"<<endl;
   cout<<"Veris mu a nechas ho prisednout k ohni?"<<endl;
   potvrzeno = false;
    while (!potvrzeno) {

    cout << "1) Ano nechas ho prisednout.\n";
    cout << "2) Ne odmitnes ho.\n";
    cout << "Volba: ";
    int volba;
    cin >> volba;
    switch (volba){
case 1:
cout << "TY: Muzes si sednout ale jestli mas spatny umysl...\n"
       "Cyclechon si sedne k ohni ruce se mu tresou zimou\n"
         "CYCLECHON: Prisaham ze neprichazim se zlym umyslem\n"
           "Z nebe se zvedne prudky vitr hejno havranu se sleti kolem ohne\n"
        "Havrani zacnou krakoret jako sileni\n"
       "Z hejna se zformuje temna silueta a dopadne na zem\n"
        "Pred tebou stoji Coldhands ve sve havrani podobe\n"
        "COLDHANDS: LHAR! LHAR! LHAR!\n";
potvrzeno = true;
break;
case 2:
    cout << "TY: Ne Ohen je muj a ja te neznam jdi pryc\n"
            "Cyclechon sklopi hlavu a pomalu odchazi\n"
            "Po par krocich se Cyclechon zhrouti do snehu\n"
            "Chvili vahas ale nakonec ho dotahnes zpet k ohni\n"
            "Je ledovy jako smrt\n"
            "Ozve se hlasite krakani\n"
            "Z temnoty se snese hejno havranu a obkrouzi vas\n"
            "Z hejna se vynori havrani postava Coldhandse\n"
            "COLDHANDS: LHAR! LHAR! LHAR!\n";
potvrzeno = true;
break;
    }
}
if (hrac.zivoty < 0) hrac.zivoty = 0;
    cout<<"Zmrznes v soku behem toho co jeho mesec z bylinkama zacne mit podivne ucinky"<<endl;

    cout<<"Cyclechon se chyti za hlavu a padne na kolena."<<endl;
    cout<<"Jeho ruce se nekontrolovatelne tresou."<<endl;
    cout<<"COLDHANDS: Vidis? Rikal jsem ti, ze je to lhar."<<endl;
    cout<<"CYCLECHON: Ja nelzu..."<<endl;
    cout<<"Coldhands se na neho dlouho diva."<<endl;
    cout<<"Potom se otoci k tobe, ktery je na hranici vnimani."<<endl;
    cout<<"Hejno havranu se rozleti do noci."<<endl;
    cout<<"Coldhands zmizi."<<endl;
    cout<<"Nastane trapne ticho."<<endl;
    cout<<"Cyclechon se pomalu zvedne."<<endl;
    cout<<"CYCLECHON: Takze..."<<endl;
    cout<<"Bheme toho co se nemuzes pohybovat, Ceclychon krouzi nad tebou."<<endl;
    cout<<"Nahle uslysis vrceni."<<endl;
    cout<<"Z krovi vystoupi dva hladovi vlci."<<endl;
    cout<<"V momentu okamziku jako kdyby se vase svety propojily s Ceclychonem"<<endl;

int vlk1 = 4;
int vlk2 = 4;
leckaPouzita = false;
while((vlk1 > 0 || vlk2 > 0) && hrac.zivoty > 0){

        cout<<"\n===== DVA VLCI ====="<<endl;
        cout<<"Vlk 1 HP: "<<vlk1<<endl;
        cout<<"Vlk 2 HP: "<<vlk2<<endl;
        hrac.zobrazStatistiky();
        cout<<"1) Utoc na prvniho vlka"<<endl;
        cout<<"2) Utoc na druheho vlka"<<endl;
        cout<<"3) Vyvolani starych bohu (-1 mana)"<<endl;
        cout<<"4) Lecka"<<endl;
        int volba;
        cin>>volba;
        switch(volba){
        case 1:
        if(vlk1 > 0){
        vlk1 -= hrac.utok;
        cout<<"Zasahl jsi prvniho vlka."<<endl;
        }
        break;

        case 2:
        if(vlk2 > 0){
        vlk2 -= hrac.utok;
        cout<<"Zasahl jsi druheho vlka."<<endl;
        }
        break;

        case 3:
        if(hrac.mana >= 1){
        hrac.mana--;
        vlk1 -= 2;
        vlk2 -= 2;
        cout<<"Koreny prorazily zem pod vlky."<<endl;
        }
        else{
        cout<<"Nemas dostatek many."<<endl;
        }
        break;

        case 4: {
        if (leckaPouzita) {
        cout << "Uz jsi jednu lecku pripravil.\n";
        break;

        }
        leckaPouzita = true;
        cout << "\nPokousel ses pripravit lecku...\n";
        int sance = 0;
        if (hrac.trida == "Lovec") {
        sance = 60;
        }
        else if (hrac.trida == "Nizsi slechtic") {
        sance = 40;
        }
        else if (hrac.trida == "Rybar") {
        sance = 15;
        }
        int hod = rand() % 100;
        if (hod < sance) {
        cout << "Lecka vysla!\n";
        vlk1 -= 4;
        vlk2 -=4;
        cout << "Vlci se chytil do pasti. (-3 HP)\n";
        }
        else {
        cout << "Lecka selhala!\n";
        hrac.zivoty -= 1;
        cout << "Vlk te pokousal. (-1 HP)\n";
        }
        break;
    }
    default:
    cout << "Neplatna volba.\n";
    break;
    }
if (hrac.zivoty < 0) hrac.zivoty = 0;

if(vlk1 > 0){
hrac.zivoty--;
cout<<"Prvni vlk te kousl. (-1 HP)"<<endl;
}
if(vlk2 > 0){
hrac.zivoty--;
cout<<"Druhy vlk te kousl. (-1 HP)"<<endl;
}
}
if(hrac.zivoty <= 0){
cout<<"Vlci ho vazne pokousali, ale Ceclychon vytahne pytlik s bylinkami, co je omraci."<<endl;
}
cout<<"Posledni vlk padl mrtvy."<<endl;
hrac.zkusenosti += 2;
hrac.cennosti += 2;
cout<<"(+2 zkusenosti)"<<endl;
cout<<"(+2 cennosti)"<<endl;
cout<<"CECLYCHON: Tak uz mi veris ze nemam s tebou zadne spatne umysly"<<endl;
cout<<"Dalsi den vyrazite zpatjy na cestu k pristavnimu mestecku"<<endl;
if (hrac.zivoty < 0) hrac.zivoty = 0;
    bool vesnice = true;

    while(vesnice){

    cout<<"\n===== PRISTAVNI MESTECKO ====="<<endl;
    cout<<"1) Odpocinout (Doplneni zivotu)"<<endl;
    cout<<"2) Zvysit utok (3 zlata)"<<endl;
    cout<<"3) Zvysit max zivoty (3 zlata)"<<endl;
    cout<<"4) Falesna pujcka penez"<<endl;
    cout<<"5) Odejit"<<endl;
    int volba;
    cin>>volba;
    switch(volba){
    case 1:
    hrac.zivoty = hrac.maxZivoty;
    cout<<"Dobre sis odpocinul."<<endl;
    break;

    case 2:
    if(hrac.zlato >= 3){
    hrac.zlato -= 3;
    hrac.utok+=2;

    cout<<"(+2 utok)"<<endl;
     break;
    }
    else{
    cout<<"Nemas dost zlata."<<endl;
     break;
    }
    case 3:
    if(hrac.zlato >= 3){
    hrac.zlato -= 3;
    hrac.zivoty = hrac.maxZivoty;
    hrac.maxZivoty+=2;

      cout<<"(+2 max HP)"<<endl;
       break;
    }
    else{
    cout<<"Nemas dost zlata."<<endl;
     break;
    }

    case 4:
    if (hrac.reputace>=1){
    hrac.zlato ++;
    hrac.reputace --;
    cout<<"ZEBRAK: mas vysokou reputaci zarucis se za me u lichvare a dam ti zlatak"<<endl;
    break;
    }else{
    cout<<"ZEBRAK: I ja mam tady vice respektu nez ty zmiz mi z oci"<<endl;
    break;
    }
    case 5:
    vesnice = false;
    break;
    }
    }
    hrac.zobrazStatistiky();
    cout<<"CECLYCHON: Tady jses ,ze ja te hledal jak blbec.\n"
    "CECLYCHON: Potrebuju si zaridit par veci, setkame se v pristavu.\n"
    "...Po tve ceste k pristavu jsi zabloudil do temne ulicky...\n"
    "Vyskoci dva bezdomovci jeden z nich ma rezavy nuz a ten druhy smradlavy korbel\n";

    int zebrak1 = 2;
    int zebrak2 = 3;

    while((zebrak1 > 0 || zebrak2 > 0) && hrac.zivoty > 0){
    cout<<"\n===== ZEBRACI ====="<<endl;
    cout<<"Zebrak 1 HP: "<<zebrak1<<endl;
    cout<<"Zebrak 2 HP: "<<zebrak2<<endl;
    hrac.zobrazStatistiky();
    cout<<"1) Utok na prvniho zebraka"<<endl;
    cout<<"2) Utok na druheho zebraka"<<endl;
    cout<<"3) Vyvolani starych bohu"<<endl;

    int volba;
    cin>>volba;
    switch(volba){

    case 1:
    if(zebrak1 > 0){
    zebrak1 -= hrac.utok;
    cout<<"Zasahl jsi prvniho zebraka."<<endl;
    }
    break;

    case 2:
    if(zebrak2 > 0){
    zebrak2 -= hrac.utok;
    cout<<"Zasahl jsi druheho zebraka."<<endl;
    }
    break;

    case 3:
    if(hrac.mana >= 1){
    hrac.mana--;
    zebrak1 -= 2;
    zebrak2 -= 2;
    cout<<"Temne koreny vyrazily ze zeme."<<endl;
    }
    break;
    }
    if(zebrak1 > 0){
    hrac.zivoty--;
    cout<<"Zebrak te praštil kamenem."<<endl;
    }
    if(zebrak2 > 0){
    hrac.zivoty--;
    cout<<"Zebrak te rizl nozem."<<endl;
    }
    }
    if(hrac.zivoty <= 0){
    cout<<"Padl jsi v temne ulicce."<<endl;
    return;
    }
    cout<<"Oba zebraci lezi na zemi v bezvedomi."<<endl;
    cout<<"Nezabijes je."<<endl;
    cout<<"Jen jim seberes mechy s mincemi."<<endl;
    hrac.zlato += 3;
    hrac.reputace +=2;
    cout<<"(+3 zlata)"<<endl;
    cout<<"Po nekolika minutach konecne najdes cestu zpet do pristavu."<<endl;
    cout<<"Cyclechon uz na tebe ceka."<<endl;
    cout<<"CECLYCHON: Musime si najir prevoz"<<endl;

    if(hrac.trida == "Rybar"){
    cout<<"Zastavis se pred rybarskymi lodemi."<<endl;
    cout<<"Jeden z rybaru si te vsimne."<<endl;
    cout<<"RYBAR: Ty jses rybarskej?"<<endl;
    cout<<"TY: Ale jo"<<endl;
    cout<<"RYBAR: Potrebujete prevoz?"<<endl;
    cout<<"CYCLECHON: Presne tak."<<endl;
    cout<<"RYBAR: Tak nastupte."<<endl;
    }
    if(hrac.trida == "Nizsi slechtic"){

    cout<<"K vam pristoupi mladsi slechtic."<<endl;
    cout<<"SLECHTIC: Promin..."<<endl;
    cout<<"SLECHTIC: Nejses ty nejstarsi syn jednoho z panu ze skane?"<<endl;
    cout<<"Prikyvnes."<<endl;
    cout<<"SLECHTIC: Pamatuji si tveho otce."<<endl;
    cout<<"SLECHTIC: Bude mi cti vas prevezt."<<endl;
    }
    if(hrac.trida == "Lovec"){

    cout<<"Skupina kupcu vyklada kuze a parohy."<<endl;
    cout<<"Jeden z nich si te vsimne."<<endl;
    cout<<"KUPEC: Se nejak zajimas."<<endl;
    cout<<"KUPEC: Lovec?"<<endl;
    cout<<"Prikyvnes."<<endl;
    cout<<"KUPEC: Plujeme stejnym smerem."<<endl;
    cout<<"KUPEC: Muzete se pridat."<<endl;
    }
    cout<<"Nahle uslysis znamy hlas."<<endl;
    cout<<"ZEBRAK: TO JSOU ONI!"<<endl;
    cout<<"Otocis se."<<endl;
    cout<<"Oba zebraci se vratili."<<endl;
    cout<<"Tentokrat s dalsim chlapem."<<endl;
    cout<<"Vypada mnohem nebezpecneji."<<endl;

    int zebrak1hp = 1;
    int zebrak2hp = 1;
    int rvac = 4;

    while((zebrak1hp > 0 || zebrak2hp > 0 || rvac > 0) && hrac.zivoty > 0){

    cout<<"\n===== PREPADENI V PRISTAVU ====="<<endl;

    cout<<"Zebrak 1 HP: "<<zebrak1hp<<endl;
    cout<<"Zebrak 2 HP: "<<zebrak2hp<<endl;
    cout<<"Rvac HP: "<<rvac<<endl;

    hrac.zobrazStatistiky();

    cout<<"1) Utok na zebraka 1"<<endl;
    cout<<"2) Utok na zebraka 2"<<endl;
    cout<<"3) Utok na rvace"<<endl;
    int volba;
    cin>>volba;

    switch(volba){

    case 1:
    if(zebrak1hp > 0){
    zebrak1hp -= hrac.utok;
    cout<<"Zasahl jsi prvniho zebraka."<<endl;
    }
    break;

    case 2:
    if(zebrak2hp > 0){
    zebrak2hp -= hrac.utok;
    cout<<"Zasahl jsi druheho zebraka."<<endl;
    }
    break;

    case 3:
    if(rvac > 0){
    rvac -= hrac.utok;
    cout<<"Zasahl jsi rvace."<<endl;
    }
    break;
    }
    if(zebrak1hp > 0){
    hrac.zivoty--;
    cout<<"Zebrak te uhodil kamenem."<<endl;
    }
    if(zebrak2hp > 0){
    hrac.zivoty--;
    cout<<"Zebrak te kopl do nohy."<<endl;
    }
    if(rvac > 0){
    hrac.zivoty -= 2;
    cout<<"Rvac te zasahl pestmi."<<endl;

    }
    }

    if(hrac.zivoty <= 0){
    cout<<"Svalis se na zem."<<endl;
    cout<<"Rvac se zasmal."<<endl;
    cout<<"RVAC: Myslel jsem ze vydrzis dele."<<endl;
    cout<<"Zebraci ti prohledaji kapsy."<<endl;
    cout<<"ZEBRAK: Ma u sebe penize!"<<endl;
    cout<<"Prisels o vsechno zlato."<<endl;
    hrac.zlato = 0;
    cout<<"Cyclechon prudce odstrci rvace."<<endl;
    cout<<"CYCLECHON: VSTAVEJ!"<<endl;
    cout<<"Popadne te za rameno a odtahne pryc."<<endl;
    hrac.zivoty = 1;
    cout<<"Zbyl ti posledni zivot."<<endl;
    }
    else{
    cout<<"Rvac padne na kolena."<<endl;
    cout<<"ZEBRAK: UTEKTE!"<<endl;
    cout<<"Oba zebraci utecou do ulic."<<endl;
    cout<<"Cyclechon se usmeje."<<endl;
    cout<<"CYCLECHON: To byla zabava."<<endl;
    }
    cout<<"V tu chvili nekdo zakrici."<<endl;
    cout<<"STRAZNY: TAM JSOU!"<<endl;
    cout<<"Po molu k vam bezi ozbrojene straze."<<endl;
    cout<<"RYCHLE!"<<endl;
    cout<<"Rozbehnete se smerem k lodim."<<endl;
    cout<<"Cyclechon odstrci jednoho strazneho do vody."<<endl;
    cout<<"Preskocis bedny a dopadnes na palubu obchodni lodi."<<endl;
    cout<<"Lod se zacne vzdalovat od brehu."<<endl;
    cout<<"Straze po vas krici z mola."<<endl;
    cout<<"Ale kupec si niceho nevsima."<<endl;


    cout<<"Po nekolika dnech na mori ti odpocinek udelal dobre."<<endl;
    hrac.zivoty = hrac.maxZivoty;
    hrac.mana = hrac.maxMana;
    cout<<"Tvoje sily byly plne obnoveny."<<endl;
    cout<<"Pred vami se rozklada pristavni osada na Skagosu."<<endl;
    cout<<"Je mnohem vetsi nez vesnice na Skanu."<<endl;

    bool skagosVesnice = true;
    while(skagosVesnice){

    cout<<"\n===== SKAGOS ====="<<endl;

    cout<<"1) Falesna pujcka "<<endl;
    cout<<"2) Zvysit utok (8 zlata)"<<endl;
    cout<<"3) Zvysit max zivoty (8 zlata)"<<endl;
    cout<<"4) Zvysit max manu (8 zlata)"<<endl;
    cout<<"5) Odejit"<<endl;

    int volba;
    cin>>volba;

    switch(volba){

    case 1:

     if (hrac.reputace>=1){
    hrac.zlato ++;
    hrac.reputace --;
    cout<<"ZEBRAK: mas vysokou reputaci zarucis se za me u lichvare a dam ti zlatak"<<endl;
    break;
    }else{
    cout<<"ZEBRAK: I ja mam tady vice respektu nez ty zmiz mi z oci"<<endl;
    break;
    }
    case 2:
    if(hrac.zlato >= 8){
    hrac.zlato -= 8;
    hrac.utok++;
    cout<<"(+1 utok)"<<endl;
    }
    break;

    case 3:
    if(hrac.zlato >= 8){
    hrac.zlato -= 8;
    hrac.maxZivoty += 2;
    hrac.zivoty = hrac.maxZivoty;
    cout<<"(+2 max HP)"<<endl;
    }
    break;

    case 4:
    if(hrac.zlato >= 8){
    hrac.zlato -= 8;
    hrac.maxMana += 2;
    hrac.mana = hrac.maxMana;
    cout<<"(+2 max mana)"<<endl;
    }
    break;

    case 5:
    skagosVesnice = false;
    break;
    }
    }
    cout<<"Po nekolika hodinach hledani dorazis k mistni tvrzi."<<endl;
    cout<<"Pred branou stoji ozbrojeni strazni."<<endl;
    cout<<"Pozadas o audienci u mistniho pana."<<endl;
    cout<<"STRAZNY: Ne."<<endl;
    cout<<"Zkusis to znovu."<<endl;
    cout<<"STRAZNY: Rekl jsem ne."<<endl;
    cout<<"Cyclechon se zacina viditelne nudit."<<endl;
    cout<<"Po chvili vystoupi jeden ze straznych."<<endl;
    cout<<"STRAZNY: Reknu ti co."<<endl;
    cout<<"STRAZNY: Kdyz me porazis v souboji, pustim te dovnitr."<<endl;
    int strazny = 8;
if (hrac.zivoty < 0) hrac.zivoty = 0;
    while(strazny > 0 && hrac.zivoty > 0){

    cout<<"\n===== STRAZNY ====="<<endl;
    cout<<"HP Strazneho: "<<strazny<<endl;
    hrac.zobrazStatistiky();
    cout<<"1) Utok"<<endl;
    cout<<"2) Vyvolani starych bohu"<<endl;
    int volba;
    cin>>volba;
    switch(volba){
    case 1:
    strazny -= hrac.utok;
    cout<<"Zasahl jsi strazneho."<<endl;
    break;
    case 2:
    if(hrac.mana >= 1){
    hrac.mana--;
    strazny -= 2;
    cout<<"Temna energie zasahla strazneho."<<endl;
    }
    break;
    }
    if(strazny > 0){
    hrac.zivoty--;
    cout<<"Strazny te zasahl."<<endl;
    }
    }
    if(hrac.zivoty <= 0){
    cout<<"Strazny te porazil."<<endl;

    }
    else{
    cout<<"Strazny padl na kolena."<<endl;
    cout<<"STRAZNY: Dobre..."<<endl;
    cout<<"STRAZNY: Ale jeste jedna vec."<<endl;

    if(hrac.zlato > 0){
    cout<<"STRAZNY: Vstupni poplatek."<<endl;
    cout<<"Strazny ti sebral vsechny penize."<<endl;
    hrac.zlato = 0;
    }
    cout<<"STRAZNY: A ted zmiz."<<endl;
    }
    cout<<"Cyclechon nevericne zira."<<endl;
    cout<<"CYCLECHON: To si delas srandu?"<<endl;
    cout<<"STRAZNY: Mas taky nejaky problem?"<<endl;
    cout<<"Cyclechon se usmeje."<<endl;
    cout<<"To neni dobry znameni."<<endl;
    cout<<"CYCLECHON: Ano."<<endl;
    cout<<"CYCLECHON: Mam."<<endl;
    cout<<"A vzapeti strci strazneho ze schodu."<<endl;
    cout<<"Druhy strazny okamzite tasí mec."<<endl;
    cout<<"CYCLECHON: UTEKEJ!"<<endl;
    cout<<"A sam se rozbehne jinym smerem."<<endl;
    cout<<"Oba strazni se vrhnou na tebe."<<endl;

    int strazny1 = 7;
    int strazny2 = 7;
    while((strazny1 > 0 || strazny2 > 0) && hrac.zivoty > 0){

    cout<<"\n===== STRAZNI TVRZE ====="<<endl;

    cout<<"Strazny 1 HP: "<<strazny1<<endl;
    cout<<"Strazny 2 HP: "<<strazny2<<endl;

    hrac.zobrazStatistiky();

    cout<<"1) Utok na strazneho 1"<<endl;
    cout<<"2) Utok na strazneho 2"<<endl;
    cout<<"3) Vyvolani starych bohu (-1 mana)"<<endl;
if (hrac.zivoty < 0) hrac.zivoty = 0;
    int volba;
    cin>>volba;

    switch(volba){
    case 1:
    if(strazny1 > 0){
    strazny1 -= hrac.utok;
    cout<<"Zasahl jsi prvniho strazneho."<<endl;
    }
    break;

    case 2:
    if(strazny2 > 0){
    strazny2 -= hrac.utok;
    cout<<"Zasahl jsi druheho strazneho."<<endl;
    }
    break;

    case 3:
    if(hrac.mana >= 1){
    hrac.mana--;
    strazny1 -= 3;
    strazny2 -= 3;
    cout<<"Temne koreny vyrazily z dlazby."<<endl;
    cout<<"Oba strazni byli zraneni."<<endl;
    }
    else{
    cout<<"Nemas dostatek many."<<endl;
    }
    break;

    default:
    cout<<"Neplatna volba."<<endl;
    }
    if(strazny1 > 0){
    hrac.zivoty -= 2;
    cout<<"Prvni strazny te zasahl obuskem. (-2 HP)"<<endl;
    }
    if(strazny2 > 0){
    hrac.zivoty -= 2;
    cout<<"Druhy strazny te zasahl pesti. (-2 HP)"<<endl;
    }
    }
    if(hrac.zivoty <= 0){

    cout<<"Posledni rana te srazi na zem."<<endl;
    cout<<"Pred ocima se ti zatmi."<<endl;
    cout<<"STRAZNY: Tenhle uz nevstane."<<endl;
    cout<<"STRAZNY: Odtahnete ho."<<endl;
    cout<<"Strazni te odvlecou do spinave postranni ulicky."<<endl;
    cout<<"A nechaji te tam lezet."<<endl;
    hrac.zivoty = 1;

    }
    else{

    cout<<"Posledni strazny padne na zem."<<endl;
    cout<<"Nemuzes uverit tomu ze jsi vyhral."<<endl;
    cout<<"Jsi ale tezce zraneny."<<endl;
    hrac.zkusenosti += 4;
    cout<<"(+4 zkusenosti)"<<endl;
    if(hrac.zivoty > 1){
    hrac.zivoty = 1;
    }
    cout<<"Po boji se sotva drzis na nohou."<<endl;
    }
      cout<<"Po nekolika minutach uslysis kroky."<<endl;
        cout<<"Ze stinu se vynori Cyclechon."<<endl;
        cout<<"Ma monokl."<<endl;
        cout<<"Kazdy kus obleceni ma roztrzeny."<<endl;
        cout<<"Telo cele od modrin."<<endl;
        cout<<"CYCLECHON: Tak tohle nevyslo uplne podle planu."<<endl;
        cout<<"Sedne si vedle tebe."<<endl;
        cout<<"CYCLECHON: Promin."<<endl;
        cout<<"CYCLECHON: Opravdu jsem se snazil pomoct."<<endl;
        cout<<"Chvili oba mlcite."<<endl;
        cout<<"Nakonec si povzdechne."<<endl;
        cout<<"CYCLECHON: Co kdybych si tu audienci vyzadal sam?"<<endl;
        cout<<"CYCLECHON: Treba budu mit vic stesti."<<endl;
        cout<<"Nezbyva ti nez souhlasit."<<endl;

        cout<<"Po nekolika hodinach cekani pred tvrzi ti dojde trpelivost."<<endl;
        cout<<"Cyclechon se stale nevratil."<<endl;
        cout<<"Nakonec se rozhodnes vratit domu na Skane."<<endl;

        cout<<"Po dlouhem hledani najdes stareho rybare."<<endl;
        cout<<"Souhlasi ze te za maly poplatek odveze."<<endl;

        cout<<"Nastoupis na malou rybarskou lod."<<endl;

        hrac.zivoty = hrac.maxZivoty;
        hrac.mana = hrac.maxMana;

        cout<<"Behem plavby si odpocines."<<endl;
        cout<<"Tvoje sily byly plne obnoveny."<<endl;

        cout<<"Druhy den rano se z vody vynori tri tuleni."<<endl;
        cout<<"Jsou hladovi a vrhnou se na sitì."<<endl;

int tulen1 = 2;
int tulen2 = 2;
int tulen3 = 2;
if (hrac.zivoty < 0) hrac.zivoty = 0;
while((tulen1 > 0 || tulen2 > 0 || tulen3 > 0) && hrac.zivoty > 0){

    cout<<"\n===== TULENI ====="<<endl;

    cout<<"Tulen 1 HP: "<<tulen1<<endl;
    cout<<"Tulen 2 HP: "<<tulen2<<endl;
    cout<<"Tulen 3 HP: "<<tulen3<<endl;

    hrac.zobrazStatistiky();

    cout<<"1) Utok na tulene 1"<<endl;
    cout<<"2) Utok na tulene 2"<<endl;
    cout<<"3) Utok na tulene 3"<<endl;

    int volba;
    cin>>volba;

    switch(volba){
    case 1:
    if(tulen1 > 0){
    tulen1 -= hrac.utok;
    }
    break;

    case 2:
    if(tulen2 > 0){
    tulen2 -= hrac.utok;
    }
    break;

    case 3:
    if(tulen3 > 0){
    tulen3 -= hrac.utok;
    }
    break;

    }
    if(tulen1 > 0){
    hrac.zivoty--;
    }
    if(tulen2 > 0){
    hrac.zivoty--;
    }
    if(tulen3 > 0){
    hrac.zivoty--;
    }
    }

        if(hrac.zivoty <= 0){

        cout<<"RYBAR: Co se do toho pletes?!"<<endl;
        cout<<"RYBAR: Malem jsi nas vsechny zabil!"<<endl;

        hrac.zivoty = 1;

        }
        else{

        cout<<"Posledni tulen padl."<<endl;
        cout<<"Rybare potesilo mnozstvi masa."<<endl;

        hrac.zlato += 5;

        cout<<"(+5 zlata)"<<endl;

}

    cout<<"Te noci jdes spat."<<endl;

    hrac.zivoty = hrac.maxZivoty;
    hrac.mana = hrac.maxMana;

    cout<<"Po probuzeni jsou tve sily opet obnovene."<<endl;
    cout<<"K tobe prijdou dva mladi rybari."<<endl;
    cout<<"Vypadaji nastvane."<<endl;
    cout<<"RYBAR: Takze to jsi ty..."<<endl;
    cout<<"RYBAR: Kvuli tobe..."<<endl;
    cout<<"Nahle se na tebe vrhnou."<<endl;

        int mlady1 = 4;
        int mlady2 = 4;

while((mlady1 > 0 || mlady2 > 0) && hrac.zivoty > 0){

cout<<"\n===== MLADI RYBARI ====="<<endl;

cout<<"1) Utok na prvniho"<<endl;
cout<<"2) Utok na druheho"<<endl;

    int volba;
    cin>>volba;
    switch(volba){

    case 1:
    if(mlady1 > 0){
    mlady1 -= hrac.utok;
    }
    break;

    case 2:
    if(mlady2 > 0){
    mlady2 -= hrac.utok;
    }
    break;
    }
    cout<<"Nahle se z vrcholu stezne ozve krik."<<endl;
    cout<<"RYBAR: Na PALBU!"<<endl;
    break;
}
    cout<<"Vsichni se rozbehnou k okraji lode."<<endl;
    cout<<"Na obzoru poznas svou rodnou vesnici."<<endl;
    cout<<"Potom si vsimnes neceho horsiho."<<endl;
    cout<<"Male lodky najezdniku ze severu."<<endl;
    cout<<"Miri primo ke Skane."<<endl;
    cout<<"Nahle se od severu vynori flotila."<<endl;
    cout<<"Lode ze Skagosu."<<endl;
    cout<<"V jejich cele stoji Cyclechon."<<endl;
    cout<<"O okamzik pozdeji narazi do prvni lode najezdniku."<<endl;
    cout<<"Drevo se rozleti na vsechny strany."<<endl;
    cout<<"Zbytek najezdniku se da na utek."<<endl;
    cout<<"RYBAR: Zachranili nas!"<<endl;
    cout<<"Chces jim podekovat."<<endl;
    cout<<"Ale kdyz flotila pristane..."<<endl;
    cout<<"Neco neni v poradku."<<endl;
    cout<<"Skagosske posadky tasí zbrane."<<endl;
    cout<<"A vrhnou se na obyvatele vesnice."<<endl;
    cout<<"Lide krici a domy hori."<<endl;
    cout<<"Nekteri valecnici trhaji maso z mrtvol a pozirajiho jako zvirata."<<endl;
    cout<<"Pak ho uvidis."<<endl;
    cout<<"Cyclechon."<<endl;
    cout<<"Stoji pred tvym domem."<<endl;
    cout<<"Tvoje matka kleci na zemi."<<endl;
    cout<<"Cyclechon pomalu tasí mec."<<endl;
    cout<<"Bez vahani skocis z lode do vody."<<endl;
    cout<<"Rozbehnes se pres plaz."<<endl;
    cout<<"Cyclechon se otoci."<<endl;
    cout<<"A usmeje se."<<endl;
    cout<<"===== BOSS FIGHT: CYCLECHON ====="<<endl;
        int cyclechonHP = 35;
        int tahBosse = 1;
        leckaPouzita = false;
        while(cyclechonHP > 0 && hrac.zivoty > 0){
            cout << "\n=========================" << endl;
            cout << "CYCLECHON HP: " << cyclechonHP << endl;
            cout << "Tah bosse: " << tahBosse << endl;
            hrac.zobrazStatistiky();

            cout << "\nCo udelas?" << endl;
            cout << "1) Light utok" << endl;
            cout << "2) Heavy utok" << endl;
            cout << "3) Vyvolani starych bohu (-1 mana)" << endl;
            cout << "4) Lecka" << endl;
            cout << "Volba: ";

            int volba;
            cin >> volba;

            switch(volba){

            case 1:
            cout << "Zautocil jsi." << endl;
            cyclechonHP -= hrac.utok;
            if(rand() % 100 < 40){
            cout << "Cyclechon cast utoku vykryl." << endl;
            cyclechonHP += hrac.utok / 2;
            }
            break;

            case 2:
            cout << "Rozmachl ses silnym utokem." << endl;
            cyclechonHP -= hrac.utok * 2;
            if(rand() % 100 < 35){
            cout << "Cyclechon provedl protiutok! (-2 HP)" << endl;
            hrac.zivoty -= 2;
            }
            break;

            case 3:
            if(hrac.mana >= 1){
            hrac.mana--;
            cyclechonHP -= 5;
            cout << "Korene prorazily zem pod Cyclechonem. (-5 HP)" << endl;
            }else{
            cout << "Nemas dostatek many." << endl;
            }
            break;

            case 4:
            if(leckaPouzita){
            cout << "Uz jsi jednu lecku pouzil." << endl;
            break;
            }
            leckaPouzita = true;
            int sance;
            if(hrac.trida == "Lovec"){
            sance = 75;
            }
            else if(hrac.trida == "Nizsi slechtic"){
                    sance = 50;
            }
            else{
            sance = 35;
                }
            if(rand() % 100 < sance){
            cout << "Lecka vysla! Cyclechon se chytil do pasti. (-8 HP)" << endl;
            cyclechonHP -= 8;
                }else{
            cout << "Lecka selhala! (-2 HP)" << endl;
            hrac.zivoty -= 2;
            }
            break;

            default:
            cout << "Neplatna volba." << endl;
            continue;
            }
            if(cyclechonHP <= 0){
                break;
            }
            if(tahBosse % 2 == 0){
                cyclechonHP += 2;
                cout << "Cyclechon si obnovil 2 HP." << endl;
            }
            if(tahBosse % 3 == 0){
                cyclechonHP += 3;
                cout << "Cyclechon si obnovil 3 HP." << endl;
            }
            if(tahBosse % 6 == 0){
                cout << "Cyclechonuv buben dunel po celem bojisti!" << endl;
            }
            int dmg = tahBosse * (rand() % 3 + 1);
            cout << "Cyclechon te zasahl za "
                 << dmg
                 << " poskozeni!" << endl;
            hrac.zivoty -= dmg;
            tahBosse++;
        }
        if(hrac.zivoty <= 0){
            cout << "\n===== PROHRA =====" << endl;
            cout << "Cyclechon te porazil." << endl;
            cout<<"Hodis svoji matku pred sebe jako lidsky stit a utikas co ti nohy dovoli"<<endl;
            cout<<"Odplovate za vychodu slunce..."<<endl;
            cout<<"Posledni co vidis jsou krvave plaze Skane a jak skaggosti kanibalizuji tela tvych spoluobcanu."<<endl;
            hrac.zkusenosti += 10;
            hrac.reputace -= 10;
        }
        else{
            cout << "\n===== VITEZSTVI =====" << endl;
            cout << "Cyclechon padl na kolena." << endl;
            cout<<"Zachranil jsi svoji matku a zbytek sve rodiny, evakujujete se na rybarskou lodku"<<endl;
            cout<<"Odplovate za vychodu slunce..."<<endl;
            cout<<"Posledni co vidis jsou krvave plaze Skane a jak skaggosti kanibalizuji tela tvych spoluobcanu."<<endl;

            hrac.zkusenosti += 10;
            hrac.reputace += 5;
            cout << "(+10 zkusenosti)" << endl;
            cout << "(+5 reputace)" << endl;
        }
                }
};
int main() {
    srand(time(0));
    Hra hra;
    hra.start();


    return 0;
}

