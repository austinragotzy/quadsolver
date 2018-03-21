#include <stdlib.h>
#include <stdio.h>

int printout(double r1, double r2, int roots, int accuracy){
  if(accuracy>1){
    printf("there was a problem with either the numbers used or the result (i.e. possibly a nan or inf)\n");
  }
  if(roots==1){
    if(accuracy==1) printf("answer may not be fully accurate ");
    printf("there is only one root it is: %f\n", r1);
  }
  else if(roots==2){
    if(accuracy==1) printf("answer may not be fully accurate");
    printf("there are two roots they are: %f, %f\n", r1, r2);
  }
  else if(roots==0){
    printf("there are no real roots.\n");
  }
  return 0;
}

// int main(){
//   double r1 = 4.0;
//   double r2 = 5.0;
//   int roots = 2;
//   int accuracy = 1;
//   printout(r1, r2, roots, accuracy);
//   return 0;
// }
