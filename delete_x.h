#pragma once
#include "IOperacja.h"

class deletex : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        int indeks;
        cout << "Podaj indeks elementu do usuniecia: ";
        cin >> indeks;

        if (!lista.delete_x(indeks)) {
            cout << "Nie udalo sie usunac elementu. Indeks poza zakresem." << endl;
        }
    }
};