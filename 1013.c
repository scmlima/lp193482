/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : DD/MM/2026
Objetivo    : Ler 3 valores e imprimir qual o valor maior.
Aprendizado : uso de scanf e condicional if.
-------------------------------------------------------------------------- */

#inclua <stdio.h>

int main() {
  int A, B, C;
  scanf("%i", &A);
  scanf("%i", &B);
  scanf("%i", &C);

  int AB = (A - B);

  if (AB < 0){
    AB *= -1;
}

  int MaiorAB = (A + B + AB)/2;

  int ABC = (MaiorAB - C);

  if (ABC < 0){
    ABC *= -1;
}

  int MaiorABC = (MaiorAB + C + ABC)/2;

  printf("%i eh o maior\n", MaiorABC);

  return 0;

}
