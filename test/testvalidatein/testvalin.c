#include <stdlib.h>
#include "../cunit.h"
#include "validatein.h"
#include <math.h>

int main() {
  double a;
  double b;
  double c;
  int result;
  cunit_init();
  //just a regular test random things that should return a 0
  a = 4.0;
  b = 9.0;
  c = 3.0;
  result = validatein(&a, &b, &c);
  assert_eq("result", result, 0);
  //what happens when a is 0
  a = 0;
  b = 4.0;
  c = 28.0;
  result = validatein(&a, &b, &c);
  assert_eq("result", result, 2);
  //make sure infs are processed correctly
  a = 5.4;
  b = INFINITY;
  c = 64.5;
  result = validatein(&a, &b, &c);
  assert_eq("result", result, 2);
  //make sure denormalized numbers are processed correctly
  a = 0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001;
  b = 5.4;
  c = 4.3;
  result = validatein(&a, &b, &c);
  assert_eq("result", result, 1);
  return 0;
}
