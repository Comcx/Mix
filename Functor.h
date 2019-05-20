#ifndef FUNCTOR_H
#define FUNCTOR_H

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
    for(var it(v.begin()); it != v.end(); ++it)
      ans.push_back(f(*it));

    return ans;
  }

  
}

#endif


