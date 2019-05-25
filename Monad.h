#ifndef MONAD_H
#define MONAD_H

#define Mix_Prelude
#include "Mix.h"
#include "Functor.h"

use module Mix;

module Monad {

  use module Function;

  mix<mix<class> class M, class A>
  M<A>
  pure(A);

  mix<mix<class> class M, class A, class B>
  M<B>
  operator>>=(M<A>, function<M<B>(A)>);
}


#endif



