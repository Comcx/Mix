/**
 * Main function
 */

#define Mix_Config_CXX_Version 17
#include "Mix.h"
#include "Prelude.h"

use module Function;
use module List;
use module Show;
use module Functor;
use module Foldable;
use module Monoid;
use module Equal;
use module Order;
use module Applicative;
use module Algorithm;





Int
main(Int argc, Char *argv[]) {

  module Sort = Algorithm::Sort;

  Vector<Int> v {7, 6, 8, 2, 4, 5};
  Vector<Int> x (sort(Sort::Merge, v));
  val res (search(10, v, equal<Int>()));

  function<Int(Int)> f ([](Int x) {return x * 3;});
  val mf(Just(f));
  val a (Just(5));
  val rs((f * id<Int>()) * (mf ^ a));

  println(rs);
  println(res);
  println(x);
  
  return 0;
}











