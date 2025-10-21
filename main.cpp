#include <iostream>
#include <string>
#include "lista.h"
#include "push_front.h"
#include "push_back.h"

using namespace std;

int main() {
    lista lista;
    string wybor;

    do {
        lista.wyswietl();

        cout << "poczatek - dodaj liczbe na poczatek listy" << endl;
        cout << "koniec - dodaj liczbe na koniec listy" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;

        if (wybor == "poczatek") {
            pushfront akcja;
            akcja.wykonaj(lista);
        }
        else if (wybor == "koniec") {
            pushback akcja;
            akcja.wykonaj(lista);
        }
        else {
            cout << "Nie ma takiej operacji, wpisz ponownie" << endl;
        }

        cout << endl;

        return 0;
    } while (true);
}