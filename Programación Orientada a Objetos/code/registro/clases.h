#include <iostream>

using namespace std;

class Persona {
    protected:
        string nombre, apellido, etnia;
        int edad;
    public:
        void mostrarInfo(){
            cout << "Nombre: " << nombre << "\n";
            cout << "Apellido: " << apellido << "\n";
            cout << "Etnia: " << etnia << "\n";
            cout << "Edad: " << edad << "\n";
        }
};

class Estudiante : public Persona {
    private:
        string carrera, carnet, nivel;
    public:
        Estudiante(){
            
        }

        void insertarDatos(string nom, string a, string e, int ed, string c, string nc, string nv){
            nombre = nom;
            apellido = a;
            etnia = e;
            edad = ed;
            carrera = c;
            carnet = nc;
            nivel = nv;
        }


        void mostrarInfo(){
            Persona::mostrarInfo();
            cout << "Carrera: " << carrera << "\n";
            cout << "Numero de carnet: " << carnet << "\n";
            cout << "Nivel: " << nivel << "\n";
        }
};

class Docente : public Persona {
    private:
        string asignatura, especialidad;
        int experiencia;
    public:
        Docente(string n, string a, string e, int ed, string ag, string es, int ex){
                nombre = n;
                apellido = a;
                etnia = e;
                edad = ed;
                asignatura = ag;
                especialidad = es;
                experiencia = ex;
            }
        Docente() {

        }

        void mostrarInfo(){
            Persona::mostrarInfo();
            cout << "Asignatura: " << asignatura << "\n";
            cout << "Especialidad: " << especialidad << "\n";
            cout << "Anios de experiencia: " << experiencia << "\n";
        }

        void insertarDatos(string nom, string a, string e, int ed, string ag, string es, int ex){
            nombre = nom;
            apellido = a;
            etnia = e;
            edad = ed;
            asignatura = ag;
            especialidad = es;
            experiencia = ex;
        }
};