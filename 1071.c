/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 17/04/2026
Objetivo    : Ler 2 numeros inteiros, calcular e mostrar a soma entre os ímpares entre eles.
Aprendizado : uso de for.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

int X, Y, maior, menor, i, soma;
soma = 0;
scanf("%i %i", &X, &Y);

if(X < Y){
    maior = Y;
    menor = X;
} else {
    maior = X;
    menor = Y;
}

for(i = (menor + 1); i < maior; ++i){ //menor + 1 enquanto i < maior (filtra só os valores entre eles)
    if (i % 2 != 0){ // o % aqui retorna o resto de uma divisão inteira
        soma += i; // se o resto da divisão for diferente de 0, então é somado o valor de i (ou seja: os números ímpares)
    }
}

printf("%i\n", soma);

return 0;

}
