#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "Mix.h"


module Algorithm {
  
  module Search {
    Tag(Linear);
    Tag(Binary);
  }
  mix<class T, mix<class> class F>
  Bool elem(Search::LinearTag t, T x, F<T> a) {

    Bool ans(false);
    for(val &e : a) {

      if(x == e) {
	ans = true;
	break;
      }
    }
    return ans;
  }
  mix<class T, mix<class> class F>
  Bool elem(T x, F<T> a) {

    return elem(Search::Linear, x, a);
  }


  mix<class A, class B, mix<class> class F>
  Maybe<B> search(Search::LinearTag t,
		  A x, F<B> a, function<Bool(A, B)> f) {

    Maybe<B> ans(Nothing);
    for(val &e : a) {

      if(f(x, e)) {
	ans = Just(e);
        break;
      }
    }
    return ans;
  }


  mix<class T, mix<class> class F> Unit
  KMPnext(F<T> a, Vector<Int> &next) {

    Int j(0), k(-1), len(a.size());
    next[0] = -1;
    while(j < len) {

      if(k == -1) {
	next[++j] = 0;
	k = 0;
      }
      else if(a[j] == a[k]) {
	++k;
	next[++j] = k;
      }
      else k = next[k];
    }
  }
  mix<class T, mix<class> class F>
  Maybe<T> search(Search::LinearTag t,
		  F<T> x, F<T> a) {

    Maybe<T> ans(Nothing);
    

    return ans;
  }



  module Match {
    Tag(Linear);
  }






}








#endif



