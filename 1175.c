/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 22/04/2026
Objetivo    : inverter os valores inseridos num vetor de espaço 20
Aprendizado : inversão de valores;
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
   int n[20];
   int aux[20];
   
   for(int i = 0; i < 20; i++){
       scanf("%i", &n[i]);
       aux[i] = n[i];
   }
   
   for(int i = 0; i < 10; i++){
         n[i] = aux[19 - i];
         n[19 - i] = aux[i];
   }
   
   for(int i = 0; i < 20; i++){
       printf("N[%i] = %i\n", i, n[i]);
   }
 
    return 0;
}
