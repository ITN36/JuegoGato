#include <iostream>

//Funcion para mostrar el tablero
void mostrar_tablero(char tablero[]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<tablero[i*3+j]<<" ";
        }
        std::cout<<"\n";
    }
}

bool verificar_ganador(char tablero[]){
    for(int i=0;i<3;i++){
        if(tablero[i*3] == 'X'&&tablero[i*3+1] == 'X'&&tablero[i*3+2] == 'X'||
            tablero[i*3] == 'O'&&tablero[i*3+1] == 'O'&&tablero[i*3+2] == 'O'){
            std::cout<<"Felicidades, eres el ganador"<<std::endl;
            system("pause");
            return true;
        }
    }

    for(int i=0;i<3;i++){
        if(tablero[i]=='X'&&tablero[i+3]=='X'&&tablero[i+6]=='X'||
            tablero[i]=='O'&&tablero[i+3]=='O'&&tablero[i+6]=='O'){
                std::cout<<"Felicidades, eres el ganador"<<std::endl;
            system("pause");
            return true;
            }
    }

    if(tablero[0]=='X'&&tablero[4]=='X'&&tablero[8]=='X'||
        tablero[0]=='O'&&tablero[4]=='O'&&tablero[8]=='O'){
            std::cout<<"Felicidades, eres el ganador"<<std::endl;
            system("pause");
            return true;
        }

    if(tablero[2]=='X'&&tablero[4]=='X'&&tablero[6]=='X'||
        tablero[2]=='O'&&tablero[4]=='O'&&tablero[6]=='O'){
            std::cout<<"Felicidades, eres el ganador"<<std::endl;
            system("pause");
            return true;
        }

    return false;
}

void jugador(char tablero[], char ficha){
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
        } else {
            if(tablero[numero-1]=='X'||tablero[numero-1]=='O'){
                std::cout<<"Esa casilla ya esta ocupada, intente de nuevo";
                system("pause");
                system("cls");
            } else {
                tablero[numero-1]=ficha;
                system("cls");
                movimientoValido=true;
            }
        }
    } while(!movimientoValido);
}

int main(){
    char tablero[9] = {'1','2','3','4','5','6','7','8','9'};
    int i=0;

    while(true){
        jugador(tablero, 'X');
        if(verificar_ganador(tablero)==true){
            break;
        }
        i++;
        if(i==9){
            std::cout<<"Es un empate\nCasillas ocupadas\n";
            break;
        }
        jugador(tablero, 'O');
        if(verificar_ganador(tablero)==true){
            break;
        }
        i++;
    }
    
    system("pause");
    return 0;
}