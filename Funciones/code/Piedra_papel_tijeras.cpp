#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
// Prototipos
int introducirOpcion(int);
int verificarGanadorRonda(int, int);
void mostrarGanador(int);
int generarNumeroAleatorio(int, int);

int main(){
    cout << "-------------Juego Piedra, Papel y Tijera------------" << endl;
    int jugador1, jugador2, ganadorRonda, j1 = 0, j2 = 0;

    
    while(j1 != 3 && j2 != 3){
        jugador1 = introducirOpcion(1);
        jugador2 = generarNumeroAleatorio(1, 3);
        ganadorRonda = verificarGanadorRonda(jugador1, jugador2);
        mostrarGanador(ganadorRonda);
        if(ganadorRonda == 1){
            j1++;
        }else if(ganadorRonda == 2){
            j2++;
        }

    }

    return 0;
}

// Definiciones
int introducirOpcion(int jugador){
    cout << "\n\nIngrese su opcion" << endl;
    cout << "1) Piedra" << endl;
    cout << "2) Papel" << endl;
    cout << "3) Tijera" << endl;
    int opcion;
    cout << "Jugador #" << jugador << ": ";
    cin >> opcion;
    system("cls");
    return opcion;
}

int verificarGanadorRonda(int jugador1, int jugador2){
    if(jugador1 == 1){
        if(jugador2 == 1){
            return 0;
        }else if(jugador2 == 2){
            return 2;
        }else{
            return 1;
        }
    }else if(jugador1 == 2){
        if(jugador2 == 1){
            return 1;
        }else if(jugador2 == 2){
            return 0;
        }else{
            return 2;
        }
    }else {
        if(jugador2 == 1){
            return 2;
        }else if(jugador2 == 2){
            return 1;
        }else{
            return 0;
        }
    }
}

void mostrarGanador(int ganador){
    if(ganador == 0){
        cout << "\nEMPATE" << endl;
    }else{
        cout << "Ha ganado el jugador #" << ganador << endl;
    }
}

int generarNumeroAleatorio(int min, int max){
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);
    return num;
}