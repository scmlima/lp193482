/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 22/05/2026
Objetivo    : Calcular a quantidade de combustível necessária numa viagem
Aprendizado : 
Dúvida      : por que o beecrowd implica tanto com o "\n"?
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int h, km;
    float litros, dist;
    
    scanf("%i %i", &h, &km);
    
    dist = km * h;
    
    litros = dist/12;
    
    printf("%.3f\n", litros);
 
    return 0;
}
