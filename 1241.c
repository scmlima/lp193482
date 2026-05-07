/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 06/05/2026
Objetivo    : comparar o final de duas strings
Aprendizado : uso da biblioteca string e suas funções strlen, strcpy e strcmp
-------------------------------------------------------------------------- */

#include <string.h> //scanf e printf
#include <stdio.h> //strlen, strcpy e strcmp 

int main(){
    int N;
    char A[1001], B[1001];
    
    scanf("%i", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%s %s", A, B);
    
    
      if(strlen(B) > strlen(A)){ 
        
          printf("nao encaixa\n");
   
     } else {
        
           strcpy(A, A + (strlen(A) - strlen(B))); 
        
          if (!strcmp(A, B)){ 
            
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
  na questão usamos !strcmp pois se A = B, retornaria 0 ("falso" em C),
 mas com ! retornaria "verdadeiro".

--------------------------------------------------------------------*/
