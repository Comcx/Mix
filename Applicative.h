#ifndef APPLICATIVE_H
#define APPLICATIVE_H

#include "Mix.h"
#include "Functor.h"

use module Functor;

module Applicative {

  module local {
    
    use module Function;

    mix<mix<class> class F, class A>
    F<A> pure(A);

    mix<mix<class> class F, class A, class B>
    F<B> operator^(F<function<B(A)>>, F<A>);


    mix<class A, class B>
    Maybe<B>
    operator^(Maybe<function<B(A)>> mf, Maybe<A> a) {

      Maybe<B> ans(Nothing);
      if(mf) {
        val f(mf.value());
        if(a) ans = Just(f(a.value()));
      }
      else ans = a;
      return ans;
    }
  }//end local

  
  use local::pure;
  use local::operator^;

  
}





#endif

