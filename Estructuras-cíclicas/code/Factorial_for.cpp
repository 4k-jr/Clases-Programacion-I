#include <iostream>

using namespace std;

/*
Escriba un programa en C++ para calcular el factorial de un número
*/

int main()
{
    // Declaramos las variables
    // Inicializamos la variable factorial en 1 ya que como el factorial es una multiplicación sucesiva, si inicializaramos en 0, el resultado siempre sería 0.
    int num, factorial = 1;

    // Permitimos al usuario ingresar un numero
    cout << "Ingrese un numero: ";
    cin >> num;

    // Definimos el for, inicializando el contador en el número ingresado por el usuario
    // Este ciclo se debe ejecutar mientras el contador sea mayor o igual a 1, por lo que el contador debe decrementar
    // razón por la cual utilizamos el i--
    for(int i = num; i >= 1; i--){
        // Mostrar el valor del contador
        cout << i;

        // En caso de que el contador sea diferente a 1, mostrar el signo de la multiplicación
        // Para lograr la salida de la siguiente manera 7 x 6 x 5...
        if(i != 1)
            cout << " X ";

        // multiplicamos al valor existente en factorial, el valor del contador
        // Esta operación es igual a tener factorial = factorial * i
        factorial *= i;
    }

    // La expresión "\n" Agrega un salto de línea
    cout << "\nEl factorial de " << num << " es " << factorial << endl;
    return 0;
}
