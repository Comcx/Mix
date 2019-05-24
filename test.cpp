/**
 * Main function
 */

#define Mix_Config_CXX_Version 17
#include "Mix.h"
#include "Show.h"
#include "Equal.h"
#include "Order.h"
#include "Functor.h"
#include "Monad.h"
#include "Monoid.h"
#include "Foldable.h"
#include "Sort.h"


use module Show;
use module Functor;
use module Foldable;
use module Monoid;
use module Equal;
use module Order;




Int
main(Int argc, Char *argv[]) {

  Vector<Int> v {4, 6, 7, 2, 4, 5};
  Vector<Int> x (sort<Vector, Int>(Insert, v));
  println(show(x));
  println(gcd(15, 3));
  Maybe<Int> ii = Just(5);
  println(show(ii));
  
  return 0;
}











