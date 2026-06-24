/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 24/05/2026
Objetivo    : calcular a quantidade de leds para formar um determinado valor
Aprendizado : uso de switch
Dúvidas     : 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%i", &n);

    for(int i = 0; i < n; i++){
        char valor[101];
        int led = 0;
        
        scanf("%s", valor);

        int tamanho = strlen(valor);

        for(int j = 0; j < tamanho; j++){
            switch (valor[j]) {
                case '1': led += 2; break;
                case '2': led += 5; break;
                case '3': led += 5; break;
                case '4': led += 4; break;
                case '5': led += 5; break;
                case '6': led += 6; break;
                case '7': led += 3; break;
                case '8': led += 7; break;
                case '9': led += 6; break;
                case '0': led += 6; break;
            }
        }
        printf("%i leds\n", led);
    }
    return 0;
}

//refazer até fixar
