#pragma once
#include "lista.h"
#include <iostream>

class clear {
public:
    void wykonaj(lista& lista) {
        lista.clear();
        std::cout << "Lista zostala wyczyszczona." << std::endl;
    }
};