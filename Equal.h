#ifndef EQUAL_H
#define EQUAL_H

#define Mix_Prelude
#include "Mix.h"
#include "Data.h"

use module Mix;

module Equal {

  module local {
    
    use module Function;
    //This intentially leave commented for avoiding collision
    //mix<class T> Bool
    //operator==(T &a, T &b);
  
    mix<class T>
    Bool
    operator!=(T a, T b) {

      return !(a == b);
    }


    mix<class T>
    Bool operator==(Maybe<T> a, Maybe<T> b) {
					     
      if(a) {
	if(b) return a.value() == b.value();
	else return false;
      }
      else {
	if(b) return false;
	else return true;
      }
    }
  
    mix<class T> function<Bool(T, T)>
    equal() {

      return [](T a, T b) {return a == b;};
    }
  }//end local

  use local::operator!=;
  use local::operator==;
  use local::equal;

}




#endif

