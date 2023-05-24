#include <iostream>

using namespace std;

int main()
{

    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    float clase[N][3];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            cout << "Ingrese la calificacion #" << j+1 << " para el estudiante " << i+1 << ": ";
            cin >> clase[i][j];
        }
        cout << endl;
    }

    float suma_estudiante = 0, suma_total = 0, mayor = 0, promedio_estudiante, indice_mayor = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            suma_estudiante += clase[i][j];
        }

        promedio_estudiante = suma_estudiante/3;
        cout << "El promedio del estudiante #"<< i+1 << "es " << promedio_estudiante << endl;

        suma_total += promedio_estudiante;

        if(promedio_estudiante > mayor){
            indice_mayor = i;
            mayor = promedio_estudiante;
        }

        suma_estudiante = 0;
    }

    cout << "El promedio general es de " << suma_total/N << endl;
    cout << "El indice del estudiante con mayor promedio es " << indice_mayor << endl;

    return 0;
}
