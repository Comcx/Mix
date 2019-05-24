#ifndef MATH_H
#define MATH_H

#include "Mix.h"

Int gcd(Int m, Int n) {

  int r(m % n);
  while(r != 0) {

    m = n;
    n = r;
    r = m % n;
  }
  return n;
}














#endif




