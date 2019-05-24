/**
 * Main function
 */

#define Mix_Config_CXX_Version 17
#include "Mix.h"

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
  val res
    (search(Search::Linear, 7, v, less<Int>()));

  Vector<Int> t(10);
  Vector<Char> s {'a', 'b', 'a', 'b', 'a', 'a', 'b'};
  println(show(t));
  KMPnext(s, t);
  println(show(t));

  println(show(res));
  println(show(x));
  
  return 0;
}











