#include <iostream>

using namespace std;

int main() {
  int K, day;

  cout << "Enter K: ";
  cin >> K;
  
  day = K%7+1;
  cout << "Num: " << day;
  cout << "\n";
  if (day == 1)
  	cout << "Monday";
  if (day == 2)
  	cout << "Tuesday";
  if (day == 3)
  	cout << "Wednesday";
  if (day == 4)
  	cout << "Thursday";
  if (day == 5)
  	cout << "Friday";
  if (day == 6)
  	cout << "Saturday";
  if (day == 7)
  	cout << "Sunday";
  
  return 0;
}