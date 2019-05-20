#ifndef MONOID_H
#define MONOID_H

#define Mix_Prelude
#include "Mix.h"


use module Mix;

module Monoid {

  mix<Type T> T zero();
  
  //This intentially leave commented for avoiding collision
  //mix<Type T> T operator+(T &a, T &b);
  
}


#endif




