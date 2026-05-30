

#include <stdio.h>

int grz(int hi){
    int maior;
    
     maior = hi;
    
    while(hi != 1 && hi != 0){
        
        if(hi % 2 == 0){
            hi /= 2;
        }else{
            hi = 3 * hi +1;
        }
        if(hi > maior){
            maior = hi;
        }
    }
    return maior;
}
 
int main() {
 
    int hi, result;

    while(scanf("%i", &hi) != EOF && hi != 0){
        result = grz(hi);
        printf("%i\n", result);
    }
    
 
    return 0;
}
