/**
 * Main function
 */

#define Mix_Config_CXX_Version 17
#include "Mix.h"
#include "Prelude.h"

use module Show;
use module Functor;
use module Foldable;
use module Monoid;
use module Equal;
use module Order;
use module Algorithm;




Int
main(Int argc, Char *argv[]) {

  Vector<Int> v {7, 6, 8, 2, 4, 5};
  Vector<Int> x (sort(Insert, v));
  Maybe<Int> res
    (search(10, v, equal<Int>()));

  val s0(chars("abdghcjghkabkjlcacb"));
  val s1(chars("kab"));
  val r (search(s1, s0));
  val d (pow(5, 6));

  println(d);
  println(res);
  println(r);
  println(x);
  
  return 0;
}











