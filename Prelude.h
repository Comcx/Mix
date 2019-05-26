#ifndef PRELUDE_H
#define PRELUDE_H


#include "Mix.h"

#include "Function.h"

#ifndef Mix_Data
#include "Data.h"
#include "Show.h"
#include "Equal.h"
#include "Order.h"
#include "Functor.h"
#include "Monad.h"
#include "Monoid.h"
#include "Applicative.h"
#include "Foldable.h"
#include "List.h"

#ifndef Mix_IO
#include "IO.h"
#endif

#ifndef Mix_Math
#include "Math.h"
#endif

#ifndef Mix_Algorithm
#include "Algorithm.h"
#endif



Vector<Char> chars(String s) {

  return Vector<Char>(s.begin(), s.end());
}



#endif














#endif
















