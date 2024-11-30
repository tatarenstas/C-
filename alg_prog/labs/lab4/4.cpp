#include <iostream>
#include <cmath>

using namespace std;

int main(){
  float a,b,c,x1,x2,D;
  
  cout << "enter a,b,c:";
  cin >> a >> b >> c;
  
  D=pow(b,2)-4*a*c;
  
  if (D>=0){
  	x1=(-b+sqrt(D))/(2*a);
  	x2=(-b-sqrt(D))/(2*a);
  	cout<< "x1=" << x1<<endl;
  	cout<< "x2="<<x2;
  }
  else {
    cout <<"nema";
  }
  
  return 0;
}