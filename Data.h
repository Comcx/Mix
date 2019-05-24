#ifndef DATA_H
#define DATA_H


#include "Mix.h"


#ifndef Mix_Data_String
#include <string>
use String = std::string;
#endif

#ifndef Mix_Data_Vector
#include <vector>
mix<class T> use Vector = std::vector<T>;
#endif

#ifndef Mix_Data_Map
#include <map>
mix<class A, class B> use Map = std::map<A, B>;
#endif

#ifndef Mix_Data_LinkedList
#include <list>
mix<class T> use LinkedList = std::list<T>;
#endif

#ifndef Mix_Data_IO
#include <iostream>
var &screen(std::cout);
use std::endl;

mix<class T> void
print(T x) { screen << x; }

mix<class T> void
println(T x) { screen << x << endl; }
#endif

#ifndef Mix_Data_Array
#include <array>
mix<class T, size_t N> use Array = std::array<T, N>;
#endif

#ifndef Mix_Data_Queue
#include <deque>
mix<class T> use Queue = std::deque<T>;
#endif

#ifndef Mix_Data_Maybe
#if Mix_Config_CXX_Version == 17

  mix<class T> def Maybe = std::optional<T>;
  mix<class T> T Just(T x) {return x;}
  val Nothing = std::nullopt;
#else
//mix<class T> class Maybe {
  
//}
#endif
#endif







#endif




