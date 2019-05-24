#ifndef DATA_H
#define DATA_H


#include "Mix.h"
//#include "Show.h"


#ifndef Mix_Data_String
#include <string>
use String = std::string;
#endif

#ifndef Mix_Data_Vector
#include <vector>
mix<class T> use Vector = std::vector<T>;
mix<class T> Int
size(Vector<T> v) {return v.size();}
mix<class T> Vector<T>
operator&(Vector<T> v, T x) {
  v.push_back(x);
  return v;
}
#endif

#ifndef Mix_Data_Map
#include <map>
mix<class A, class B> use Map = std::map<A, B>;
mix<class A, class B> Int
size(Map<A, B> m) {return m.size();}

#endif

#ifndef Mix_Data_LinkedList
#include <list>
mix<class T> use LinkedList = std::list<T>;
mix<class T> Int
size(LinkedList<T> v) {return v.size();}

#endif

#ifndef Mix_Data_Array
#include <array>
mix<class T, size_t N> use Array = std::array<T, N>;
#endif

#ifndef Mix_Data_Queue
#include <deque>
mix<class T> use Queue = std::deque<T>;
mix<class T> Int
size(Queue<T> v) {return v.size();}

#endif

#ifndef Mix_Data_Maybe
#if Mix_Config_CXX_Version == 17

  mix<class T> def Maybe = std::optional<T>;
  mix<class T> Maybe<T> Just(T x) {return x;}
  val Nothing = std::nullopt;
#else
//mix<class T> class Maybe {
  
//}
#endif
#endif







#endif




