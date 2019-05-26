#ifndef MONOID_H
#define MONOID_H

#define Mix_Prelude
#include "Mix.h"


use module Mix;

module Monoid {

  mix<Type T> T zero();
  
  //This intentially leave commented for avoiding collision
  //mix<Type T> T operator+(T a, T b);



  //Implements

  //Vector
  mix<class T> Vector<T>
  zero() {

    Vector<T> ans {};
    return ans;
  }

  mix<class T> Vector<T>
  operator+(Vector<T> a, Vector<T> b) {

    a.insert(a.end(), b.begin(), b.end());
    return a;
  }

  mix<class T> Unit
  operator+=(Vector<T> &a, Vector<T> &b) {

    a.insert(a.end(), b.begin(), b.end());
  }



  
}


#endif




