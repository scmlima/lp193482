/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 23/05/2026
Objetivo    : Calcular o tempo que se passou jogando.
Aprendizado : 
Dúvida      : 
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int hi, hf;
    int temp, delt;
    scanf("%i %i", &hi, &hf);

    delt = hf - hi;


    if(delt > 0){
        temp = delt;
    } else {
        delt*=(-1);
        temp = 24 - delt;
    }

    
    printf("O JOGO DUROU %i HORA(S)\n", temp);
 
    return 0;
}
