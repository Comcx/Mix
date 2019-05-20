#define Mix_Prelude

#include "Mix.h"
#include "Show.h"
#include "Equal.h"
#include "Order.h"
#include "Functor.h"
#include "Monad.h"
#include "Monoid.h"
#include "Foldable.h"


struct Test {

  Int id;
  String msg;
};



module Show {
	    
  String
  show(Array<Int, 10> a) {return "array";}

  String
  show(Test x) {return show(x.id) + " : " + x.msg;}

}

module Equal {

  Bool
  operator==(Test &a, Test &b) {
    return a.id == b.id;  
  }
}

module Order {

  Bool
  operator<(Test &a, Test &b) {

    return a.id < b.id;
  }
}

module Monoid {

  Test operator+(Test &a, Test &b) {

    Test ans {a.id + b.id, a.msg + " " + b.msg};
    return ans;
  }
}
use module Show;
use module Functor;
use module Foldable;
use module Monoid;
use module Equal;
use module Order;


mix<Type T>
String
ss(String s, T x) { return s + show(x) + " "; }

Int f(Bool b) {return 1;}

Int
main(Int argc, Char *argv[]) {

  Vector<Int> a {1, 2, -1, -3, 5, 7, 8};
  Vector<Int> vi
    (map(a,
  	 function<Int(Int)>([](Int i) {return i * 2;})));
  Test tt1 {5, "tt1"};
  Test tt2 {6, "tt2"};
  Test ttt (tt1 + tt2);
  println(show(ttt));
  println(tt1 >= tt2);

  println("233");
  screen << foldl(ss, vi, String("")) << endl;
  
  return 0;
}











