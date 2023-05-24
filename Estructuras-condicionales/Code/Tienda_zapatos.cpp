#include <iostream>

using namespace std;

/*
Hacer un programa en C++ para una tienda de zapatos que tiene una promoci�n de
descuento para vender al mayor, esta depender� del n�mero de zapatos que se compren. Si
son m�s de diez, se les dar� un 10% de descuento sobre el total de la compra; si el n�mero
de zapatos es mayor de veinte, pero menor de treinta, se le otorga un 20% de descuento; y
si son m�s treinta zapatos se otorgar� un 40% de descuento. El precio de cada zapato es de
$80.
*/

int main()
{
    //Declarar las variables a utilizar.
    int cantidad, total;

    //Permitir al usuario ingresar la cantidad de zapatos a comprar
    cout << "Ingrese la cantidad de zapatos: ";
    cin >> cantidad;

    //Se calcula el total a pagar. se multiplica la cantidad de zapatos a comprar por el precio del mismo, el cual es de $80 seg�n el ejercicio.
    total = cantidad * 80;

    //Se evalua la cantidad de zapatos para determinar el descuento a aplicar
    if(cantidad > 30){
        total = total - (total * 0.4);
    } else if(cantidad > 20) {
        total = total - (total * 0.2);
    } else if (cantidad > 10) {
        total = total - (total * 0.1);
    }

    cout << "\nEl total a pagar es de: " << total << endl;

    return 0;
}
