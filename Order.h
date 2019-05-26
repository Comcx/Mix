#ifndef ORDER_H
#define ORDER_H

#define Mix_Prelude
#include "Mix.h"
#include "Equal.h"



module Order {

  module local {

    use module Mix;
    use module Function;
    //This intentially leave commented for avoiding collision
    //mix<class T>
    //Bool
    //operator<(T &a, T &b);

    

    mix<class T>
    Bool
    operator>(T a, T b) {
      return !(a < b || a == b);
    }
    mix<class T> function<Bool(T, T)>
    less() {

      return [](T a, T b) {return a < b;};
    }

    mix<class T>
    Bool
    operator>=(T a, T b) {
      return !(a < b);
    }

    mix<class T>
    Bool
    operator<=(T a, T b) {
      return a < b || a == b;
    }

  }//end local

  //use local::operator<;
  use local::operator>;
  use local::operator<=;
  use local::operator<=;
  use local::less;
  

  
}


#endif




