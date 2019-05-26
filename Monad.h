#ifndef MONAD_H
#define MONAD_H

#define Mix_Prelude
#include "Mix.h"
#include "Functor.h"

use module Mix;

module Monad {

  module local {

    use module Function;

    mix<mix<class> class M, class A>
    M<A>
    pure(A);

    mix<mix<class> class M, class A, class B>
    M<B>
    operator>>=(M<A>, function<M<B>(A)>);

  }//end local

  use local::pure;
  use local::operator>>=;
  
}


#endif



