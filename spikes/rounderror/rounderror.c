#include <stdlib.h>
#include <stdio.h>

int main(){
  float a;
  float b;
  scanf("%f",&a);
  b = (a * 100000 + 20)/100000;
  if(a=b){
printf("have rounding error");}
  else
printf("no rounding error");


}
