#pragma once
#include "IOperacja.h"

class clear : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        lista.clear();
        std::cout << "Lista zostala wyczyszczona." << std::endl;
    }
};