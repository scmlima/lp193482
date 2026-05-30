/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 30/05/2026
Objetivo    : calcular o número de fibonacci n vezes.
Aprendizado : algoritmo de fibonacci e contagem de chamadas.
Dúvida      : 
-------------------------------------------------------------------------- */

#include <stdio.h>

int contador = 0;

int fib(int n){
    contador++;
    
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
     
    return fib(n-1) + fib(n-2);
}
 
int main() {
    int N; 
    scanf("%i", &N);
    
    for(int i = 0; i < N; i++){
        contador = -1;
        int F, result;
        scanf("%i", &F);
        
        result = fib(F);
        printf("fib(%i) = %i calls = %i\n", F, contador, result);
    }
    return 0;
}
