/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 20/06/2026
Objetivo    : descobrir qual numero de saltos permite que a região 13 fique por ultimo, dado um numero selecionado pelo usuário.
Aprendizado : lógica e funções.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <iostream>

using namespace std;

int desligar(int n, int m){
    int reg[100]; //região

    for(int i = 0; i < n; i++){ 
        reg[i] = i + 2; //+2 pois retira a regiao 1 (sempre a primeira)
    }

    int tamanho = n;
    int posicao = 0;
    
        while(tamanho > 1){
            posicao = (posicao + m - 1) % tamanho;

            for(int i = posicao; i < tamanho; i++){
                reg[i] = reg[i + 1];
            }
                tamanho--;

                if(posicao == tamanho){
                    posicao = 0;
                }
            }
        
    
    
    return reg[0]; //regiao restante
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0){
                break;
            }
        for(int m = 1; ; m++){
            if(desligar(n-1, m)== 13){
                cout << m << endl;
                    break;
            }
        
        
        }
    }

    return 0;
}

    return 0;
}

/*---------------------------------------------
                    anotações
    em C++, o "while (cin >> n)" já funciona como 
"while(scanf("%i", n) != EOF", ou seja: já funcio-
na como um "enquanto tiver entrada".
----------------------------------------------*/
