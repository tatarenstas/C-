#include <iostream>
#include <cmath>
#include "head.h"

using namespace std;

float Perym(float x, float y){
	return 2*(x+y);
}
float Square(float x, float y){
	return x*y;
}
float Diag(float x, float y){
	return sqrt(x*x+y*y);
}