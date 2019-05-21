/**
 * #+TITLE:  Mix Library
 * #+AUTHOR: Comcx
 *
 */


#ifndef MIX_H
#define MIX_H


//module Mix {// ===============>>
#include <functional>

#ifdef Mix_Prelude

#define Mix_String
#define Mix_IO
#define Mix_Vector
#define Mix_LinkedList
#define Mix_Queue
#define Mix_Map
#define Mix_Array

#endif


#ifdef Mix_String
#include <string>
using String = std::string;
#endif

#ifdef Mix_Vector
#include <vector>
template<class T> using Vector = std::vector<T>;
#endif

#ifdef Mix_Map
#include <map>
template<class A, class B> using Map = std::map<A, B>;
#endif

#ifdef Mix_LinkedList
#include <list>
template<class T> using LinkedList = std::list<T>;
#endif

#ifdef Mix_IO
#include <iostream>
auto &screen(std::cout);
using std::endl;

template<class T> void
print(T x) {

  screen << x;  
}
template<class T> void
println(T x) {

  screen << x << endl;
}

#endif

#ifdef Mix_Array
#include <array>
template<class T, size_t N> using Array = std::array<T, N>;
#endif

#ifdef Mix_Queue
#include <deque>
template<class T> using Queue = std::deque<T>;
#endif




#define var    auto
#define val    const auto
#define mix    template
#define Class  class
#define use    using
#define def    using
#define Type   typename
#define module namespace

#define const(T)  const T
#define unsign(T) unsigned T
#define O_o(...)  virtual __VA_ARGS__ = 0
#define Tag(id)   enum id##Tag {id}


def Int    = int;
def Unit   = void;
def Bool   = bool;
def Char   = char;
def Float  = float;
def Double = double;

use std::function;


module Mix {

	    
}






#endif








