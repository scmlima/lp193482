/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h>

int main(){
    int N;
    char A[1001], B[1001];

    scanf("%i\n", &N);

    for(int i = 0; i < N; ++i){
        scanf("%s %s\n", &A, &B);

        if(strlen(B) > strlen(A))   printf("nao encaixa\n");
        else{
            strcpy(A, A + (strlen(A) - strlen(B)));
            if(!strcmp(A, B))       printf("encaixa\n");
            else                    printf("nao encaixa\n");
        }
    }

    return 0;
}
