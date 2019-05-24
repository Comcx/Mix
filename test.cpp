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
  Vector<Int> x (sort(Sort::Insert, v));
  Maybe<Int> res
    (search(10, v, equal<Int>()));

  val s0(chars("abdghcjghkabkjlcacb"));
  val s1(chars("kab"));
  val r (search(s1, s0));
  val d (pow(5, 6));
  val f (floor(1.2));

  println(d);
  println(f);
  println(res);
  println(r);
  println(x);
  
  return 0;
}











