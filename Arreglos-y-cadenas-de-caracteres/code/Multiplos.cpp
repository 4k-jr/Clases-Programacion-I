/*
Crea un array o arreglo unidimensional donde tu le indiques el tamaño por teclado 
y crear un ciclo que rellene el array o arreglo con los múltiplos de un numero pedido 
por teclado. Por ejemplo, si defino un array de tamaño 5 y elijo un 3, el array contendrá 3, 6, 9, 12, 15.
 Muéstralos por pantalla usando otro ciclo.
 */

#include <iostream>

// Importamos esta biblioteca para utilizar caracteres especiales 
#include <locale>
using namespace std;


int main(){
    // Esta función nos permite utilizar carácteres del español
    setlocale(LC_ALL, "spanish");

    int N = 0, num = 0;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> N;

    int arreglo[N];

    cout << "Ingrese un número: ";
    cin >> num;

    // Rellenar el arreglo
    for(int i = 0; i < N; i++){
        arreglo[i] = num * (i+1);
    }

    // Mostrar el arreglo
    for(int i = 0; i < N; i++){
        cout << arreglo[i] << "\t";
    }

    return 0;
}

