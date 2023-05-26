#include <iostream>

using namespace std;

#define PI 3.1416

// Prototipos
int mostrarMenu();
float calcularAreaCirculo(float);
float calcularAreaCuadrado(float);
float introducirDato(string, string);
float calcularAreaRectangulo(float, float);
float calcularAreaTriangulo(float, float);
void mostrarResultado(float, string);

int main()
{
    int op;
    float radio, area, lado, ancho, base, altura;
    do{
        op = mostrarMenu();
        switch(op){
            case 1:
                radio = introducirDato("radio", "circulo");
                area = calcularAreaCirculo(radio);
                mostrarResultado(area, "circulo");
                break;
            case 2:
                lado = introducirDato("lado", "cuadrado");
                area = calcularAreaCuadrado(lado);
                mostrarResultado(area, "cuadrado");
                break;
            case 3:
                ancho = introducirDato("ancho", "rectangulo");
                base = introducirDato("base", "rectangulo");
                area = calcularAreaRectangulo(ancho, base);
                mostrarResultado(area, "rectangulo");
                break;
            case 4:
                altura = introducirDato("altura", "triangulo");
                base = introducirDato("base", "triangulo");
                area = calcularAreaTriangulo(altura, base);
                mostrarResultado(area, "triangulo");
                break;
        }
        
    }while(op != 5);
    
    return 0;
}

int mostrarMenu(){
    system("cls");
    cout << "Selecciones una opcion" << endl;
    cout << "1) Calcular area de un circulo" << endl;
    cout << "2) Calcular area de un cuadrado" << endl;
    cout << "3) Calcular area de un rectangulo" << endl;
    cout << "4) Calcular area de un triangulo" << endl;
    cout << "5) Terminar programa" << endl;

    int opcion;
    cout << "---> ";
    cin >> opcion;

    return opcion;
}

float calcularAreaCirculo(float r){
    return PI * r * r;
}

float calcularAreaCuadrado(float lado){
    return lado * lado;
}

float introducirDato(string x, string figura){
    int dato;
    cout << "\nIngrese el " << x << " del " << figura << ": ";
    cin >> dato;

    return dato;
}

float calcularAreaRectangulo(float a, float b){
    return a * b;
}

float calcularAreaTriangulo(float h, float a){
    return 0.5 * h * a;
}

void mostrarResultado(float valor, string figura){
    cout << "\nEl area del " << figura << " es " << valor << "\n\n";
    system("pause");
}