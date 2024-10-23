/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20241024-2esa-Perciabosco-equazioni1gradoC"
*/

#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // Inizializzazione delle variabili
    string equazione, parte1, parte2;
    double coefficiente_a = 0, termine_noto = 0, soluzione = 0, coeff_dx = 0;
    size_t posizione, posizione_x, segno_pos;
    string coefficiente_temp, resto_equazione;

    // Informazioni sull'applicazione
    cout << endl;
    cout << "Limiti attuali:" << endl;
    cout << "- l'incognita deve essere una x" << endl;
    cout << "- tutti i termini noti devono essere presenti dopo la/le x (a sinistra o a destra dell'uguale)" << endl;
    cout << "- non è possibile avere più di un termine noto per parte (a sinistra o a destre dell'uguale)" << endl;
    cout << "- parentesi non supportate" << endl;
    cout << endl;

    // acquisizione input
    cout << "Inserisci l'equazione di primo grado in un incognita da risolvere: ";
    cin >> equazione;

    // elaborazione

    // Un equazione non è corretta se almeno uno dei seguenti casi è soddisfatto:
    // - non contiene il simbolo '='
    // - contiene una parentesi aperta senza una parentesi chiusa o viceversa
    if (equazione.find("=") == string::npos || ((equazione.find("(") != string::npos && equazione.find(")") == string::npos) || (equazione.find("(") == string::npos && equazione.find(")") != string::npos)))
    {
        cout << "L'equazione inserita non è corretta." << endl;
        return 1;
    }
    // Non supportata per non usare cicli
    if (equazione.find("(") != string::npos && equazione.find(")") != string::npos)
    {
        cout << "L'equazione inserita non è supportata." << endl;
        return 1;
    }
    if (equazione.find("x") == string::npos)
    {
        cout << "Per favore riscrivi l' equazione in x." << endl;
        return 1;
    }

    // Rimuovi gli spazi dall'equazione
    equazione.erase(remove(equazione.begin(), equazione.end(), ' '), equazione.end());

    posizione = equazione.find("=");
    if (posizione != string::npos)
    {
        parte1 = equazione.substr(0, posizione);
        parte2 = equazione.substr(posizione + 1);
    }

    // Estrazione dei coefficienti dalla parte sinistra
    posizione_x = parte1.find("x");
    if (posizione_x != string::npos)
    {
        // Se x non è all'inizio, cerca un segno prima
        segno_pos = parte1.find_last_of("+-", posizione_x - 1);
        if (segno_pos != string::npos)
        {
            coefficiente_temp = parte1.substr(segno_pos, posizione_x - segno_pos);
            termine_noto = segno_pos > 0 ? -stof(parte1.substr(0, segno_pos)) : 0;
        }
        else
        {
            coefficiente_temp = parte1.substr(0, posizione_x);
        }

        if (coefficiente_temp == "-")
        {
            coefficiente_a = -1;
        }
        else if (coefficiente_temp == "+" || coefficiente_temp.empty())
        {
            coefficiente_a = 1;
        }
        else
        {
            coefficiente_a = stof(coefficiente_temp);
        }

        // Cerca eventuali termini noti nella parte sinistra
        resto_equazione = parte1.substr(posizione_x + 1);
        if (!resto_equazione.empty())
        {
            termine_noto -= stof(resto_equazione);
        }
    }

    // Estrazione dei coefficienti dalla parte destra
    posizione_x = parte2.find("x");
    if (posizione_x != string::npos)
    {
        // Se x non è all'inizio, cerca un segno prima
        segno_pos = parte2.find_last_of("+-", posizione_x - 1);
        if (segno_pos != string::npos)
        {
            coefficiente_temp = parte2.substr(segno_pos, posizione_x - segno_pos);
            termine_noto += segno_pos > 0 ? stof(parte2.substr(0, segno_pos)) : 0;
        }
        else
        {
            coefficiente_temp = parte2.substr(0, posizione_x);
        }

        if (coefficiente_temp == "-")
        {
            coeff_dx = -1;
        }
        else if (coefficiente_temp == "+" || coefficiente_temp.empty())
        {
            coeff_dx = 1;
        }
        else
        {
            coeff_dx = stof(coefficiente_temp);
        }
        coefficiente_a -= coeff_dx;

        // Gestisci eventuali termini dopo la x
        resto_equazione = parte2.substr(posizione_x + 1);
        if (!resto_equazione.empty())
        {
            termine_noto += stof(resto_equazione);
        }
    }
    else if (!parte2.empty())
    {
        termine_noto += stof(parte2);
    }

    // Risoluzione dell'equazione
    if (coefficiente_a == 0)
    {
        cout << "L'equazione non è di primo grado." << endl;
        return 1;
    }

    soluzione = termine_noto / coefficiente_a;

    // comunicazione dei risultati output
    cout << "La soluzione dell'equazione è: x = " << soluzione << "." << endl;

    return 0;
}
