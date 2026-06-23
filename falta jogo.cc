#include <stdio.h>


//refazendo testes de verificação, até agr
int checar_bloco(int matriz[9][9]){

        for(int l = 0; l < 9; l += 3){
            for(int c = 0; c < 9; c += 3){

                int contagem[10] = {0};
                int num;

                for(int i = 0; i < 3; i++){
                     for(int j = 0; j < 3; j++){
            
                        num = matriz[l + i][c + j];

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

            num = matriz[i][j];

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
            if(num < 1 || num > 9 || contagem[num] == 1){
                return 0;
            }
            contagem[num] = 1;
        }
    }
    return 1;
}

int main(){

