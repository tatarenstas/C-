#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int n = 3;
	int arr[n];
	
	cout << "Check if your file is empty!" << endl;
	
	for (int i=0; i<n; i++){
		cout << "Enter n" << i+1 << ": ";
		cin >> arr[i];
	}
	
  	ofstream filearr_write("file.txt", ios::app);
  	for (int i=0; i<n; i++){
  		filearr_write << arr[i] << " ";
	}
	
	
	int i = 0;
	ifstream filearr_read("file.txt");
  	while(!filearr_read.eof()){
  		filearr_read >> arr[i];
  		i++;
	}
	filearr_read.close();
	
	if (arr[0] + arr[1] > arr[2] && arr[1] + arr[2] > arr[0] && arr[0] + arr[2] > arr[1]){
		filearr_write << "Possible";
	}
	else {
		filearr_write << "Impossible";
	}
	filearr_write.close();

  	return 0;
}
