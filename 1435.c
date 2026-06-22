/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 22/06/2026
Objetivo    : printar uma matriz conforme o tamanho inserido pelo usuário
Aprendizado : mais dificil do que parece
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int n;
 
        while(cin >> n && n != 0){
        
        if(n == 0){
            break;
        }
        
        int matriz[n][n];

        //preenchendo a matriz
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){

                //calculo das distancias:
                int topo = i;
                int esquerda = j;
                int base = n - 1 - i;
                int direita = n - 1 - j;

                int menor = topo;
                if(menor > esquerda) menor = esquerda;
                if (menor > base) menor = base ;
                if(menor > direita) menor = direita;

                matriz[i][j] = menor + 1;
            }
           
        //printando a matriz no formato
        }
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){

                if(j == 0){
                    cout << setw(3) << matriz[i][j];
                } else {
                    cout << " " << setw(3) << matriz[i][j];
                }
            }
            cout << "\n";     
        }
        cout << "\n";
 
    }

    return 0;
}

/*----------------------------------------------------------
                        anotações
  AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
  AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
  AAAAAAAAAAAAAAAAAAAAAAAAAAAAHHHHHHHHHHHHHHHHHHHHHHHHHHHH


  ----------------------------------------------------------*/
