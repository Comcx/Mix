#define Mix_Prelude
#include "Mix.h"


use module Mix;

module Show {

  use std::to_string;

  mix<Type T>
  String
  show(T);

  //String -> String
  mix<>
  String
  show(String s) { return s; }

  mix<>
  String
  show(Char c) { return to_string(c); }

  //Int -> String
  mix<>
  String
  show(Int i) { return to_string(i); }

  //Int -> String
  mix<>
  String
  show(Double d) { return to_string(d); }

  //Bool -> String
  mix<>
  String
  show(Bool b) { return b ? "true" : "false"; }


}



