#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a, b, c;

  cout << "Enter a, b, c: ";
  cin >> a >> b >> c;
  
  if (a+b > c & a+c > b & b+c > a){
  	cout << "True";
  }
  else{
  	cout << "False";
  }

  return 0;
}