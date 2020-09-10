#include <iostream>
#include<stdlib.h>
using namespace std;

  struct estudiante
    {
        string name;
        string lastName;
        string state;
        float averageGrades;
        float grades[5];
    };
    struct estudiante student[5];
    float totalGrades[5];
    void mainCalc();
    void average();

void mainCalc(){
    

for (int i = 0; i < 5; i++)
{
    cout << "INGRESE EL NOMBRE DEL ESTUDIANTE #" << i+1 << "\n";
    getline(cin, student[i].name);
    cout << "INGRESE EL APELLIDO DEL ESTUDIANTE #" << i+1 << "\n";
    getline(cin, student[i].lastName);

    for (int i = 0; i < 5; i++)
    {
        cout << "\nINGRESAR LA NOTA #" << i + 1 << "\n";
        cin >> student[i].grades[i];
    }

    for (int i = 0; i < 5; i++)
    {
        totalGrades[i] = student[i].grades[i] + totalGrades[i];
    }

    for (int i = 0; i < 5; i++)
    {
        student[i].averageGrades = totalGrades[i] / 5;
    }

    // if (averageGrades[i] >= 6)
    // {
    //     student[i].state = "APROBADO";
    // } else
    // {
    //     student[i].state = "REPROBADO";
    // }

}
}

    int higherIndex = 0;

void average(){
    for (int i = 0; i < 5; i++)
    {   

        if (student[i].averageGrades > student[i].averageGrades)
        {
            higherIndex = i;
        } else
        {
            higherIndex = i+1;
        }

    }
    cout << "DATOS DEL ESTUDIANTE CON MAYOR PROMEDIO\n";
    cout << "NOMBRE DEL ESTUDIANTE: " << student[higherIndex].name;
    cout << "\nAPELLIDO DEL ESTUDIANTE: " << student[higherIndex].lastName;
    cout << "\nPROMEDIO DEL ESTUDIANTE: " << student[higherIndex].averageGrades;
    
}

int main() // Main
{
        bool continuar = true;
    do{
        int opcion = 0;
        cout << "\nBIENVENIDO! ¿Qué desea realizar?";
        cout << "\n1. Ingresar y consultar datos";
        cout << "\n2. Consultar estudiante con mayor promedio\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        switch(opcion){
            case 1: mainCalc(); break;
            case 2: average(); break;
            case 3: continuar = false;
        }
    }while(continuar);

    return 0;
}