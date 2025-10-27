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