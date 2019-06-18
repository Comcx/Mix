#ifndef SHOW_H
#define SHOW_H


#include "Mix.h"
#include "Foldable.h"
#include "Data.h"


module Show {

  module local {

    use std::to_string;
    use module Mix;
    use module Foldable;
    use module Function;

    //This intentially leave commented for avoiding collision
    //mix<Type T> String show(T);

    //String -> String
    String
    show(String s) { return s; }

    String 
    show(const Char *s) { return String(s); }

    //Char -> String
    String
    show(Char c) { return to_string(c); }

    //Int -> String
    String
    show(Int i) { return to_string(i); }

    //Int -> String
    String
    show(Double d) { return to_string(d); }

    //Bool -> String
    String
    show(Bool b) { return b ? "true" : "false"; }

    //Maybe<T> -> String
    mix<class T> String
    show(Maybe<T> x) {
      String ans("");
      if(x) ans = "Just(" + show(x.value()) + ")";
      else ans = "Nothing";
      return ans;
    }

    //Vector<T> -> String
    mix<class T> String
    show(Vector<T> v) { return
      
      foldl(function<String(String,T)>
              ([](String a, T e) {return a + show(e) + " ";}),
            v, String(""));
    }
  }//end local

  use local::show;


}


#endif




