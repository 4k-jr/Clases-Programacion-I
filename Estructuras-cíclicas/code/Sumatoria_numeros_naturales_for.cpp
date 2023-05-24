#include <iostream>

using namespace std;

/*
    Escriba un programa en C++ para mostrar n cantidad de n�meros naturales y su
    sumatoria.
*/

int main()
{
    // Declaramos las variables
    // Inicializamos la variable sumatoria en 0 porque a este le vamos a ir sumando los dem�s n�meros del contador.
    int num, sumatoria = 0;

    // Permitimos al usuario ingresar un numero
    cout << "Ingrese un numero: ";
    cin >> num;

    // Definimos el for, inicializando el contador en 1, y deteni�ndolo cuando este llegue hasta el n�mero que ingres� el usuario
    for(int i = 1; i <= num; i++){
        // La expresi�n "\t" agrega un espacio de tabulaci�n (4 espacios)
        cout << i << "\t";

        // Sumamos al valor existente en sumatoria, el valor del contador
        // Esta operaci�n es igual a tener sumatoria = sumatoria + i
        sumatoria += i;
    }

    // La expresi�n "\n" Agrega un salto de l�nea
    cout << "\nLa suma es igual a " << sumatoria << endl;

    return 0;
}
