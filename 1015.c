/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 19/05/2026
Objetivo    : calcular a distancia entre dois pontos no plano cartesiano
Aprendizado : uso de funções
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>
 
double calculoDist(float x1, float y1, float x2, float y2){
     
     double dist;
     
     dist = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
     
     return dist;
 }
 
 
int main() {
 
   float x1, y1, x2, y2;
   double result;
   
   scanf("%f %f", &x1, &y1);
   scanf("%f %f", &x2, &y2);
   
   result = calculoDist(x1, y1, x2, y2);
   
   printf("%.4lf\n", result);
   
    return 0;
}

/*-----------------------------------------------
                anotações
 sim, precisa colocar o tipo nas variáveis dentro 
da função "(int A, int b...)".



------------------------------------------------*/
