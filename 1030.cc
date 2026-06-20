/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 20/06/2026
Objetivo    : realizar a contagem de sobreviventes após suicidio coletivo.
Aprendizado : fórmula de Josephus, entrada e saída em C++
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int sobr(int men, int jump){
    if(men == 1){
        return 0;
    }
    return (sobr(men - 1, jump) + jump) % men;
}

int main(){
    int nc;
    cin >> nc;
    for(int i = 1; i <= nc; i++){
        int n, k;
        cin >> n >> k;
        cout << "Case " << i << ": " << sobr(n, k) +1 << endl;
        
        
    }
    
    return 0;
}

/*-----------------------------------------------------
                  anotações
  estudar a fórmula
  treinar using namespace std;

  --------------------------------------------------*/
