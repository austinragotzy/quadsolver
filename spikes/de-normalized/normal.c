#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  //just a normalized numnber
  float norm = 12345.394;
  //one of the bigger denormalized numbers ive found
  float denorm = 0.000000000000000000000000000000000000004;
  int x = isnormal(norm);
  int y = isnormal(denorm);
  printf("is 1.394 normalized: %d\n", x);
  printf("is a number with a bunch of leading 0 normalized: %d\n", y);
  printf("normalized+denormalized= %f\n is it normal? %d\n", norm+denorm, isnormal(norm+denorm));
  //if norm is smaller it will be a denormalized number
  printf("normalized*denormalized= %f\n is it normal? %d\n", norm*denorm, isnormal(norm*denorm));
}
