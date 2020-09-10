#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

void suma(int entero1, int entero2, int resultado) 
{
    resultado = entero1 + entero2;
    cout << "El resultado de la suma es: " << resultado << endl;    
}

void resta(int entero1, int entero2, int resultado) 
{
    resultado = entero1 - entero2;
    cout << "El resultado de la resta es: " << resultado << endl;              
}

void multiplicacion(int entero1, int entero2, int resultado) 
{
    resultado = entero1 * entero2;
    cout << "El resultado de la multiplicacion es: " << resultado << endl;               
}

void division(int entero1, int entero2, int resultado) 
{
    if (entero2 == 0)
    {
        cout << "ERROR. Division entre 0 no permitida." << endl;
    } else
    {
        resultado = entero1 / entero2;
        cout << "El resultado de la division es: " << resultado << endl; 
    }           
}

int main() 
{
    int ent1 = 0, ent2 = 0;
    int resultado;
    int *p = &resultado;
    cout << "Favor ingrese el primer entero" << endl;
    cin >> ent1;
    cout << "Favor ingrese el segundo entero" << endl;
    cin >> ent2;

    suma(ent1, ent2, *p);
    resta(ent1, ent2, *p);
    multiplicacion(ent1, ent2, *p);
    division(ent1, ent2, *p);
}