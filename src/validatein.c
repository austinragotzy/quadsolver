#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//if its a nan or infinite then it returns 1 so probably dont do anything with the equasion
//if its denormalized it returns 2 so just not that and report to user probably
//otherwise everything is fine and return 0;
int validatein(double *a, double *b, double *c){
  if(isnan(*a)||isnan(*b)||isnan(*c)){
    return 1;
  }
  if((0==isfinite(*a))||(0==isfinite(*b))||(0==isfinite(*c))){
    return 1;
  }
  if((0==isnormal(*a))||(0==isnormal(*b))||(0==isnormal(*c))){
    return 2;
  }
  else{
    return 0;
  }
}
//for testing
// int main(int argc, char const *argv[]) {
//   double a = 0.0000045;
//   double b = INFINITY;
//   double c = 39238.4;
//   printf("%d\n", validatein(&a, &b, &c));
//
//   return 0;
// }
