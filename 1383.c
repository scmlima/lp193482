#include <stdio.h>

int bloco(int matriz[9][9], int iniciolinha, int iniciocoluna){
    int contagem[10] = {0};
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            int num = matriz[iniciolinha + l][iniciocoluna + c];
            if(num < 1 || num > 9 || contagem[num] == 1){
                return 0; //deu erro, para!
            }
            contagem[num] = 1;
        }
    }
    return 1; //confere!
}

int main(){
    int n;
    scanf("%i", &n);

    for(int instancia = 1; instancia <= n; instancia++){
        int tab[9][9];
        int valido = 1; // valido = 1 (verdadeiro\correto) e válido = 0 (falso/incorreto)

        for(int l = 0; l < 9; l++){
            for(int c = 0; c < 9; c++){
                scanf("%i", &tab[l][c]);
            }
        }

        //checagem de linhas
        for(int l = 0; l < 9; l++){
            int contagem[10] = {0}; //para checar se cada número se repetiu ou não
            for(int c = 0; c < 9; c++){
                int num = tab[l][c];
                if(num < 1 || num > 9 || contagem[num] == 1){
                    valido = 1; 
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

        //checagem dos quadrantes
        for(int l = 0; l < 9; l += 3){
            for(int c = 0; c < 9; c += 3){
                if(bloco(tab, l, c) == 0){
                    valido = 0;
                }
            }
        }
        

        //printando o sudoku
        printf("Instancia %i\n", instancia);
        if(valido == 1){
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        }
    }
    
    return 0;
}

/*-------------------------------------------------------------------
                            anotações
    Nota-se que em todos os testes, em caso de erro, alteramos
o valor de "válido" para 0, determinando assim como inválido
(uma vez que 0 = falso em C). Se houvesse algum teste que, 
para verdadeiro, desse valido = 1, haveria um "efeito esquecimento"
que faria com que os erros detectados acima fossem trocados por 
valido = 1, dando assim resultados errados.
    Portanto, determine como correto ao inicio e apenas mude para 
errado no decorrer, detectando assim se há erros no jogo.

-------------------------------------------------------------------*/
