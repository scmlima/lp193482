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
int main() {
    int N;
    
    while (scanf("%d", &N) != EOF) {
       
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i + j == N - 1) {
                    printf("2");
                } 
                
                else if (i == j) {
                    printf("1");
                } 
               
                else {
                    printf("3");
                }
            }
            
            printf("\n"); 
        }
    }

    return 0;
}
