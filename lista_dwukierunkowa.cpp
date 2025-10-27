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

void lista::wyswietl() {
    cout << "Lista:" << endl;

    wezel* temp = glowa;
    while (temp) {
        cout << temp->dane << " ";
        temp = temp->nastepny;
    }
}

bool lista::push_x(int indeks, int wartosc) {
    if (indeks < 0 || indeks > rozmiar) {
        return false;
    }

    if (indeks == 0) {
        push_front(wartosc);
        return true;
    }

    if (indeks == rozmiar) {
        push_back(wartosc);
        return true;
    }
    wezel* nowy = new wezel(wartosc);

    wezel* obecny = glowa;
    for (int i = 0; i < indeks; ++i) {
        obecny = obecny->nastepny;
    }

    wezel* poprzedni = obecny->poprzedni;

    nowy->nastepny = obecny;
    nowy->poprzedni = poprzedni;
    poprzedni->nastepny = nowy;
    obecny->poprzedni = nowy;

    rozmiar++;
    return true;
}
bool lista::delete_front() {
    if (glowa == nullptr) {
        return false;
    }

    wezel* do_usuniecia = glowa;

    if (glowa == ogon) { 
        glowa = nullptr;
        ogon = nullptr;
    }
    else {
        glowa = glowa->nastepny;
        glowa->poprzedni = nullptr;
    }

    delete do_usuniecia;
    rozmiar--;
    return true;
}
bool lista::delete_back() {
    if (ogon == nullptr) {
        return false;
    }

    wezel* do_usuniecia = ogon;

    if (glowa == ogon) {
        glowa = nullptr;
        ogon = nullptr;
    }
    else {
        ogon = ogon->poprzedni;
        ogon->nastepny = nullptr;
    }

    delete do_usuniecia;
    rozmiar--;
    return true;
}

bool lista::delete_x(int indeks) {
    if (indeks < 0 || indeks >= rozmiar) {
        return false;
    }

    if (indeks == 0) {
        return delete_front();
    }
    if (indeks == rozmiar - 1) {
        return delete_back();
    }

    wezel* obecny = glowa;
    for (int i = 0; i < indeks; ++i) {
        obecny = obecny->nastepny;
    }

    wezel* poprzedni = obecny->poprzedni;
    wezel* nastepny = obecny->nastepny;

    poprzedni->nastepny = nastepny;
    nastepny->poprzedni = poprzedni;

    delete obecny;
    rozmiar--;
    return true;
}