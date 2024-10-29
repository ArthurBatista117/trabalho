/* Escreva um programa em C++ que contenha uma função gen() que gere aleatoriamente 
uma letra maiúscula do alfabeto, uma função sel() que verifique se a letra 
sorteada é uma consoante e uma função prn() de saída que mostre na tela os 
resultados obtidos pelas funções gen() e sel(). */

#include<iostream>
#include<stdlib.h>
#include<time.h>

int gen();
int sel(int);
void prn(char, bool);

using namespace std;

int main(){

    char letra;
    bool consoante;

    srand(time(0));
    letra = gen();
    consoante = sel(letra);

    prn(letra, consoante);
     

    return 0;
}

int gen(){
    int ascii;

    ascii = 65 + rand() % (90 - 65) + 1;

    return ascii;
}

int sel(int l){
    bool vogal;

    switch (l){
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
        vogal = true;
        break;
    
    default:
        vogal = false;
        break;
    }
    return vogal;
}

void prn(char l, bool c){
    cout << "A letra sorteada foi: " << l << endl;

    if(c == 0){
        cout << "Temos uma consoante!";
    } else if(c == 1){
        cout << "Temos uma vogal!";
    }
}