#include <iostream>

using namespace std;

/*
    Escriba un programa en C++ para determinar el mayor de 5 n�meros ingresados
    por el teclado.
*/

int main()
{
    // Declaramos las variables
    int num, mayor;

    // Iniciamos pidiendo al usuario ingresar el primer n�mero para poder tener un punto de partida
    // e inicializar ese valor c�mo el m�ximo hasta el momento.
    cout << "Ingrese el (1) numero: ";
    cin >> num;

    mayor = num;

    // Inicializamos el contador en 2, ya que anteriormente si ingres� el primer valor
    for(int i = 2; i <= 5; i++){
        cout << "Ingrese el (" << i << ") numero: ";
        cin >> num;

        // En caso de que el valor ingresado sea mayor que el existente en la variable mayor
        // Se va a llevar a cabo la substituci�n
        if(num > mayor)
            mayor = num;
    }

    cout << "\nEl numero mayor es " << mayor;

    return 0;
}
