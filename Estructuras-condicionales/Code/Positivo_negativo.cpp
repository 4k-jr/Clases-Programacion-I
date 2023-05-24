#include <iostream>

using namespace std;

/* Elabore un programa, el cual permita al usuario ingresar un numero, y muestre
en pantalla si el numero ingresado es positivo, negativo o cero */

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero > 0){
        cout << "El numero " << numero << " es positivo" << endl;
    } else if (numero < 0){
        cout << "El numero " << numero << " es negativo" << endl;
    } else {
        cout << "El numero " << numero << " es cero" << endl;
    }

    return 0;
}
