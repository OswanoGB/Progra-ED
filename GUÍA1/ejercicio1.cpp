#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

int main() // Main
{
    int entero = 0;
    int *p = &entero;
    cout << "Ingrese el valor entero";
    std::cin >> entero;
    cout << endl;
    cout << "El valor ingresado es: " << entero;
    cout << endl;
    *p = 100;
    cout << "El nuevo valor es: " << entero;
}
