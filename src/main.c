#include <stdlib.h>
#include "M.h"
#include <math.h>

int main(){
double a;
double b;
double c;
double *x1;
double *x2;
int root;
int inresult;
int outresult;
int accuracy;

readin(a, b, c);
inresult = validatein(&a, &b, &c);
root = quadSolv(a, b, c, &x1, &x2);
outresult = validateout(root, *x1, *x2);
printout(*x1, *x2, roots, inresult);


