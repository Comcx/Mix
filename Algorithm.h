#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "Mix.h"
#include "Prelude.h"

module Algorithm {


  //-==================================================-//
  //Search algorithms
  //-==================================================-//
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
  mix<class A, class B, mix<class> class F>
  Maybe<B> search(A x, F<B> a, function<Bool(A, B)> f) {

    return search(Search::Linear, x, a, f);
  }

  mix<class T, mix<class> class F> Unit
  KMPnext(F<T> a, Vector<Int> &next) {

    Int j(0), k(-1), len(size(a));
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
    Int len(size(x)), i(0), j(0);
    Vector<Int> next(len);
    KMPnext(x, next);
    while(i < size(a) && j < size(x)) {

      if(a[i] == x[j]) {++i; ++j;}
      else {
	j = next[j];
	if(j == -1) {++i; ++j;}
      }
    }
    if(j == size(x)) ans = Just(i-size(x));

    return ans;
  }
  mix<class T, mix<class> class F>
  Maybe<T> search(F<T> x, F<T> a) {

    return search(Search::Linear, x, a);
  }



  module Match {
    Tag(Linear);
  }


  //-======================================================-//
  //Sort algorithms
  //-======================================================-//
  module Sort {
    Tag(Merge);
    Tag(Quick);
    Tag(Bubble);
    Tag(Insert);
  }

  mix<class T>
  Unit swap(T &a, T &b) {

    val t(a);
    a = b;
    b = t;
  }

  //Just testing...
  mix<mix<class> class F, class T>
  F<T> sort(Sort::InsertTag t, F<T> a) {

    F<T> ans(a);
    for(Int i(0); i < a.size(); ++i)
      for(Int j(i); j > 0 && ans[j] < ans[j-1]; --j)
        swap(ans[j], ans[j-1]);
  
    return ans;
  }

  mix<mix<class> class F, class T>
  F<T> sort(Sort::BubbleTag t, F<T> a) {

    F<T> ans(a);
    for(Int i(0); i < a.size(); ++i) {
      for(Int j(i); j > 0 && ans[j] < ans[j-1]; --j)
        swap(ans[j], ans[j-1]);
    }
    return ans;
  }

  mix<mix<class> class F, class T>
  F<T> sort(Sort::MergeTag t, F<T> a) {

    F<T> ans(a);
    
    
    return ans;
  }

  mix<mix<class> class F, class T>
  F<T> sort(Sort::QuickTag q, F<T> a) {

    F<T> ans(a);

    return ans;
  }





}








#endif



