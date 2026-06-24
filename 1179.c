/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : /05/2026
Objetivo    : separar valores pares e impares em diferentes vetores de 5 espaços
Aprendizado : "reutilização" de espaço dos vetores
Dúvidas     : 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

void imprime(char *nome, int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("%s[%i] = %i\n", nome, i, vetor[i]);
    }
}

int main(){
    int valor, par[5], impar[5], npar, nimpar;
    npar = 0; nimpar = 0;

    for(int i = 0; i < 15; i++){
        scanf("%i", &valor);

        if(abs(valor)%2){
            impar[nimpar++] = valor;
            if(nimpar == 5){
                imprime("impar", impar, nimpar);
                nimpar = 0;
            }
        } else {
            par[npar++] = valor;
            if(npar == 5){
                imprime("par", par, npar);
                npar = 0;
            }
        }
    }

    imprime("impar", impar, nimpar);
    imprime("par", par, npar);
        
    return 0;
}
