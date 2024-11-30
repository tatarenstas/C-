#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i, n, amin, arr[10]{};
	i = 0;
	for (i; i<10; i++){
		cout << i << endl;
		arr[i] = 5 + rand() % 10;
	}
	i = 0;
	for (int i = 0; i<10; i++)
 	{
 		cout << arr[i] << "  ";
 	}
 	
 	cout << "\n";
 	
 	i = 0;
	amin = arr[0];
 	for (i; i<10;i++){
 		if (arr[i] < amin){
 			amin = arr[i];
		}
	}
	cout << amin;
 	
	return 0;
}