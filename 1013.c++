/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 02/06/2026
Objetivo    : Ler 3 valores e imprimir qual o valor maior.
Aprendizado : uso de entrada e saída em c++. std::cin e std::cout
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <iostream>

int main() {
  int A, B, C;
  std::cin >> A;
  std::cin >> B;
  std::cin >> C;

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

  std::cout << "o " << MaiorABC << " é o maior" << std::endl;
  return 0;

}
