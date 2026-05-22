#include <stdio.h>
 
int main() {
 
    int h, km;
    float litros, dist;
    
    scanf("%i %i", &h, &km);
    
    dist = km * h;
    
    litros = dist/12;
    
    printf("%.3f\n", litros);
 
    return 0;
}
