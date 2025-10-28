/**
 * @file main.cpp
 * @brief Glowny plik programu, zawiera funkcje main().
 */

#include <iostream>
#include <string>
#include "lista.h"
#include "IOperacja.h"
#include "FabrykaOperacji.h"

using namespace std;

int main() {
    lista lista;
    string wybor;
    FabrykaOperacji fabryka;

    do {
        lista.wyswietl();
        cout << endl;
        cout << "poczatek - dodaj liczbe na poczatek listy" << endl;
        cout << "koniec - dodaj liczbe na koniec listy" << endl;
        cout << "indeks - dodaj liczbe pod wskazany indeks" << endl;
        cout << "usun_poczatek - usun liczbe z poczatku listy" << endl;
        cout << "usun_koniec - usun liczbe z konca listy" << endl;
        cout << "usun_indeks - usun liczbe spod indeksu" << endl;
        cout << "odwroc - odwroc liste" << endl;
        cout << "usun_liste - usun cala liste" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;

        IOperacja* operacja = fabryka.stworzOperacje(wybor);

        if (operacja != nullptr) {
            operacja->wykonaj(lista);
            delete operacja;
        }
        else {
            cout << "Nie ma takiej operacji, wpisz ponownie" << endl;
        }

        cout << endl;
    } while (true);

    return 0;
}