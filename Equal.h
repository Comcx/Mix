#ifndef EQUAL_H
#define EQUAL_H

#define Mix_Prelude
#include "Mix.h"

use module Mix;

module Equal {

  //This intentially leave commented for avoiding collision
  //mix<class T> Bool
  //operator==(T &a, T &b);
  
  mix<class T>
  Bool
  operator!=(T a, T b) {

    return !(a == b);
  }


  
  mix<class T> function<Bool(T, T)>
  equal() {

    return [](T a, T b) {return a == b;};
  }


}




#endif

