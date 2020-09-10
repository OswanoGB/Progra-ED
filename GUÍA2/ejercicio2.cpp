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
    
int index = 0;

for (int i = 0; i < 5; i++)
{
    cout << "\nINGRESE EL NOMBRE DEL ESTUDIANTE #" << i+1 << "\n";
    getline(cin, student[index].name);

    for (int j = 0; j < 5; j++)
    {
        cout << "\nINGRESAR LA NOTA #" << j + 1 << "\n";

        cin >> student[index].grades[j];
        
        totalGrades[index] = student[index].grades[j] + totalGrades[index];
    }

    for (int k = 0; k < 5; k++)
    {

        student[index].averageGrades = totalGrades[index] / 5; 

    }

    cout << "DATOS DEL ESTUDIANTE CON MAYOR PROMEDIO\n";
    cout << "NOMBRE DEL ESTUDIANTE: " << student[index].name;
    cout << "\nPROMEDIO DEL ESTUDIANTE: " << student[index].averageGrades;


index++;

}
}

void average(){

    int higherIndex = 0;
    
    for (int i = 0; i < 5; i++)
    {   

        if (student[higherIndex].averageGrades > student[i+1].averageGrades)
        {
            higherIndex = higherIndex;
        } else
        {
            higherIndex = i+1;
        }

    }
    cout << "DATOS DEL ESTUDIANTE CON MAYOR PROMEDIO\n";
    cout << "NOMBRE DEL ESTUDIANTE: " << student[higherIndex].name;
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