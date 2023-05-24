#include <iostream>

using namespace std;

/*
Hacer un programa en C++ para determinar el promedio de tres notas y determinar si el
estudiante aprobó o no
*/

int main()
{
    //Declarar las variables a utilizar
    int nota1, nota2, nota3, promedio;

    //Permitir al usuario ingresar el valor de cada uno de las notas
    cout << "Ingrese la nota #1: ";
    cin >> nota1;

    cout << "Ingrese la nota #2: ";
    cin >> nota2;

    cout << "Ingrese la nota #3: ";
    cin >> nota3;

    //Calcular el promedio
    promedio = (nota1 + nota2 + nota3) / 3;

    //Evaluar si el promedio es mayor o igual a 60 para determinar si el estudiantes esta aprobado
    if(promedio >= 60) {
        cout << "\nEl estudiante ha aprobado!" << endl;
    }else {
        cout << "\nEl estudiante ha reprobado." << endl;
    }

    return 0;
}
