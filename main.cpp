#include <iostream>
#include <vector>
#include "functions.h";

int main()
{
    shape obj1("Kor", 12);
    shape obj2("Teglalap", 20);
    shape obj3("Negyzet", 8);

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int summe = sum(array, 0, 9);
    std::cout << summe << std::endl;
    return 0;
}
