/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 17/05/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
    
        int *matriz = (int *)malloc(N * N * sizeof(int));
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
               
                if (i + j == N - 1) {
                    *(matriz + (i * N) + j) = 2;
                } else if (i == j) {
                    *(matriz + (i * N) + j) = 1; 
                } else {
                    *(matriz + (i * N) + j) = 3; 
                }
            }
        }

       
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", *(matriz + (i * N) + j));
            }
            printf("\n"); 
        }
        
        free(matriz);
    }

    return 0;
}
