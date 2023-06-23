#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
        float altura, peso;
    public:
        // Setters y Getters
        void setNombre(string n){ nombre = n;}
        void setEdad(int e){ edad = e; }
        void setAltura(float a){ altura = a; }
        void setPeso(float p){ peso = p; }

        string getNombre(){ return nombre; }
        int getEdad(){ return edad; }
        float getAltura(){ return altura; }
        float getPeso(){ return peso; }

        void mostrarIMC(){
            cout << "IMC es de " << peso/(altura*altura) << "\n\n\n"; 
        }

};



int main(){
    
    Persona personas[3];

    string nombre;
    int edad;
    float altura, peso;

    for(int i = 0; i < 3; i++){
        system("cls");
        cout << "Ingrese el nombre de la persona #" << i+1 << ": ";
        cin >> nombre;

        cout << "Ingrese su edad: ";
        cin >> edad;

        cout << "Ingrese su altura (Metros): ";
        cin >> altura;

        cout << "Ingrese su peso (KG): ";
        cin >> peso;

        personas[i].setNombre(nombre);
        personas[i].setEdad(edad);
        personas[i].setAltura(altura);
        personas[i].setPeso(peso);
    }

    system("cls");
    cout << "---------------RESULTADOS---------------";
    for(int i = 0; i < 3; i++){
        cout << "\n" << personas[i].getNombre() << " tiene " 
        << personas[i].getEdad() << " anios y mide "
        << personas[i].getAltura() << " metros con un peso de "
        << personas[i].getPeso() << "\n";
        personas[i].mostrarIMC();
    }

    return 0;
}


