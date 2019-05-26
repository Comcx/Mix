#ifndef FUNCTION_H
#define FUNCTION_H

#include "Mix.h"
#include "Data.h"
#include <functional>

module Function {
  
  use std::function;

  module local {
    
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

    mix<class A, class B, class C>
    function<function<C(A)>(function<C(B)>, function<B(A)>)>
    compose() {

      return
        function<function<C(A)>(function<C(B)>, function<B(A)>)>
        ([=](function<C(B)> g, function<B(A)> f) {return compose(g, f);});
    }

    // Y combinator
    mix<class T, class R>
    function<R(T)> Y
      (function<function<R(T)>(function<R(T)>)> f) {
      // Y f = f (λx.(Y f) x)
      return f([=](T x) { return Y(f)(x); });
    }


    function<Int(function<Int(Int)>, Int)>
    fact_([](function<Int(Int)> self, Int x) {

        if(x == 0) return 1;
        else return x * self(x - 1);
    });
  
    mix<class A, class B>
    function<B(A)>
    fix(function<B(function<B(A)>, A)> f) {

      struct Env {
        Int x;
      };
      val ans (function<B(A)>([=](A x) {

        Stack<Env> stk {};
        B ans;
        Env env {x};

        return ans;
      }));

      return ans;
    }
  }//end local

  use local::id;
  use local::compose;
  use local::Y;


}




#endif

