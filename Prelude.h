#ifndef PRELUDE_H
#define PRELUDE_H


#include "Mix.h"


#include <functional>
use std::function;

#ifndef Mix_Data
#include "Data.h"

#ifndef Mix_Math
#include "Math.h"
#endif

#ifndef Mix_Algorithm
#include "Algorithm.h"
#endif



#include "Show.h"
#include "Equal.h"
#include "Order.h"
#include "Functor.h"
#include "Monad.h"
#include "Monoid.h"
#include "Foldable.h"
#include "Sort.h"

mix<class T> void
print(T x) { screen << Show::show(x); }

mix<class T> void
println(T x) { screen << Show::show(x) << endl; }

Vector<Char> chars(String s) {

  return Vector<Char>(s.begin(), s.end());
}



#endif














#endif
















