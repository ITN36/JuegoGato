#include <iostream>

void mostrar_tablero(char tablero[]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<tablero[i*3+j]<<" ";
        }
        std::cout<<"\n";
    }
}

void jugador1(char tablero[]){
    int numero=0;

    std::cout<<"Jugador 1: X\n";
    std::cout<<"Ingrese un numero para poner su ficha: ";
    std::cin>>numero;
    
    mostrar_tablero(tablero);
    tablero[numero-1]='X';

    system("cls");
}

void jugador2(char tablero[]){
    int numero=0;

    mostrar_tablero(tablero);

    std::cout<<"Jugador 2: O\n";
    std::cout<<"Ingrese un numero para poner su ficha: ";
    std::cin>>numero;

    tablero[numero-1]='O';

    system("cls");
}

int main(){
    char tablero[9] = {'1','2','3','4','5','6','7','8','9'};

    while(true){
        jugador1(tablero);
        jugador2(tablero);
    }
    
    
    
    system("pause");
    return 0;
}