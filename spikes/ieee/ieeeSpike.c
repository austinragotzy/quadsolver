#include <stdlib.h>
#include <stdio.h>

int main(){
  char *num = malloc(64);
  //get a number
  fgets(num, 64, stdin);
  float a = atof(num);
  //get another
  fgets(num, 64, stdin);
  float b = atof(num);
  //do some math with them
  printf("%f+%f=%f\n", a, b, a+b);
  printf("%f*%f=%f\n", a, b, a*b);

  //some results varry the 5th or so decimal point... we should be expecting at least the 6th
  //so something is up
}
