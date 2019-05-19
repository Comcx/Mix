#define Mix_Prelude

#include "Mix.h"
#include "Show.h"


mix<> String
show(Array<Int, 10> a) {return "array";}


mix<Type A, Type B> Vector<B>
map(Vector<A> v, B (*f)(A)) {

  Vector<B> ans {};
  for(val &e : v)
    ans.push_back(f(e));

  return ans;
}


Int ff(Bool b) {

  return b ? 1 : 0;
}

mix<Type T>
String
ss(String s, T x) { return s + show(x) + " "; }


Int
main(Int argc, Char *argv[]) {

  Vector<Int> a {1, 2, -1, -3, 5, 7, 8};
  Vector<Bool> vec {true, false, false};
  Vector<Int> vi (map(vec, ff));

  println("233");
  screen << foldl(ss, a, String("")) << endl;
  
  return 0;
}




