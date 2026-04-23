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

int maior, posicao, i, N;
maior = 0;

for (i = 1; i <= 100; ++i){
    
  scanf("%i", &N);
  
  if(N > maior){
      maior = N;
      posicao = i;
  }

}
printf("%i\n%i\n", maior, posicao);

return 0;

}
