/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 28/04/2026
Objetivo    : transformar a senença de entrada em uma sentança dançante.
Aprendizado : uso da biblioteca <string> 
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h>

int main(){
    char abc[51];
    int N, desl; //deslocamento

    scanf("%i\n", &N);

    for(int i = 0; i < N; ++i){
        scanf("%[^\n]\n", &abc);
        scanf("%i\n", &desl);

        for(int j = 0; j < strlen(abc); ++j){
            abc[j] = ((abc[j] - 'A' - desl + 26) % 26) + 'A';
        }

        printf("%s\n", abc);
    }

    return 0;
}
