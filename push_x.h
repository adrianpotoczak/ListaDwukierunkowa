/**
 * @file push_x.h
 * @brief Definicja klasy operacji 'pushx' (dodanie na indeks).
 */

#pragma once
#include "IOperacja.h"

class pushx : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        int liczba;
        int indeks;

        cout << "Podaj liczbe, ktora chcesz wstawic: ";
        cin >> liczba;
        cout << "Podaj indeks, pod ktory chcesz wstawic element: ";
        cin >> indeks;
        if (!lista.push_x(indeks, liczba)) {
            cout << "Indeks poza zakresem." << endl;
        }
    }
};