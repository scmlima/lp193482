#include <stdio.h>

int bloco(int matriz[9][9], int iniciolinha, int iniciocoluna){
    int contagem [10] = {0};
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            int num = matriz[iniciolinha + l][iniciocoluna + c];
            if(num < 1 || num > 9 || contagem[num] == 1){
                return 0; //return 0 significa que houve um erro, que é falso, etc.
            }
            contagem[num] = 1;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%i", &n);

    for(int instancia = 1; instancia <= n; instancia++){
        int tab[9][9];
        int valido = 1; // 1 singifica verdadeiro e 0 falso, então quer dizer que é válido

        //leitura do tabuleiro sudoku
        for(int l = 0; l < 9; l++){
            for(int c = 0; c < 9; c++){
                scanf("%i", &tab[l][c]);
            }
        }

        //verificacao das linhas
        for(int l = 0; l < 9; l++){
            int contagem[10] = {0}; //0 "o numero não apareceu" e 1 = "o numero ja apareceu"
            for(int c = 0; c < 9; c++){
                int num = tab[l][c];
                if(num < 1 || num > 9 || contagem[num] == 1){
                    valido = 0; // valido = 0 significa "inválido"
                }
                contagem[num] = 1;
            }
        }

        //verificacao coluna
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

        //verificacao dos quadrantes
        for(int l = 0; l < 9; l += 3){
            for(int c = 0; c < 9; c += 3){
                if(!bloco(tab, l, c)){
                    valido = 0;
                }
            }
        }

        //printando o sudoku
        printf("Instancia %i\n", instancia);
        if(valido){
            printf("SIM\n\n");
        } else {
            printf("NÃO\n\n");
        }
        
    }
        return 0;
    }
