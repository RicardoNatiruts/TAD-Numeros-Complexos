#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct _comp Complex;

Complex* complex_create(double, double);

void complex_delete(Complex*);

Complex* complex_soma(const Complex*, const Complex*);

Complex* complex_subt(const Complex*, const Complex*);

void complex_print(Complex*);

#endif