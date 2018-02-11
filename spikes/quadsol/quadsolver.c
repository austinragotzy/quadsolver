#include <math.h>
#include <stdlib.h>
#include <stdio.h>
//-b+-sqroot(b^2-4ac)
//___________________
//     2a

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

int main(){
  double x1, x2;
  int roots = quadSolv(1.0, 1.0, -1.0, &x1, &x2);
  if(roots==0){
    printf("no real roots\n");
  }else if(roots==1){
    printf("only one root: %f\n", x1);
  }else{
    printf("root 1: %f\nroot 2: %f\n", x1, x2);
  }
  return 0;
}
