// COMEÇO DE CÓDIGO

#include <stdio.h>
#include <stdlib.h>

int bloco(int matriz[9][9], int iniciolinha, int iniciocoluna){
    int contagem[10] = {0};
    int valido = 0;
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            int num = matriz[iniciolinha + l][iniciocoluna + c];
            if(num < 1 || num > 9 || contagem[num] == 1){
                valido = 1; //deu erro, para!
            }
            contagem[num] = 1;
        }
    }

    //checagem de linhas
     for(int l = 0; l < 9; l++){
            int contagem[10] = {0}; //para checar se cada número se repetiu ou não
            for(int c = 0; c < 9; c++){
                int num = tab[l][c];
                if(num < 1 || num > 9 || contagem[num] == 1){
                    valido = 0; 
                }
            }
        }

        //checagem de colunas
        for(int c = 0; c < 9; c++){
            int contagem[10] = {0};
            for(int l = 0; l < 9; l++){
                int num = tab[l][c];
                if(num < 1 || num > 9 || contagem[num] == 1){
                    valido = 0;
                }
                contagem[num] = 1;
            }
        }

    return valido; 
}

int main () {
     int tab[9][9] = {
    {1, 3, 2, 5, 7, 9, 4, 6, 8},
    {4, 0, 8, 2, 6, 1, 3, 7, 5},
    {7, 5, 6, 3, 8, 4, 2, 1, 9},
    {6, 4, 3, 0, 5, 8, 7, 9, 2},
    {5, 2, 1, 7, 9, 3, 8, 4, 6},
    {9, 8, 7, 4, 2, 6, 5, 3, 0},
    {2, 1, 4, 9, 3, 5, 6, 8, 7},
    {3, 6, 5, 8, 1, 7, 9, 2, 4},
    {8, 7, 0, 6, 4, 2, 0, 5, 3},
    };
    int taboriginal[9][9] = {
    {1, 3, 2, 5, 7, 9, 4, 6, 8},
    {4, 0, 8, 2, 6, 1, 3, 7, 5},
    {7, 5, 6, 3, 8, 4, 2, 1, 9},
    {6, 4, 3, 0, 5, 8, 7, 9, 2},
    {5, 2, 1, 7, 9, 3, 8, 4, 6},
    {9, 8, 7, 4, 2, 6, 5, 3, 0},
    {2, 1, 4, 9, 3, 5, 6, 8, 7},
    {3, 6, 5, 8, 1, 7, 9, 2, 4},
    {8, 7, 0, 6, 4, 2, 0, 5, 3},
    };

      //checagem dos quadrantes
        for(int l = 0; l < 9; l += 3){
            for(int c = 0; c < 9; c += 3){
                if(bloco(tab, l, c) == 0){
                    valido = 0;
                }
            }
        }

        
    

    
    
    return 0;  
}
