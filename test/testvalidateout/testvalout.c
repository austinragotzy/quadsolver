#include <stdlib.h>
#include "../cunit.h"
#include "validateout.h"
#include <math.h>

int main() {
  int root;
  double x1=0;
  double x2=0;
  int result;
  cunit_init();

  root = 0;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 0);

  root = 1;
  x1 = 5.4;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 0);

  root = 2;
  x2 = 12.4;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 0);

  x1 = 0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 1);

  x1 = INFINITY;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 2);
  return 0;
}
