#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Prototipos
int mostrarMenu();
int ingresarTransaccion(float[], string[], string[], int);
void mostrarTransacciones(float[], string[], string[], int);


int main(){
    //Declaracion de variables
    float transacciones[10] = {0};
    string fecha[10] = {""};
    string nombre[10] = {""};
    int op = 0, cantidad = 0;

    //Bucle condicionado hasta que el usuario determine terminar la ejecucion del programa
    do{
        // Mostrar Opciones
        op = mostrarMenu();
        // Si el usuario selecciona 1, llamar a la funcion para ingresar transaccion
        if(op == 1){
            cantidad = cantidad + ingresarTransaccion(transacciones, fecha, nombre, cantidad);
        // Si el usuario selecciona 2, mostrar todos los registros existentes
        }else if(op == 2){
            mostrarTransacciones(transacciones, fecha, nombre, cantidad);
        }
    }while(op != 3);

    return 0;
}

// Funcion para mostrar las opciones
int mostrarMenu(){
    system("cls");
    cout << "Seleccione la opcion\n1) Ingresar transaccion\n2) Mostrar transacciones\n3) Terminar programa\n---> ";
    int opcion;
    cin >> opcion;
    return opcion;
}

// Funcion que permite ingresar una transaccion
int ingresarTransaccion(float transacciones[], string fecha[], string nombres[], int cantidad){
    // Verificar si ya se han ingresado 10 transacciones
    if(cantidad == 10){
        cout << "\n\n Ya existen 10 registros \n\n";
        system("pause");
        return 0;
    }
    system("cls");
    float monto; string nombre, fecha_;
    cout << "Ingrese el nombre del cliente: "; cin >> nombre;
    cout << "Ingrese la fecha: "; cin >> fecha_;
    cout << "Ingresar monto: "; cin >> monto;
    float iva = monto * 0.15; float propina = monto * 0.10;
    monto = monto + propina + iva;
    transacciones[cantidad] = monto; nombres[cantidad] = nombre; fecha[cantidad] = fecha_;
    cout << "\n\n El monto a pagar es de " << monto << "\n";
    system("pause");
    return 1;
}

// Funcion para mostrar todas las transacciones existentes
void mostrarTransacciones(float transacciones[], string fecha[], string nombres[], int cantidad){
    if(cantidad == 0){
        cout << "\n\n No hay registros\n\n";
        
    }
    for(int i = 0; i < cantidad; i++){
        cout << "----------------------------\n";
        cout << "Fecha: " << fecha[i] << endl;
        cout << "Nombre del cliente: " << nombres[i] << endl;
        cout << "Monto a pagar:" << transacciones[i] << endl;
        cout << "----------------------------\n";
    }
    system("pause");
}




