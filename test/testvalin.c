#include <stdlib.h>
#include "cunit.h"
#include "validatein.h"

int main() {
  double a;
  double b;
  double c;
  int result;
  cunit_init();

  a = 4.0;
  b = 9.0;
  c = 3.0;
  result = validatein(&a, &b, &c);
  assert_eq("result", result, 0);
  return 0;
}
