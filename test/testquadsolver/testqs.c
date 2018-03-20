#include <stdlib.h>
#include "../cunit.h"
#include "solve.h"
#include <math.h>

int main() {
  double a;
  double b;
  double c;
  double *x1 = malloc(sizeof(double));
  double *x2 = malloc(sizeof(double));
  cunit_init();
  //try some numbers
  a = -7.0;
  b = 0.0;
  c = 0.0;
  quadSolv(a, b, c, x1, x2);
  assert_feqrerr("x1", *x1, 0.0, 7.0);
  return 0;
}
