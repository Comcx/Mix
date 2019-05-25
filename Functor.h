#ifndef FUNCTOR_H
#define FUNCTOR_H

#include "Mix.h"
#include "Data.h"
#include "Function.h"

use module Mix;

module Functor {

  //mix<mix<Type> Type F, Type A, Type B>
  //F<B>
  //map(F<A>, function<B(A)>);

  
  mix<Type A, Type B> Vector<B>
  map(function<B(A)> f, Vector<A> v) {

    Vector<B> ans {};
    for(var it(v.begin()); it != v.end(); ++it)
      ans.push_back(f(*it));

    return ans;
  }

  mix<class A, class B> Maybe<B>
  map(function<B(A)> f, Maybe<A> a) {

    Maybe<B> ans(Nothing);
    if(a) {
      ans = Just(f(a.value()));
    }
    return ans;
  }

  mix<class A, class B, class C>
  function<C(A)>
  map(function<C(B)> g, function<B(A)> f) {

    return compose(g, f);
  }


  

  mix<class A, class B, class C>
  function<C(A)>
  operator*(function<C(B)> g, function<B(A)> f) {

    return compose(g, f);
  }

  mix<mix<Type> Type F, Type A, Type B>
  F<B>
  operator*(function<B(A)> f, F<A> a) {

    return map(f, a);
  }

}

#endif


