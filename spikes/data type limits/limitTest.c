#include <stdlib.h>
#include <stdio.h>

int main(){
  int a = 2147483649;//what i might have expected it goes to a negitive number
  printf("here is put 2147483649 into an int: %d\n", a);

  int b = -2147483650;//this goes to a positive number as expected
  printf("here is put -2147483650 into an int: %d\n", b);

  float c = 3.402823466e+38F;//seems legit
  printf("here is the max float put into a float: %f\n", c);

  float g = 3.402823470e+38F;//it prints out without a hitch not sure why this happens
  printf("here is the 3.402823467e+38F put into a float: %f\n", g);

  //im not sure if we really care about this problem since we are only going to be
  //interested in outputting the first 7 digits since single percision only as accurate
  //up to the first 7 or 8 digits
  float d = 1.175494351e-38F;//this seems weired that it would print out 0.000000
  printf("here is the closest positive float to zero put into a float: %.7f\n", d);

  //lets see what happens when we multiply it by different numbers
  //for(int i=1; i<1000000000; i+=100000000){//looks like it is just treated as zero?
  //  printf("%d * %.7f = %.7f\n", i, d, i*d);
  //}

  double e = 1.7976931348623158e+308;
  printf("here is the max double: %f\n", e);

  double f = 2.2250738585072014e-308;
  printf("here is the positive double closest to zero: %f\n", f);
  //so there we have how the data types act near their limits

}
