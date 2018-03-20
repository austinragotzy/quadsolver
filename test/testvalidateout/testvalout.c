#include <stdlib.h>
#include "../cunit.h"
#include "validateout.h"
#include <math.h>

int main() {
  int root;
  double x1;
  double x2;
  int result;
  cunit_init();
  //does haveing zero roots
  root = 0;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 0);
  //does haveing one valid root work
  root = 1;
  x1 = 5.4;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 0);
  //does having 1 nan root work how i want it to
  x1 = 0.0/0.0;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 2);
  return 0;
  //does having one denormalized root work how i want it to
  x1 = 0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 1);
  //does having one inf root work
  x1 = INFINITY;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 2);
  //does having 2 valid roots work
  root = 2;
  x1 = 4.3;
  x2 = 12.4;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 0);
  //does having 2 roots with one denormalized work
  x1 = 0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 1);
  //does having 2 roots with one inf work
  x1 = INFINITY;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 2);
  //does it handle nans how i want it to with 2 roots
  x1 = 0.0/0.0;
  result = validateout(root, &x1, &x2);
  assert_eq("result", result, 2);
  return 0;
}
