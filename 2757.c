#include <stdio.h>

int main() {

int N1, N2, N3;
scanf("%i %i %i", &N1, &N2, &N3);

printf("A = %i, B = %i, C = %i\n", N1, N2, N3);

printf("A = %10i, B = %10i, C = %10i\n", N1, N2, N3);

printf("A = %010i, B = %010i, C = %010i\n", N1, N2, N3);

printf("A = %-10i, B = %-10i, C = %-10i\n", N1, N2, N3);

return 0;

}
