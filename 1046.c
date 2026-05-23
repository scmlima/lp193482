

#include <stdio.h>
 
int main() {
 
    int hi, hf;
    int temp, delt;
    scanf("%i %i", &hi, &hf);

    delt = hf - hi;


    if(delt > 0){
        temp = delt;
    } else {
        delt*=(-1);
        temp = 24 - delt;
    }

    
    printf("O JOGO DUROU %i HORA(S)\n", temp);
 
    return 0;
}
