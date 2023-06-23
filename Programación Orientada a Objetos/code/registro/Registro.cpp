
#include <iostream>
#include "clases.h"
#include "funciones.h"

using namespace std;



int main(){
    

    Estudiante estudiantes[20];
    Docente docentes[10];
    
    int cant_est = 0, cant_doc = 0, op = 0;

    

    do {   

         op = mostrarMenu();

        switch (op)
        {
        case 1:
            registroEstudiante(estudiantes, cant_est);
            break;
        case 2:
            registroDocente(docentes, cant_doc);
            break;
        case 3:
            system("cls");
            cout << "------------LISTA DE ESTUDIANTE------------\n";
            for(int i = 0; i < cant_est; i++){
                estudiantes[i].mostrarInfo();
                cout << "-----------------------------\n";
            }
            system("pause");
            break;
        case 4:
            system("cls");
            cout << "------------LISTA DE DOCENTES------------\n";
            for(int i = 0; i < cant_doc; i++){
                docentes[i].mostrarInfo();
                cout << "-----------------------------\n";
            }
            system("pause");
            break;        
        case 5:
            break;
        default:
            system("cls");
            cout << "------------OPCION INVALIDO------------\n";
            system("pause");
            break;
        }

    }while(op != 5);

    return 0;
}

