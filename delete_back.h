/**
 * @file delete_back.h
 * @brief Definicja klasy operacji 'deleteback' (usuniecie z konca).
 */

#pragma once
#include "IOperacja.h"

class deleteback : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        if (!lista.delete_back()) {
            cout << "Lista jest juz pusta." << endl;
        }
    }
};