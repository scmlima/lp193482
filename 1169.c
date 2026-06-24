/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 24/06/2026
Objetivo    : calcular o peso de grãos após aumento exponencial.
Aprendizado : função recursiva e unsigned long long.
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long quantidade_graos(int x){
    unsigned long long graos = 1;
    if(x == 1) return 1;
    graos += quantidade_graos(x-1)*2;
    return graos;
}

int main(){

    int n;
    scanf("%i", &n);

    for(int i = 0; i < n; i++){
        unsigned long long quilos;
        int x;
        scanf("%i", &x);
        quilos = (quantidade_graos(x)/12000);

        printf("%llu kg\n", quilos);
    }
    
    return 0;
}
