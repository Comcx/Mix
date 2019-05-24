#ifndef APPLICATIVE_H
#define APPLICATIVE_H

#include "Mix.h"
#include "Functor.h"

use module Functor;

module Applicative {

  mix<mix<class> class F, class A>
  F<A> pure(A);

  mix<mix<class> class F, class A, class B>
  F<B> operator*(F<function<B(A)>>, F<A>);
}





#endif

