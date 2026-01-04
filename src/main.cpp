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
    bool movimientoValido=false;

    do{
        std::cout<<"Jugador 1: X\n";
        mostrar_tablero(tablero);
        std::cout<<"Ingrese un numero para poner su ficha: ";
        std::cin>>numero;

        if(numero<1||numero>9){
            std::cout<<"Numero invalido, intente de nuevo";
            system("pause");
            system("cls");
            continue;
        } else {
            if(tablero[numero-1]=='X'||tablero[numero-1]=='O'){
                std::cout<<"Esa casilla ya esta ocupada, intente de nuevo";
                system("pause");
                system("cls");
            } else {
                tablero[numero-1]='X';
                system("cls");
                movimientoValido=true;
            }
        }
    } while(!movimientoValido);
}

void jugador2(char tablero[]){
    int numero=0;
    bool movimientoValido=false;

    do{
        std::cout<<"Jugador 2: O\n";
        mostrar_tablero(tablero);
        std::cout<<"Ingrese un numero para poner su ficha: ";
        std::cin>>numero;

        if(numero<1||numero>9){
            std::cout<<"Numero invalido, intente de nuevo";
            system("pause");
            system("cls");
            continue;
        } else {
            if(tablero[numero-1]=='X'||tablero[numero-1]=='O'){
                std::cout<<"Esa casilla ya esta ocupada, intente de nuevo";
                system("pause");
                system("cls");
            } else {
                tablero[numero-1]='O';
                system("cls");
                movimientoValido=true;
            }
        }
    } while(!movimientoValido);
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