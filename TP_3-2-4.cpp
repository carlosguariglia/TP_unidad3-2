/*
Hacer un programa en C++ que lea dos números x e y, luego hacer la 
diferencia x - y; si la diferencia es menor o igual a 10, entonces
escribir todos los números comprendidos entre y y x
*/

#include <iostream>
using namespace std;

void diferencia();
void clearConsole();

int main()
{

int menu;
do {
    clearConsole();
    cout << "*****************************" << endl;
    cout << "Diferencia de dos números" << endl;
    cout << "Menu de Opciones: " << endl;
    cout << "1. Ingresar Numeros para x e y" << endl;
    cout << "2. Salir" << endl;
    cout << "Opcion: ";
    cin >> menu;
    switch (menu)
        {
        case 1:
            diferencia();
            break;
        case 2:
            cout << "Gracias por usar el programa" << endl;
            return 0;
            break;
        default:
            cout << "Opcion Invalida" << endl;
            cout << "Presione Enter para continuar..." << endl;
            cin.ignore();
            cin.get();
            break;
        }
    } while (menu != 2);  

return 0;
}

void diferencia()
{
    int x, y, dif;
    cout << "Ingrese X: ";
    cin >> x;
    cout << "Ingrese Y: ";
    cin >> y;
    dif = x - y;
    cout << "La diferencia es: " << dif << endl;
    if ((dif <= 10) && (dif >= 0))
    {   
        cout << "Los numeros entre " << y << " y " << x << " son: " << endl;
        for (int i = y; i <= x; i++)
        {   cout << i << " ";
        }
    }
    cout << endl << "Presione Enter para continuar..." << endl;
    cin.ignore();
    cin.get();
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