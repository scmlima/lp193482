/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Sarah Cristine Moraes Lima
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1080
Data : 21/04/2026
Objetivo : Ler 100 valores, apresentar o maior e sua posição.
Aprendizado : uso de condicionais e vetores.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

int vetor[100];
int maior, posicao = 1;

for (int i = 0; i < 100; i++) {
    scanf("%i", &vetor[i]);
}

maior = vetor[0];

for (int i = 1; i < 100; i++) {
    if (vetor[i] > maior) {
        maior = vetor[i];
        posicao = i + 1; // +1 porque a posição começa em 1
    }
}

printf("%i\n%i\n", maior, posicao);

return 0;

}
