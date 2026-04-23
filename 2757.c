/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 13/04/2026
Objetivo    : Escrever números de entrada com espaçamento. 
Aprendizado : como imṕrimir com espaçamento.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

int N1, N2, N3;
scanf("%i %i %i", &N1, &N2, &N3);

printf("A = %i, B = %i, C = %i\n", N1, N2, N3);

printf("A = %10i, B = %10i, C = %10i\n", N1, N2, N3);

printf("A = %010i, B = %010i, C = %010i\n", N1, N2, N3);

printf("A = %-10i, B = %-10i, C = %-10i\n", N1, N2, N3);

return 0;

}
