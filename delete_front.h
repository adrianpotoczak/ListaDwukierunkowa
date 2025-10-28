/**
 * @file delete_front.h
 * @brief Definicja klasy operacji 'deletefront' (usuniecie z poczatku).
 */

#pragma once
#include "IOperacja.h"

class deletefront : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        if (!lista.delete_front()) {
            cout << "Lista jest juz pusta." << endl;
        }
    }
};