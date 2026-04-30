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

    Hrac() {
        zivoty = 0;
        maxZivoty = 0;
        mana = 0;
        zlato = 0;
        uroven = 1;
        zkusenosti = 0;
        potrebaZkusenosti = 5;
        utok = 0;
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
            cout << "3) Syn nizsiho slechtice (hodne zlata) \n";
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
                hrac.trida = "Syn nizsiho slechtice";
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
        cout << "=== Kapitola 1 ===\n";
        cout <<"tato hra byla zalozena na pribehu z knih george rr martina jmenem feast of skane"<<endl;
        cout <<"============="<<endl;
        cout << "Rano te zbudi matka ze se pujdete pomodlit k weirwood stromu\n";
        cout <<"============="<<endl;

        vyberTridu();
        hrac.zobrazStatistiky();


    }
};

int main() {
    Hra hra;
    hra.start();


    return 0;
}

