#include <iostream>

using namespace std;

/*Elabore un programa, que indique si el número
ingresado por el usuario es par o impar*/

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero % 2 == 0){
        cout << "El numero " << numero << " es par" << endl;
    } else {
        cout << "El numero " << numero << " es impar" << endl;
    }

    return 0;
}
