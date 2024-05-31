/*
Hacer un programa en C++ que ayude a una empresa a incrementar los salarios de los trabajadores de la siguiente manera:

Tipo de salario %
De 0 a $9 000 20%
De $9 000 a $15 000 10%
De $15 000 a $20 000 5%
Más de $20 000 3%
*/

#include <iostream>
using namespace std;

void clearConsole();

int main()
{
    float salario, aumento, porcentaje;
    clearConsole();
    cout << "Ingrese el valor del Salario: ";
    cin >> salario;

    if (salario <= 9000)
    {   porcentaje = 20;
    }
    else if (salario <= 15000)
    {
        porcentaje = 10;
    }
    else if (salario <= 20000)
    {
        porcentaje = 5;
    }
    else
    {
        porcentaje = 3;
    }   
    aumento = (salario * porcentaje) / 100;
    cout << "El aumento es de: " << aumento << endl;
    cout << "El nuevo Salario es de: " << (salario + aumento) << endl;

    return 0;

}   

void clearConsole() {
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN64)
        system("cls");
    #endif
}
