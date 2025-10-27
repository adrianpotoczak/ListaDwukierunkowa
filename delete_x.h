#pragma once
#include "lista.h"

class deletex {
public:
    void wykonaj(lista& lista) {
        int indeks;
        cout << "Podaj indeks elementu do usuniecia: ";
        cin >> indeks;

        if (!lista.delete_x(indeks)) {
            cout << "Nie udalo sie usunac elementu. Indeks poza zakresem." << endl;
        }
    }
};