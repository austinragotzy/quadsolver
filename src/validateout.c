#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//root is the number of the root, and x1, x2 is the solutions
//if its denormalized it returns 1 so just not that and report to user probably
//if all are fine,than returns 0
//otherwise returns 2;
int validateout(int root, double *x1, double *x2){
  if(root==0&&isnan(*x1)&&isnan(*x2)){
    return 0;
  }
  if(root==1&&*x1==*x2&&(0==isnan(*x1))){
    return 0;
  }
  if(root==2&&*x1!=*x2&&(0==isnan(*x1))&&(0==isnan(*x2))){
    return 0;
  }
  if((0==isnormal(*x1))||(0==isnormal(*x2))){
    return 1;
  }
  return 2;
}
