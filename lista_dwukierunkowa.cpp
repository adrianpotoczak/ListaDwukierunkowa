#include "lista.h"
#include <iostream>

using namespace std;

lista::lista() {
    glowa = nullptr;
    ogon = nullptr;
    rozmiar = 0;
}

lista::~lista() {}

void lista::push_front(int wartosc) {
    wezel* nowy = new wezel(wartosc);
    if (!glowa) {
        glowa = ogon = nowy;
    }
    else {
        nowy->nastepny = glowa;
        glowa->poprzedni = nowy;
        glowa = nowy;
    }
    rozmiar++;
}
void lista::push_back(int wartosc) {
    wezel* nowy = new wezel(wartosc);
    if (!ogon) {
        glowa = ogon = nowy;
    }
    else {
        ogon->nastepny = nowy;
        nowy->poprzedni = ogon;
        ogon = nowy;
    }
    rozmiar++;
}