#include <stdio.h>
#include "complex.h"

int main(){

    Complex *z1;
    double x1, y1;

    puts("\nDigite o valor real do complexo: ");
    scanf("%lf", &x1);
    puts("\nDigite o valor imaginária do complexo: ");
    scanf("%lf", &y1);

    z1 = complex_create(x1, y1);

    complex_print(z1);

    Complex *z2 = complex_create(2.0, 2.5);

    complex_print(z2);


    Complex *z3 = complex_soma(z1, z2);
    Complex *z4 = complex_subt(z1, z2);

    complex_print(z3);
    complex_print(z4);


    
    complex_delete(z1);
}