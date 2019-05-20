#define Mix_Prelude
#include "Mix.h"

use module Mix;

module Functor {

  mix<mix<Type> Type F, Type A, Type B>
  F<B>
  map(F<A>, function<B(A)>);

  mix<Type A, Type B> Vector<B>
  map(Vector<A> v, function<B(A)> f) {

    Vector<B> ans {};
    for(val &e : v)
      ans.push_back(f(e));

    return ans;
  }

  
}




