#include <iostream>

using namespace std;

/*Escriba un programa en C++ que permita el ingreso de una calificación y
muestre su descripción equivalente según lo siguiente:

E - Excelente
M - Muy bueno
B - Bueno
R - Regular
A - Aplazado

En caso de que se ingrese alguna otra letra, el programa debe mostrar un
mensaje indicando que la calificacion no es valida

*/

int main()
{
    char calificacion;

    cout << "Ingrese la calificacion: ";
    cin >> calificacion;

    if(calificacion == 'E' || calificacion == 'e'){
        cout << "Excelente" << endl;
    } else if(calificacion == 'M' || calificacion == 'm'){
        cout << "Muy bueno" << endl;
    } else if(calificacion == 'B' || calificacion == 'b'){
        cout << "Bueno" << endl;
    } else if(calificacion == 'R' || calificacion == 'r'){
        cout << "Regular" << endl;
    } else if(calificacion == 'A' || calificacion == 'a'){
        cout << "Aplazado" << endl;
    } else {
        cout << "La calificacion ingresada no es valida" << endl;
    }

    return 0;
}
