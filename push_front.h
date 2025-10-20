#pragma once
#include "lista.h"


class pushfront {
public:
    void wykonaj(lista& lista) {
        int liczba;
        cout << "Podaj liczbe na poczatek listy: ";
        cin >> liczba;
        lista.push_front(liczba);
    }
};