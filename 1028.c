/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 30/05/2026
Objetivo    : encontrar o MDC das cartas.
Aprendizado : algoritmo de Euclides
Dúvida      : 
-------------------------------------------------------------------------- */

#include <stdio.h>


int mdc(int a, int b){
    int resto;
     while(b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int N;
    scanf("%i", &N);
    int F1, F2;
    int result;
    
    while(N > 0){
        scanf("%i %i", &F1, &F2);
        result = mdc(F1, F2);
        printf("%i\n", result);
        N--;
    }
    return 0;
}
