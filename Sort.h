#ifndef SORT_H
#define SORT_H

#define Mix_Prelude
#include "Mix.h"

//Algorithms
Tag(Merge);
Tag(Quick);
Tag(Bubble);
Tag(Insert);


mix<class T>
Unit swap(T &a, T &b) {

  val t(a);
  a = b;
  b = t;
}

//Just testing...
mix<mix<class> class F, class T>
F<T> sort(InsertTag b, F<T> a) {

  F<T> ans (a);
  for(Int i(0); i < a.size(); ++i)
    for(Int j(i); j > 0 && ans[j] < ans[j-1]; --j)
      swap(ans[j], ans[j-1]);
  
  return ans;
}

mix<mix<class> class F, class T>
F<T> sort(BubbleTag i, F<T> a) {

  F<T> ans (a);
  for(Int i(0); i < a.size(); ++i) {
    for(Int j(i); j > 0 && ans[j] < ans[j-1]; --j)
      swap(ans[j], ans[j-1]);
  }
  return ans;
}

mix<mix<class> class F, class T>
F<T> sort(QuickTag q, F<T> a) {

  F<T> ans (a);

  return ans;
}



#endif

