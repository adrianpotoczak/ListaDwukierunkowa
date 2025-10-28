/**
 * @file odwroc.h
 * @brief Definicja klasy operacji 'odwroc' (wyswietlenie od tylu).
 */

#pragma once
#include "IOperacja.h"

class odwroc : public IOperacja {
public:
    void wykonaj(lista& lista) override {
        lista.odwroc();
    }
};