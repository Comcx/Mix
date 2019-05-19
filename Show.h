#define Mix_Prelude
#include "Mix.h"


mix<Type T>
String
show(T x);

//String -> String
mix<>
String
show(String s) { return s; }

//Int -> String
mix<>
String
show(Int i) { return std::to_string(i); }

//Int -> String
mix<>
String
show(Double d) { return std::to_string(d); }

//Bool -> String
mix<>
String
show(Bool b) { return b ? "true" : "false"; }





