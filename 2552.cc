/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 23/06/2026
Objetivo    : printar o resultado de um jogo de campo minado de pães
Aprendizado : lógica e melhora na correção de erros. 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <iostream>

using namespace std;
 
int main() {
 
    int n, m, q;
    
    while(cin >> n >> m){
    
        int pao[n][m];
    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> pao[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                 if(pao[i][j] == 1){
                     cout << "9";
                 }else{
                     int q = 0;
                     if(i > 0 && pao[i-1][j] == 1) q++;
                     if(j > 0 && pao[i][j-1] == 1) q++;
                     if(i < n-1 && pao[i+1][j] == 1) q++;
                     if(j < m-1 && pao[i][j+1] == 1) q++;
                    cout << q;
                }
            }  
            cout << "\n";
        }

    }        
    return 0;
}

/*-------------------------------------
             anotações

 ------------------------------------*/
