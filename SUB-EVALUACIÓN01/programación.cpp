#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

int main() 
{  
    char charUser, *p = &charUser;
    cout << "Favor ingrese un caracter" << endl;
    cin >> charUser;

    programacion(*p);

}

void programacion(char *p) 
{
    char cad [12] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', 'a', 'c', 'i', 'o', 'n'};
    
    int counter = 0, total = 0;

        for (int i = 0; i < 12; i++)
        {
            cout << *p << endl;
            
            if (*p == cad[counter])
            {
                total ++;
            }

            counter ++;   
        } 

    if (total == 0)
    {
        cout << "El caracter no se encuentra en la palabra." << endl;
    } else
    {
        cout << "El caracter se encuentra en la palabra " << total << " veces." << endl;
    } 
      
}


