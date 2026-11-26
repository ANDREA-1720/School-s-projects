/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20261116-4esa-Perciabosco-esercizio3-OOP"
*/

#include <iostream>
#include <string>

using namespace std;

class Veicolo {
public:
    string targa;
protected:
    int velocita;
private:
    string numeroTelaio;

public:
    Veicolo(string t, string tel) {
        targa = t;
        numeroTelaio = tel;
        velocita = 0;
    }

    void accelera(int incremento) {
        velocita = velocita + incremento;
        cout << "Velocita': " << velocita << endl;
    }

    void frena() {
        velocita = 0;
        cout << "Veicolo fermo" << endl;
    }

    void stampaRisultati() const {
        cout << "Targa: " << targa << endl;
        cout << "Numero telaio: " << numeroTelaio << endl;
        cout << "Velocita': " << velocita << endl;
    }
};

class Automobile : public Veicolo {
private:
    int numeroPorte;
    bool bagagliaioAperto;

public:
    Automobile(string t, string tel, int porte) : Veicolo(t, tel) {
        numeroPorte = porte;
        bagagliaioAperto = false;
    }

    void apriBagagliaio() {
        bagagliaioAperto = true;
        cout << "Bagagliaio aperto" << endl;
    }

    void stampaRisultati() const {
        Veicolo::stampaRisultati();
        cout << "Numero porte: " << numeroPorte << endl;
        cout << "Bagagliaio: " << (bagagliaioAperto ? "aperto" : "chiuso") << endl;
    }
};

int main() {
    string targaLetta;
    string telaioLetto;
    int porteLette;

    cout << "PRIMA AUTO" << endl;
    cout << "Targa: ";
    cin >> targaLetta;
    cout << "Numero telaio: ";
    cin >> telaioLetto;
    cout << "Numero porte: ";
    cin >> porteLette;
    Automobile auto1(targaLetta, telaioLetto, porteLette);

    cout << "SECONDA AUTO" << endl;
    cout << "Targa: ";
    cin >> targaLetta;
    cout << "Numero telaio: ";
    cin >> telaioLetto;
    cout << "Numero porte: ";
    cin >> porteLette;
    Automobile auto2(targaLetta, telaioLetto, porteLette);

    int incremento;
    cout << "Di quanto vuoi accelerare la prima auto? ";
    cin >> incremento;
    auto1.accelera(incremento);
    auto1.frena();
    auto2.apriBagagliaio();

    cout << "Prima auto: " << auto1.targa << endl;
    cout << "Seconda auto: " << auto2.targa << endl;

    cout << endl << "RISULTATI PRIMA AUTO" << endl;
    auto1.stampaRisultati();
    cout << endl << "RISULTATI SECONDA AUTO" << endl;
    auto2.stampaRisultati();

    return 0;
}
