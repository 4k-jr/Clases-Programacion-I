#include <iostream>

using namespace std;

/*
Escriba un programa en c++ para leer la temperatura en grados centígrados
y muestre un mensaje correspondiente a la temperatura como se describe a continuación:

temperatura menor a 0           | Clima helado
temperatura entre 0-10          | Clima muy frio
temperatura entre 10-20         | Clima frio
temperatura entre 20-30         | Temperatura normal
temperatura entre 30-40         | Hace calor
temperatura mayor o igual a 40  | Hace mucho calor

*/

int main()
{
    int temperatura;
    cout << "Ingrese la temperatura en grados centigrados: ";
    cin >> temperatura;

    if(temperatura < 0){
        cout << "Clima helado" << endl;
    } else if(temperatura < 10) {
        cout << "Clima muy frio" << endl;
    }else if(temperatura < 20) {
        cout << "Clima frio" << endl;
    }else if(temperatura < 30) {
        cout << "Temperatura normal" << endl;
    }else if(temperatura < 40) {
        cout << "Hace calor" << endl;
    }else{
        cout << "Hace mucho calor" << endl;
    }

    return 0;
}
