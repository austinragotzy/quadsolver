#include <math.h>
#include <stdlib.h>
#include <stdio.h>

//give it a 3 doubles a, b, and c and it will change the pointers to the double pointers
//you give it. it returns 1 if one root and 2 if 2 roots and 0 if no real roots.
int quadSolv(double a, double b, double c, double *x1, double *x2){

  double worker;
  worker = (b*b)-(4*a*c);
  if(worker==0){//1 root
    *x1 = -b/(2*a);
    return 1;
  }else if(worker>0){// 2 roots
    worker = sqrt(worker);
    *x1 = (-b+worker)/(2*a);
    *x2 = (-b-worker)/(2*a);
    return 2;
  }else{// no real roots
    return 0;
  }
}
