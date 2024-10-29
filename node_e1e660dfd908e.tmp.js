/* Escreva um programa em C++ que contenha uma função gen() que gere aleatoriamente 
uma letra maiúscula do alfabeto, uma função sel() que verifique se a letra 
sorteada é uma consoante e uma função prn() de saída que mostre na tela os 
resultados obtidos pelas funções gen() e sel(). */

#include<iostream>
#include<stdlib.h>
#include<time.h>

int gen();
int sel();
void prn();

using namespace std;

int main(){

    srand(time(0));
    gen();

    return 0;
}

int gen(){
    char maiusc;
    int ascii;

    ascii = 65 + rand() % (90 - 65) + 1;
    cout << ascii;
}