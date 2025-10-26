#pragma once
#include "lista.h"

class deletefront {
public:
    void wykonaj(lista& lista) {
        if (!lista.delete_front()) {
            cout << "Lista jest juz pusta." << endl;
        }
    }
};