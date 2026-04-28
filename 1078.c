/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Imprimir uma tabuada com valores lidos.
Aprendizado : processos matemáticos dentro de printf.
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int N;//numero escrito
    int M = 1; //multiplicador
    
    scanf("%i", &N); //recebe o numero a ser multiplicado
    
    while(M <= 10){
        printf("%i x %i = %i\n", M, N, (M * N));
        M++;
            
  }
     return 0;
}
