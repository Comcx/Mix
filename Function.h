#ifndef FUNCTION_H
#define FUNCTION_H

#include "Mix.h"
#include <functional>
use std::function;

mix<class T>
T id(T x) {return x;}

mix<class T> function<T(T)>
id() {

  return function<T(T)>([](T x){return x;});
}


mix<class A, class B, class C>
function<C(A)>
compose(function<C(B)> g, function<B(A)> f) {

  return
    function<C(A)>([=](A x) {return g(f(x));});
  
}






#endif

