#pragma once

#include <string>
#include "IOperacja.h"
#include "push_front.h"
#include "push_back.h"
#include "push_x.h"
#include "delete_front.h"
#include "delete_back.h"
#include "delete_x.h"
#include "odwroc.h"
#include "clear.h"

using namespace std;

class FabrykaOperacji {
public:
    IOperacja* stworzOperacje(string wybor) {
        if (wybor == "poczatek") {
            return new pushfront();
        }
        else if (wybor == "koniec") {
            return new pushback();
        }
        else if (wybor == "indeks") {
            return new pushx();
        }
        else if (wybor == "usun_poczatek") {
            return new deletefront();
        }
        else if (wybor == "usun_koniec") {
            return new deleteback();
        }
        else if (wybor == "usun_indeks") {
            return new deletex();
        }
        else if (wybor == "odwroc") {
            return new odwroc();
        }
        else if (wybor == "usun_liste") {
            return new clear();
        }
        else {
            return nullptr;
        }
    }
};