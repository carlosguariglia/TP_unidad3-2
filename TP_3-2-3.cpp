/*
Un empresa nos pide el armado de una App para la toma de pedidos, primero deberá presentar un 
menú de Opciones de 4 productos a) Simple b)medio c)calidad d)Premiun ,luego nos deberá mostrar
 en menú de tipo de envio: 1) normal 2) express 3) Fast Delivery.
A posteriori deberá mostrar x consola el producto seleccionado y el tipo de envío que eligió.
PD. Usar Funciones, manteniendo un Main lo “mas pequeño posible”, desacoplando las funcionalidades. 
Trabajar con la visibilidad de los operadores vistos, while Swtch If ….
*/

#include <iostream>
using namespace std;

enum producto{Simple=1, Medio, Calidad, Premiun};
enum Envio{Normal=1, Express, FastDelivery};

void clearConsole();

string getnombreproduc(int menuprod);
string getnombreenvio(int menuenvio);

int main()
{
    int menuprod, menuenvio;

    do {
        clearConsole();
        cout << "Menu de Opciones: " << endl;
        cout << "1. Simple" << endl;
        cout << "2. Medio" << endl;
        cout << "3. Calidad" << endl;
        cout << "4. Premiun" << endl;
        cout << "Opcion: ";
        cin >> menuprod;
        }  while (menuprod < 1 || menuprod > 4); 
            
    do {
        clearConsole();
        cout << "Menu de tipo de envio: " << endl;
        cout << "1. Normal" << endl;
        cout << "2. Express" << endl;
        cout << "3. Fast Delivery" << endl;
        cout << "Opcion: ";
        cin >> menuenvio;
        } while (menuenvio < 1 || menuenvio > 3);
    
    clearConsole();


    cout << "Su pedido es: " << getnombreproduc(menuprod) << " y su tipo de envio es: " << getnombreenvio(menuenvio) << endl;
    
    return 0;   
}   

string getnombreproduc(int menuprod) {
    
    switch (menuprod)
    {   
        case 1: return "Simple";
        case 2: return "Medio";
        case 3: return "Calidad";
        case 4: return "Premiun";
        default: return "Desconocido";
    }   
}

string getnombreenvio(int menuenvio) {
    
    switch (menuenvio)
    {   
        case 1: return "Normal";
        case 2: return "Express";
        case 3: return "Fast Delivery";
        default: return "Desconocido";
    }   
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