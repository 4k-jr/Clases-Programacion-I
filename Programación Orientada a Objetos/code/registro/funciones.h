#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int mostrarMenu()
{
    system("cls");
    cout << "--------REGISTRO DE ESTUDIANTES Y DOCENTES--------\n";
    cout << "Seleccione una opcion\n";
    cout << "1)Registrar estudiante\n";
    cout << "2)Registrar docente\n";
    cout << "3)Mostrar lista de estudiantes\n";
    cout << "4)Mostrar lista de docentes\n";
    cout << "5)Salir\n";
    cout << "---> ";

    int op;
    cin >> op;
    return op;
}

void registroEstudiante(Estudiante estudiantes[], int& cant_est){
    // Atributos de la clase estudiante
    string nombre, apellido, etnia, carrera, n_carnet, nivel;
    int edad;
    system("cls");
    cout << "------------REGISTRO DE ESTUDIANTE------------\n";
    cout << "Nombre: "; cin >> nombre;
    cout << "Apellido: "; cin >> apellido;
    cout << "Etnia: "; cin >> etnia;
    cout << "Carrera: "; cin >> carrera;
    cout << "Edad: "; cin >> edad;
    cout << "Numero de carnet: "; cin >> n_carnet;
    cout << "Nivel: "; cin >> nivel;

    estudiantes[cant_est].insertarDatos(nombre, apellido, etnia, edad, carrera, n_carnet, nivel);
    cant_est++;

}

void registroDocente(Docente docentes[], int& cant_doc){
    // Atributos de la clase estudiante
    string nombre, apellido, etnia, asignatura, especialidad;
    int edad, experiencia;
    system("cls");
    cout << "------------REGISTRO DE ESTUDIANTE------------\n";
    cout << "Nombre: "; cin >> nombre;
    cout << "Apellido: "; cin >> apellido;
    cout << "Etnia: "; cin >> etnia;    
    cout << "Edad: "; cin >> edad;
    cout << "Asignatura: "; cin >> asignatura;
    cout << "Especialidad: "; cin >> especialidad;
    cout << "Experiencia: "; cin >> experiencia;

    docentes[cant_doc].insertarDatos(nombre, apellido, etnia, edad, asignatura, especialidad, experiencia);
    cant_doc++;

}










































void escribirEnArchivo(string texto)
{
    ofstream out_file; // Output File Stream para escribir (writing)

    // Escribir el archivo
    out_file.open("Prueba.txt", ios::app); // ios::app es lo paralello a "a" que significa append agregar al final del archivo
    out_file << texto << endl;             // agregamos al buffer del stream
    out_file.close();                      // flush el buffer y cerramos. flush el buffer basicamente hace write en el archivo.
}

int leerArchivo(string* data)
{
    ifstream in_file; // Input File Stream  para leer (reading)
                      // Leer el archivo
    int x = 0;
    while (!in_file.eof())
    {
        getline(in_file, data[x], '\n');
        x++;
    }
    in_file.open("Prueba.txt");
    cout << "[Prueba.txt]  >>>" << endl;
    cout << in_file.rdbuf(); // endl funciona como activador de flush()
    // in_file.close() es llamado automaticamente en el destructor de in_file
    return x;
}