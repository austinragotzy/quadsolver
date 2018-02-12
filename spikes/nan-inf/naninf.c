#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  double n = 0.0/0.0;
  double i = 1.0/0.0;
  double ni = -1.0/0.0;

  //lets see how they work with the functions
  printf("nan, inf, negitive inf\n%f, %f, %f\n", n, i, ni);
  printf("using isnan: %d, %d, %d\n", isnan(n), isnan(i), isnan(ni));
  printf("using isinf: %d, %d, %d\n", isinf(n), isinf(i), isinf(ni));

  //do some math with them see what happens
  printf("nan+5=%f\n", n+5);
  printf("inf+5=%f\n", i+5);
  printf("neg inf+5=%f\n", ni+5);
  printf("nan*5=%f\n", n*5);
  printf("inf*5=%f\n", i*5);
  printf("neg inf*5=%f\n", ni*5);
  printf("nan+inf=%f\n", n+i);
  printf("nan*inf=%f\n", n*i);
  printf("nan/inf=%f\n", n/i);
}
