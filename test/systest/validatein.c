#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//if its a nan or infinite then it returns 2 so probably dont do anything with the equasion
//if its denormalized it returns 1 so just not that and report to user probably
//otherwise everything is fine and return 0;
int validatein(double *a, double *b, double *c){
  if(0==*a){//when a is 0
    return 2;
  }
  if(isnan(*a)||isnan(*b)||isnan(*c)){//when one of them is not a number
    return 2;
  }
  if((0==isfinite(*a))||(0==isfinite(*b))||(0==isfinite(*c))){//when one is infinite
    return 2;
  }
  if((0==isnormal(*a))||(0==isnormal(*b))||(0==isnormal(*c))){//when one is denormalized
    return 1;
  }//otherwise it all fine
  return 0;
}
