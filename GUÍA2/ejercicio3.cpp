#include <iostream>
#include<stdlib.h>
using namespace std;
        
    int n;
    int suma = 0;
void digitalRoot();

void digitalRoot()
{
    suma = 0;
    
    while (n > 0)
    {
    suma = suma + n%10;
    n = n/10;

    }

    if (suma < 10)
    {
        cout << "La raiz digital del número entero ingresado es: " << suma << "\n";
    } else
    {
        n = suma;
        digitalRoot();
    }
    
}

int main() // Main
{ 

        cout << "Ingrese el numero entero del cual desea obtener la raiz digital\n";
        cin >> n; 

        bool continuar = true;

    do{
        int opcion = 0;
        cout << "\nBIENVENIDO! Que desea realizar?";
        cout << "\n1. Calcular Raiz digital del numero entero ingresado";
        cout << "\n2. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        switch(opcion){

            case 1: digitalRoot(); break;
            case 2: continuar = false;
        }
    }while(continuar);

    return 0;
}