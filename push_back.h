#pragma once
#include "IOperacja.h"

class pushback : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        int liczba;
        cout << "Podaj jaka liczbe wstawic na koniec listy: ";
        cin >> liczba;
        lista.push_back(liczba);
    }
};