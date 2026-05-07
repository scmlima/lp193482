/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 06/05/2026
Objetivo    : comparar o final de duas strings
Aprendizado : uso da biblioteca string e suas funções strlen, strcpy e strcmp
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h> //strlen, strcpy e strcmp 

int main(){
    int N;
    char A[1001], B[1001];
    
    scanf("%i", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%s %s", A, B);
    
    
      if(strlen(B) > strlen(A)){ //strlen calcula o tamanho da string
        
          printf("nao encaixa\n");
   
     } else {
        
           strcpy(A, A + (strlen(A) - strlen(B))); //strcpy(A, B) sobrescreve o valor de B sobre A (se couber)
        
          if (!strcmp(A, B)){ //strcmp compara o tamanho de A e B e retorna 0 se for igual (neste caso retorna 1(vdd) por ter um "1")
            
              printf("encaixa\n");
       
         } else {
            
           printf("nao encaixa\n");
            
            }
        }
    }

    return 0;
}

/*--------------------------------------------------------------------
                         ~ Anotações ~
strlen = calcula tramanho da string

strcpy(destino, origem); = substritui o valor de A por B. Exemplo:
 int A[20] = "hello world"
 int B[20] = "goodbye"
 strcpy (A, B); 
 printf("%s", A); // leitura: "goodbye", pois A assumiu o valor de B

strcmp(A, B); = compara duas strings, caractere por caractere,
e retorna um valor inteiro dependendo do resultado. Ex:
 strcmp (abc, abc); // retorna 0 -> iguais
 strcmp (abc, xyz); // retorna < 0 -> "abc" vem antes
 strcmp (xyz, abc) // retorna > 0 -> "zyx vem" depois

--------------------------------------------------------------------*/
