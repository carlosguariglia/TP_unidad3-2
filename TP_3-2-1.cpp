/*     
        a. Hacer un programa en C++ que convierta centímetros a pulgadas Celsius a Farenheit y libras a kilogramos
*/

#include <iostream>
using namespace std;

enum opciones{CENTIMETROS_PULGADAS=1, CELCIUS_FAHRENHEIT, LIBRAS_KILOGRAMOS, SALIR};

void pauseConsole();
void clearConsole();
float centimetrosaPulgadas(float centimetros);
float celciusaFarenheit(float celsius);
float librasaKilogramos(float libras);


int main()
{
    float centimetros, pulgadas, celsius, farenheit, kilogramos, libras;
    opciones menu;
    int opc;
    do {
        clearConsole();
        cout << "*****************************" << endl;
        cout << "*\tMENU                *" << endl;
        cout << "*****************************" << endl;
        cout << "* 1. Centímetros a pulgadas *" << endl;
        cout << "* 2. Celcius a Farenheit    *" << endl;
        cout << "* 3. Libras a kilogramos    *" << endl;
        cout << "* 4. Salir                  *" << endl;
        cout << "*****************************" << endl;
        cout << "Opciòn: ";
        cin >> opc;
             //TODO revisar que el numero ingresado sea un int, si el usuario ingresa caracteres explota como un sapo

        menu = static_cast<opciones>(opc);

        switch (menu) {
            case CENTIMETROS_PULGADAS: 
                cout << "Ingrese los Centímetros: ";
                cin >> centimetros;
                cout << centimetros << " centímetro/s equivale/n a " << centimetrosaPulgadas(centimetros) << " pulgada/s: " << endl;
                cout << "Presione Enter para continuar..." << endl;
                //cin.sync();
                cin.ignore();
                pauseConsole();
                break;
            case CELCIUS_FAHRENHEIT:
                cout << "Ingrese los Grados Celcius: ";
                cin >> celsius;
                cout << celsius << " Grados Celcius equivale/n a " << celciusaFarenheit(celsius) << " Farenheit " << endl;
                cout << "Presione Enter para continuar..." << endl;
                cin.ignore();
                pauseConsole();
                break;
            case LIBRAS_KILOGRAMOS:
                cout << "Ingrese las Libras: ";
                cin >> libras;
                cout << libras << " libras equivale/n a " << librasaKilogramos(libras) << " kilogramos " << endl;
                cout << "Presione Enter para continuar..." << endl;
                cin.ignore();
                pauseConsole();
                break;
            case SALIR:
                break;
            default:
                cout << "Opciòn Invalida" << endl;
                cout << "Presione Enter para continuar..." << endl;
                cin.ignore();
                //cin.sync();
                pauseConsole();
                break;
        }
    } while (opc != 4);
    return 0;
}


void pauseConsole() {
    std::cin.get();
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

float centimetrosaPulgadas(float centimetros)
{
    return centimetros / 2.54;
}

float celciusaFarenheit(float celsius)
{
    return (celsius * 1.8) + 32;
}

float librasaKilogramos(float libras)
{
    return libras * 0.4536;
}