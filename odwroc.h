#pragma once
#include "IOperacja.h"

class odwroc : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        lista.odwroc();
    }
};