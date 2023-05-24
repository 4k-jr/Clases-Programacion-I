#include <iostream>

using namespace std;

/*
Hacer un programa en C++ para una tienda de zapatos que tiene una promoción de
descuento para vender al mayor, esta dependerá del número de zapatos que se compren. Si
son más de diez, se les dará un 10% de descuento sobre el total de la compra; si el número
de zapatos es mayor de veinte, pero menor de treinta, se le otorga un 20% de descuento; y
si son más treinta zapatos se otorgará un 40% de descuento. El precio de cada zapato es de
$80.
*/

int main()
{
    //Declarar las variables a utilizar.
    int cantidad, total;

    //Permitir al usuario ingresar la cantidad de zapatos a comprar
    cout << "Ingrese la cantidad de zapatos: ";
    cin >> cantidad;

    //Se calcula el total a pagar. se multiplica la cantidad de zapatos a comprar por el precio del mismo, el cual es de $80 según el ejercicio.
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
