/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : projeto final
Data        : 24/06/2026
Objetivo    : criar um jogo interativo de sudoku
Aprendizado : colocando em prática os conhecimentos do curso.
-------------------------------------------------------------------------- */

#include <stdio.h>

int checar_bloco(int matriz[9][9]){

        for(int l = 0; l < 9; l += 3){
            for(int c = 0; c < 9; c += 3){

                int contagem[10] = {0};
                int num;

                for(int i = 0; i < 3; i++){
                     for(int j = 0; j < 3; j++){
            
                        num = matriz[l + i][c + j];

                        if(num == 0){
                            continue;
                        }
                         
                        if(num < 1 || num > 9 || contagem[num] == 1){
                            return 0;
                        } 
                        contagem[num] = 1;
                     }
                }
   
            }
        }
    return 1;
}

int checar_linha(int matriz[9][9]){

    for(int l = 0; l < 9; l++){
        
        int contagem[10] = {0};
        int num;
        
        for(int c = 0; c < 9; c++){

            num = matriz[l][c];

            if(num == 0){
                continue;
            }

            if(num < 0 || num > 9 || contagem[num] == 1){
                return 0;
            }
            contagem[num] = 1;
        }
    }
    return 1;
}

int checar_coluna(int matriz[9][9]){

    for(int c = 0; c < 9; c++){
        
        int contagem[10] = {0};
        int num;
        
        for(int l = 0; l < 9; l++){
            num = matriz[l][c];

            if(num == 0){
                continue;
            }
            
            if(num < 1 || num > 9 || contagem[num] == 1){
                return 0;
            }
            contagem[num] = 1;
        }
    }
    return 1;
}

void imprimir_sudoku(int matriz[9][9]){
    printf("===================\n");
    for(int l = 0; l < 9; l++){
        for(int c = 0; c < 9; c++){

            if(matriz[l][c] == 0){
                printf("  ");
            } else {
                printf("%2i", matriz[l][c]);
            }
        }
        printf("\n");
    }
    printf("===================\n");
}

int partida(int matriz[9][9]){
    
    for(int l = 0; l < 9; l++){
        for(int c = 0; c < 9; c++){

            if(matriz[l][c] == 0){
                return 1; //jogando
            }
            
        }
    }
    return 0; // acabou|ganhou
}


int main(){
    
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

    int linha, coluna, numero;
    

    while(partida(tab) == 1){
        imprimir_sudoku(tab);

        printf("Digite a linha: \n");
        scanf("%i", &linha);
        printf("Digite a coluna: \n");
        scanf("%i", &coluna);

        if(linha < 1 || linha > 9 || coluna < 1 || coluna > 9){
            printf("Valores inválidos!\n");
            printf("------------------------------------------\n");
            continue;
        }

        if(tab[linha-1][coluna-1] != 0){
            printf("não é possivel alterar esse valor\n");
            printf("------------------------------------------\n");
            continue;
        }
        
        printf("Digite o numero desejado: \n");
        scanf("%i", &numero);

        tab[linha-1][coluna-1] = numero;

        if(checar_bloco(tab) == 0 || checar_linha(tab) == 0 || checar_coluna(tab) == 0){
            printf("numero inválido, tente novamente.\n");
            tab[linha-1][coluna-1] = 0;
        } else {
            printf("Você acertou!\n");
        }

        if(partida(tab) == 0){
            imprimir_sudoku(tab);
            printf("Parabéns, você ganhou!!!\n");
        }

        printf("===============================\n");
    }
    return 0;
}
