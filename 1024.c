/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : criptografar uma string lida
Aprendizado : uso das bibliotecas <string.h> e <ctype.h> e manuseio de strings
-------------------------------------------------------------------------- */

#include <stdio.h> //fgets, sizeof, scanf, printf, getchar
#include <ctype.h> // isalpha, 
#include <string.h> //strlen, strcspn, strcpy
 
int main() {
 
    int N, i = 1, tam;
    char txt[1001], copy[1001];
    
    scanf("%i", &N);
    getchar(); //estudar getchar
    
    do{
        fgets(txt, sizeof(txt), stdin);
        txt[strcspn(txt, "\n")] = '\0'; /*strcspn busca na variavel txt a posicao do primeiro \n encontrado.*/
       
       tam = strlen(txt);
       
       
       for(int j = 0; j < tam; j++){
            if(isalpha(txt[j])){
                txt[j] += 3;
            }
       }
       
       strcpy(copy, txt);
       
       for(int j = 0; j < tam/2; j++){
           txt[j] = txt[tam - 1 - j];
           txt[tam - 1 - j] = copy[j];
       }
       
       for(int j = tam/2; j < tam; j++){
           txt[j]--;
       }
        i++;
        
        printf("%s\n", txt);
        
    }while(i <= N);
    
 
    return 0;
}
/*-----------------------------------------------------------
                      ~ Anotações ~
 (o código foi refeito para melhor entendimento e correção de bugs)
                      
   O scanf("%s") lê apenas strings até o espaço em branco, sendo
 necessário usar uotros métodos para ler uma frase com espaços. No
 caso do exercício, foi usado o ("%^s") que diz "leia tudo exceto o '\n'",
 fazendo com que seja lido os espaços também.

  !!! estudar fgets para leitura de string ao invés de scanf !!!
   
 
  -----------------------------------------------------------*/
