/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 20/06/2026
Objetivo    : realizar a contagem de sobreviventes após suicidio coletivo.
Aprendizado : fórmula de Josephus
-------------------------------------------------------------------------- */

#include <stdio.h>

int sobr(int men, int jump){
    if(men == 1){
        return 0;
    }
    return (sobr(men - 1, jump) + jump) % men;
}

int main(){
    int nc;
    scanf("%i", &nc);
    for(int i = 1; i <= nc; i++){
        int n, k;
        scanf("%i %i", &n, &k);
        printf("Case %i: %i\n", i, sobr(n, k) + 1);
        
        
    }
    
    return 0;
}

/*-----------------------------------------------------
                estudar a fórmula
  omg

  --------------------------------------------------*/
