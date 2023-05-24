#include <iostream>

using namespace std;

/*
    Escriba un programa en C++ para mostrar n cantidad de números naturales y su
    sumatoria.
*/

int main()
{
    // Declaramos las variables
    // Inicializamos la variable sumatoria en 0 porque a este le vamos a ir sumando los demás números del contador.
    int num, sumatoria = 0;

    // Permitimos al usuario ingresar un numero
    cout << "Ingrese un numero: ";
    cin >> num;

    // Definimos el for, inicializando el contador en 1, y deteniéndolo cuando este llegue hasta el número que ingresó el usuario
    for(int i = 1; i <= num; i++){
        // La expresión "\t" agrega un espacio de tabulación (4 espacios)
        cout << i << "\t";

        // Sumamos al valor existente en sumatoria, el valor del contador
        // Esta operación es igual a tener sumatoria = sumatoria + i
        sumatoria += i;
    }

    // La expresión "\n" Agrega un salto de línea
    cout << "\nLa suma es igual a " << sumatoria << endl;

    return 0;
}
