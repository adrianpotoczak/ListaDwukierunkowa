#pragma once
#include "lista.h"

class deleteback {
public:
    void wykonaj(lista& lista) {
        if (!lista.delete_back()) {
            cout << "Lista jest juz pusta." << endl;
        }
    }
};