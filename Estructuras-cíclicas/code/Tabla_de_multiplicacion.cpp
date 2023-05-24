#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "\t\t\tTabla de multiplicacion" << endl << endl;
    cout << "Ingrese el numero a mostrar: ";
    cin >> num;

    for(int i = 1; i <= 12; i++){
        cout << num << " x " << i << " = " << num*i << "\t";
        if(i%2==0)
            cout << endl;
    }
    return 0;
}
