#include <stdlib.h>
#include <stdio.h>
#include "M.h"
#include <math.h>

int main(int argc, char* argv[]){
  double a;
  double b;
  double c;
  double x1;
  double x2;
  int roots = 100;
  int inresult;
  int outresult;
  if(argc==4){
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);
  }

  if(argc<2){
    readin(&a, &b, &c);
  }
  inresult = validatein(&a, &b, &c);
  if(inresult>1){
    printout(x1, x2, roots, inresult);
    return 0;
  }
  roots = quadSolv(a, b, c, &x1, &x2);
  outresult = validateout(roots, &x1, &x2);
  if(outresult>1){
    printout(x1, x2, roots, outresult);
    return 0;
  }
  if(inresult>=outresult){
    printout(x1, x2, roots, inresult);
    return 0;
  }else{
    printout(x1, x2, roots, outresult);
    return 0;
  }

}
