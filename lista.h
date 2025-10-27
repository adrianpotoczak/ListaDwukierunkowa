#pragma once
#include "wezel.h"

class lista {
private:
    wezel* glowa;
    wezel* ogon;
    int rozmiar;

public:
    lista();
    ~lista();

    void push_front(int wartosc);
    void push_back(int wartosc);
    void wyswietl();
    bool push_x(int indeks, int wartosc);
    bool delete_front();
    bool delete_back();
    bool delete_x(int indeks);
    void odwroc();
    void clear();
};