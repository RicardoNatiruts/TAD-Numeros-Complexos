#include "complex.h"
#include <stdio.h>
#include<stdlib.h>

struct _comp{
    double real;
    double imagin;
};

Complex* complex_create(double x, double y){
    Complex* z = malloc(sizeof(Complex));
    if (z){
        z->real = x;
        z->imagin = y;
    }
    return z;
}

void complex_delete(Complex* z){
    free(z);
}

Complex* complex_soma(const Complex* z1, const Complex* z2){
    if (z1 == NULL || z2 == NULL){
        return NULL;
    }
    double somax = z1->real + z2->real;
    double somay = z1->imagin + z2->imagin;

    return complex_create(somax, somay);
}

Complex* complex_subt(const Complex* z1, const Complex* z2){
    if (z1 == NULL || z2 == NULL){
        return NULL;
    }
    double subx = z1->real - z2->real;
    double suby = z1->imagin - z2->imagin;

    return complex_create(subx, suby);
}

void complex_print(Complex* z){
    printf("\nParte Real: %.2lf\n", z->real);
    printf("\nParte Imaginária: %.2lf\n", z->imagin);
}
