#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

int main() // Main
{
    int entero1 = 0, entero2 = 0;
    int *p1 = &entero1;
    int *p2 = &entero2;
    entero1 = 30;
    entero2 = 31;

    cout << "El valor del primer entero es es: " << *p1;
    cout << endl;
    cout << "La dirección del primer entero es: " << p1;
    cout << endl;
    cout << "El valor del segundo entero es: " << *p2;
    cout << endl;
    cout << "La dirección del segundo entero es: " << p2;
    cout << endl;
}