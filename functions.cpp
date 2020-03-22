#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <vector>
#include "functions.h"

/* AUFGABE 1---------------------------------------------------- */

template<typename T>
 T sum(const T array[10], int start, int end, T Anfangswert = 10)
 {
     T summe = 0;
     for (auto elem : array)
     {
         summe = summe + elem;
     }
     summe += Anfangswert;
     return summe;
 }

 /* AUFGABE 2---------------------------------------------------- */
 template<typename T>
 T sum_lambda(const T array[10], int start, int end, T Anfangswert = 10)
 {
     int s = 0;
     for_each(array.begin(), array.end(), [&s](int x) {s += x; });
     s += Anfangswert;
     return s;
 }

 /* AUFGABE 3---------------------------------------------------- */

int shape::get_flache() { return this->Flache; }

std::string shape::get_name() { return this->name; }

void shape::set_values(std::string name, int flache)
{
    this->name = name;
    this->Flache = flache;
}

template<typename T, typename Funktion>
void apply(T v, Funktion f)
{
    for_each(v.begin(), v.end(), f(x));
}

void shape::multiplizieren(int& elem, int x) { elem = elem * x; }

void shape::teilen(int& elem, int y) { elem = elem / y; }

std::string shape::into_string(shape obj)
{
    std::string str = "";
    str = str + this->name;
    str = str + std::to_string(this->Flache);
    return str;
}
