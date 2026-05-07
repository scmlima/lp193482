
#include <stdio.h> //scanf e pritf
#include <ctype.h> //isalpha 
#include <string.h> //strlen
 
int main() {
 
    int N, n;                           //n = tamanho, N = quantidade de strings
    char aux, txt[1001];
    
    scanf("%i\n", &N);
    
    for(int i = 0; i < N; i++){          // roda o código for para cada string digitada (N armazena a quantidade a rodar)
        scanf("%[^\n]\n", &txt);        /*o ^ no especificador funciona como negação, dizendo: "leia tudo, menos o '\n'!".
                                          O []\n ao final garante que o \n seja consumido/apagado do buffer (local de memória de string)
                                          para evitar que ele apareça numa leitura posterior*/
        
        n = strlen(txt);                //n armazena o tamanho da string M.
        
        for(int j = 0; j < n; j++){    // basicamente roda o for para cada letra da string
            if(isalpha(txt[j])){       //a função ocorre para cada letra maiúscula u minúscula (isalpha)
                txt[j] += 3;           // muda cada letra para outra 3 posições a frente (seguindo assim o ASCII)
            }
        }
        
        for(int j = 0; j < n/2; j++){
            aux = txt[j];
            txt[j] = txt[n - 1 - j];
            txt[n - 1 - j] = aux;
        }
        
        for(int j = n/2; j < n; j++){
            --txt[j];
        } 
        printf("%s\n", txt);
            
            
    }
    return 0;
}
/*-----------------------------------------------------------
                      ~ Anotações ~
   O scanf("%s") lê apenas strings até o espaço em branco, sendo
 necessário usar uotros métodos para ler uma frase com espaços. No
 caso do exercício, foi usado o ("%^s") que diz "leia tudo exceto o '\n'",
 fazendo com que seja lido os espaços também.
   
 
  -----------------------------------------------------------*/
