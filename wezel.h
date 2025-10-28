/**
 * @file wezel.h
 * @brief Definicja klasy 'wezel', pojedynczego elementu listy.
 */

#pragma once
using namespace std;

class wezel {
public:
    int dane;
    wezel* nastepny;
    wezel* poprzedni;

    wezel(int wartosc) {
        dane = wartosc;
        nastepny = nullptr;
        poprzedni = nullptr;
    }
};