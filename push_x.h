#pragma once
#include "lista.h"

class pushx {
public:
    void wykonaj(lista& lista) {
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