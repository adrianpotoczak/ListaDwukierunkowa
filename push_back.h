/**
 * @file push_back.h
 * @brief Definicja klasy operacji 'pushback' (dodanie na koniec).
 */

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