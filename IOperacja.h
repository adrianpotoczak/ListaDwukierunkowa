/**
 * @file IOperacja.h
 * @brief Definicja interfejsu (klasy abstrakcyjnej) 'IOperacja'.
 */

#pragma once
#include "lista.h"
#include <iostream>

using namespace std;

class IOperacja {
public:
    virtual void wykonaj(lista& lista) = 0;
    virtual ~IOperacja() {}
};