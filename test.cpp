#define Mix_Prelude

#include "Mix.h"
#include "Show.h"
#include "Functor.h"
#include "Monoid.h"
#include "Foldable.h"


module Show {
	    
  mix<> String
  show(Array<Int, 10> a) {return "array";}

}

struct Test {

  Int x;
};

module Monoid {

  mix<> Test operator+(Test &a, Test &b) {

    Test ans {a.x + b.x};
    return ans;
  }
}
use Show::show;
use Functor::map;
use Foldable::foldl;
use Monoid::operator+;



mix<Type T>
String
ss(String s, T x) { return s + show(x) + " "; }


Int
main(Int argc, Char *argv[]) {

  Vector<Int> a {1, 2, -1, -3, 5, 7, 8};
  Vector<Bool> vec {true, false, false};
  Vector<Int> vi
    (map(vec,
	 function<Int(Bool)>([](Bool b) {return 1;})));
  Test tt1 {5};
  Test tt2 {6};
  Test ttt (tt1 + tt2);
  println(ttt.x);

  println("233");
  screen << foldl(ss, vi, String("")) << endl;
  
  return 0;
}











