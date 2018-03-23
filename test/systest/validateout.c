#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//root is the number of the root, and x1, x2 is the solutions
//if its denormalized it returns 1 so just not that and report to user probably
//if all are fine,than returns 0
//otherwise returns 2;
int validateout(int root, double *x1, double *x2){
  if(root==0){//when there is no root
    return 0;
  }
  if(root==1){//when there is one root
    if(isnan(*x1)){//when that root is not a number
      return 2;
    }
    if(0==isfinite(*x1)){//when that root is infinite
      return 2;
    }
    if(0==isnormal(*x1)){//when that root is denormalized
      return 1;
    }//otherwise its fine
    return 0;
  }
  if(isnan(*x1)||isnan(*x2)){//when there is 2 roots and one is not a number
    return 2;
  }
  if((0==isfinite(*x1))||(0==isfinite(*x2))){//when ther is 2 roots and one is infinite
    return 2;
  }
  if((0==isnormal(*x1))||(0==isnormal(*x2))){//when there is 2 rrots and one is denormalized
    return 1;
  }//otherwise its fine
  return 0;
}
