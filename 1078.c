#include <stdio.h>
 
int main() {
 
    int N;//numero escrito
    int M = 1; //multiplicador
    
    scanf("%i", &N); //recebe o numero a ser multiplicado
    
    while(M <= 10){
        printf("%i x %i = %i\n", M, N, (M * N));
        M++;
            
  }
     return 0;
}
