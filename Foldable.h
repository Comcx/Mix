#define Mix_Prelude
#include "Mix.h"


use module Mix;

module Foldable {

  mix<mix<Type> Type F, Type A, Type B>
  B
  foldl(B (*f)(B, A), F<A>, B);

  //Vector
  mix<Type A, Type B>
  B
  foldl(B (*f)(B, A), Vector<A> v, B b) {

    var ans (b);
    for(val &e : v)
      ans = f(ans, e);

    return ans;
  }
  
}






