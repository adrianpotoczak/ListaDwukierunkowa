#include <iostream>
#include <string>
#include "lista.h"
#include "push_front.h"
#include "push_back.h"
#include "push_x.h"
#include "delete_front.h"
#include "delete_back.h"
#include "delete_x.h"

using namespace std;

int main() {
    lista lista;
    string wybor;

    do {
        lista.wyswietl();

        cout << "poczatek - dodaj liczbe na poczatek listy" << endl;
        cout << "koniec - dodaj liczbe na koniec listy" << endl;
        cout << "indeks - dodaj liczbe pod wskazany indeks" << endl;
		cout << "usun_poczatek - usun liczbe z poczatku listy" << endl;
        cout << "usun_koniec - usun liczbe z konca listy" << endl;
        cout << "usun_indeks - usun liczbe spod indeksu" << endl;
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
        else if (wybor == "indeks") {
            pushx akcja;
            akcja.wykonaj(lista);
        }
        else if (wybor == "usun_poczatek") {
            deletefront akcja;
            akcja.wykonaj(lista);
        }
        else if (wybor == "usun_koniec") {
            deleteback akcja;
            akcja.wykonaj(lista);
        }
        else if (wybor == "usun_indeks") {
            deletex akcja;
            akcja.wykonaj(lista);
        }
        else {
            cout << "Nie ma takiej operacji, wpisz ponownie" << endl;
        }

        cout << endl;
    } while (true);

    return 0;
}