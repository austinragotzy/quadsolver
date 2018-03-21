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

readin(double a, double b, double c);
inresult = validatein(double a, double b, double c);
root = quadSolv(double a, double b, double c, double *x1, double *x2);
printout(double *x1, double *x2, int roots, int accuracy)
outresult = validateout(int root, double *x1, double *x2);

