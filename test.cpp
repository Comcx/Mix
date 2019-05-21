#define Mix_Prelude

#include "Mix.h"
#include "Show.h"
#include "Equal.h"
#include "Order.h"
#include "Functor.h"
#include "Monad.h"
#include "Monoid.h"
#include "Foldable.h"


use module Show;
use module Functor;
use module Foldable;
use module Monoid;
use module Equal;
use module Order;


mix<Type T>
String
ss(String s, T x) { return s + show(x) + " "; }


Tag(Merge);
Tag(Quick);
Tag(Bubble);
Tag(Insert);


mix<class T>
Unit swap(T &a, T &b) {

  val t(a);
  a = b;
  b = t;
}

//Just testing...
mix<mix<class> class F, class T>
F<T> sort(BubbleTag b, F<T> a) {

  F<T> ans (a);
  for(Int i(0); i < a.size(); ++i)
    for(Int j(i); j > 0 && ans[j] < ans[j-1]; --j)
      swap(ans[j], ans[j-1]);
  
  return ans;
}



Int
main(Int argc, Char *argv[]) {

  Vector<Int> v {4, 6, 7, 2, 4, 5};
  Vector<Int> x (sort<Vector, Int>(Bubble, v));
  println(show(x));
  
  return 0;
}











