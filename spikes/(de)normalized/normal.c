#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  float norm = 1.394;
  //float denorm = 0.0000043;
  int x = isnormal(norm);
  printf("%d\n", x);
}
