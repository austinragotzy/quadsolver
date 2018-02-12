#include <stdlib.h>
#include <stdio.h>

int main(){
  float a;
  float b;
  float c;
  float root;
  scanf("%f %f %f %f",&a,&b,&c,&root);
  if(root * root * a + b * root + c == 0){
   printf("This is one of the equation's root");}
  else
   printf("not correct output");
}
