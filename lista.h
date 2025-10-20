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
};