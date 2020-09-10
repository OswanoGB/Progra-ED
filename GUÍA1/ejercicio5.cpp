#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

int main() // Main
{
    char cad [7] = {'p', 'u', 'n', 't', 'e', 'r', 'o'};
        // cad [0] = 'p';
        // cad [1] = 'u';
        // cad [2] = 'n';
        // cad [3] = 't';
        // cad [4] = 'e';
        // cad [5] = 'r';
        // cad [6] = 'o';
    char *p = cad;

    cout << "PRIMERA LINEA  " << p[0] << "    " << &p << "    " << *(p+2) << "\n";
    cout << "SEGUNDA LINEA  " << *(p+3) << "\n";
    cout << "TERCERA LINEA  "<< *(p+4) << "    " << *(p+5) << "    " << *(p+6); 

}