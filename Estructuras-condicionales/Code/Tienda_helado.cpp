#include <iostream>

using namespace std;

/*
Hacer un programa en C++ para una tienda de helado, da un descuento por compra a sus
clientes con membresía dependiendo de su tipo, sólo existen tres tipos de membresía, tipo
A, tipo B y tipo C. Los descuentos son los siguientes:

    Tipo A 10% de descuento
    Tipo B 15% de descuento
    Tipo C 20% de descuento
*/

int main()
{
    //Declarar variables
    float monto;
    char membresia;

    //Permitir al usuario ingresar el monto y el tipo de membresia
    cout << "Ingrese el monto a pagar: ";
    cin >> monto;

    cout << "Ingrese el tipo de membresia: ";
    cin >> membresia;

    //Evaluar que tipo de membresia ingreso el usuario utilizando condicionales anidadas
    //Se utiliza el operador O (or) || en caso de que el usuario ingrese la membresia el mayúscula o minúscula.
    if(membresia == 'A' || membresia == 'a'){
        monto = monto - (monto * 0.1);
    }else if(membresia == 'B' || membresia == 'b'){
        monto = monto - (monto * 0.15);
    }else if(membresia == 'C' || membresia == 'c'){
        monto = monto - (monto * 0.2);
    }

    //Se imprime el total a pagar ya aplicado el descuento correspondiente
    cout << "El total a pagar es de " << monto << endl;

    return 0;
}
