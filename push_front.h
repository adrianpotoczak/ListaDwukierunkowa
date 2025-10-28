/**
 * @file push_front.h
 * @brief Definicja klasy operacji 'pushfront' (dodanie na poczatek).
 */

#pragma once
#include "IOperacja.h"

class pushfront : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        int liczba;
        cout << "Podaj liczbe na poczatek listy: ";
        cin >> liczba;
        lista.push_front(liczba);
    }
};