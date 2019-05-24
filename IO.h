#ifndef IO_H
#define IO_H

#include "Mix.h"
#include "Show.h"


#include <iostream>
var &screen(std::cout);
use std::endl;

mix<class T> void
print(T x) { screen << Show::show(x); }

mix<class T> void
println(T x) { screen << Show::show(x) << endl; }









#endif


