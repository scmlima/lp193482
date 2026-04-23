/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Sarah Cristine Moraes Lima
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 13/04/2026
Objetivo    : entrada e saída de números reais.
Aprendizado : como usar float e double, selecionando a quantidade de casas depois da vírgula.
-------------------------------------------------------------------------- */

#inclua <stdio.h>

int main() {

float a, b;
double c, d;

scanf("%f %f", &a, &b);
scanf("%lf %lf", &c, &d);

printf("A = %f, B = %f\n", a, b); //proc. 7
printf("C = %lf, D = %lf\n", c, d); //proc. 8

printf("A = %.1f, B = %.1f\n", a, b); //1 casa decimal
printf("C = %.1lf, D = %.1lf\n", c, d);

printf("A = %.2f, B = %.2f\n", a, b); //2 casas decimais
printf("C = %.2lf, D = %.2lf\n", c, d);

printf("A = %.3f, B = %.3f\n", a, b); //3 casas decimais
printf("C = %.3lf, D = %.3lf\n", c, d);

printf("A = %.3E, B = %.3E\n", a, b); //not. ci
printf("C = %.3E, D = %.3E\n", c, d); //not. ci

printf("A = %.0f, B = %.0f\n", a, b); //só parte inteira
printf("C = %.0lf, D = %.0lf\n", c, d); //só parte inteira

return 0;

}
