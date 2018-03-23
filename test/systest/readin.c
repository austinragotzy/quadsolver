#include <stdlib.h>
#include <stdio.h>
//reads a line from the user
int readin(double *a, double *b, double *c){
printf("ax^2+bx+c\na > ");//prompts for a
scanf("%lf", a);//reads a
printf("\nb > ");//prompts for b
scanf("%lf", b);//reads b
printf("\nc > ");//prompts for c
scanf("%lf", c);//reads c
return 0;
}
