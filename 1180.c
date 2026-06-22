/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 22/06/2026
Objetivo    : printar o menor valor de um vetor tamnho x e sua posição
Aprendizado : beecrowd me odeia
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int n;
    scanf("%i", &n);
    int x[n];
    int menor, posicao;
    

    for(int i = 0; i < n; i++){
        scanf("%i", &x[i]);
        menor = x[0];
        posicao = 0;
    }

    for(int i = 0; i < n; i++){
        if(menor > x[i]){
            menor = x[i];
            posicao = i;
        }
    }
    printf("Menor valor: %i\nPosicao: %i\n", menor, posicao);

    
    return 0;
}
