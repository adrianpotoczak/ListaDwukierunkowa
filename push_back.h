#pragma once
#include "lista.h"

class pushback {
public:
    void wykonaj(lista& lista) {
        int liczba;
        cout << "Podaj jaka liczbe wstawic na koniec listy: ";
        cin >> liczba;
        lista.push_back(liczba);
    }
};