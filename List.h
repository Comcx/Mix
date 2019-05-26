#ifndef LIST_H
#define LIST_H

#include "Mix.h"
#include "Data.h"

module List {
  

  //Basics
  mix<mix<class> class F, class T>
  F<T> operator&(F<T>, T);

  mix<mix<class> class F, class T>
  Unit operator&=(F<T> &, T);

  mix<mix<class> class F, class T>
  Int size(F<T>);

  mix<mix<class> class F, class T>
  T head(F<T>);

  mix<mix<class> class F, class T>
  T last(F<T>);

  mix<mix<class> class F, class T>
  F<T> init(F<T>);

  mix<mix<class> class F, class T>
  F<T> tail(F<T>);

  //Option
  mix<mix<class> class F, class T>
  F<T> reverse(F<T>);

  mix<mix<class> class F, class T>
  Unit reverse_i(F<T>&);

  mix<mix<class> class F, class T>
  T at(F<T>, Int);






  //Implements

  //Vector
  mix<class T> Int
  size(Vector<T> v) {return v.size();}
  
  mix<class T> Vector<T>
  operator&(Vector<T> v, T x) {
    v.push_back(x);
    return v;
  }
  mix<class T> Unit
  operator&=(Vector<T> &v, T x) {
    v.push_back(x);
  }

  //LinkedList
  mix<class T> Int
  size(LinkedList<T> v) {return v.size();}
  
  mix<class T> LinkedList<T>
  operator&(LinkedList<T> v, T x) {
    v.push_back(x);
    return v;
  }
  mix<class T> Unit
  operator&=(LinkedList<T> &v, T x) {
    v.push_back(x);
  }





}





#endif



