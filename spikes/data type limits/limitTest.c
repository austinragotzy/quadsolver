#include <stdlib.h>
#include <stdio.h>

int main(){
  int a = 2147483649;//what i might have expected it goes to a negitive number
  printf("here i put 2147483649 into an int: %d\n", a);

  int b = -2147483650;//this goes to a positive number as expected
  printf("here i put -2147483650 into an int: %d\n", b);

  float c = 3.402823466e+38F;//seems legit
  printf("here is the max float put into a float: %f\n", c);

  float d = 1.175494351e-38F;//this seems weired that it would print out 0.000000
  printf("here is the closest positive float to zero put into a float: %f\n", d);

}
