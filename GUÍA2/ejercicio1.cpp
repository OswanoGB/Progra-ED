#include <iostream>
#include<stdlib.h>
using namespace std;

  struct estudiante
    {
        string name;
        string lastName;
        string state;
        float grades[5];
    };
    struct estudiante student;
    void mainCalc();

void mainCalc(){
    
    float totalGrades = 0;
    float average = 0;

    cout << "INGRESE EL NOMBRE DEL ESTUDIANTE\n";
    getline(cin, student.name);
    cout << "INGRESE EL APELLIDO DEL ESTUDIANTE\n";
    getline(cin, student.lastName);

    for (int i = 0; i < 5; i++)
    {
        cout << "\nINGRESAR LA NOTA #" << i + 1 << " ";
        cin >> student.grades[i];
    }

    for (int i = 0; i < 5; i++)
    {
        totalGrades = student.grades[i] + totalGrades;
    }

    average = totalGrades / 5;

    if (average >= 6)
    {
        student.state = "APROBADO";
    } else
    {
        student.state = "REPROBADO";
    }

    cout << "NOMBRE DEL ESTUDIANTE: " << student.name;
    cout << "\nAPELLIDO DEL ESTUDIANTE: " << student.lastName;
    cout << "\nESTADO DEL ESTUDIANTE: " << student.state;
    cout << "\nPROMEDIO DEL ESTUDIANTE: " << average;
}

int main() // Main
{
    student.name = "Indefinido";
    student.lastName = "Indefinido";
    student.state = "Indefinido";

        bool continuar = true;
    do{
        int opcion = 0;
        cout << "\nBIENVENIDO! ¿Qué desea realizar?";
        cout << "\n1. Ingresar y consultar datos\n";
        cout << "2. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        switch(opcion){
            case 1: mainCalc(); break;
            case 2: continuar = false;
        }
    }while(continuar);

    return 0;
}