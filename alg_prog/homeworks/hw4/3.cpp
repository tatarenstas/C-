#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int a, b, check, n, c;
	
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	
	n = 0;
	ifstream filearr_read("file.txt");
  	while(!filearr_read.eof()){
  		filearr_read >> check;
  		if (check >= a && check <= b){
  			c++;
		}
	}
	cout << c;
	
	filearr_read.close();
	
	ofstream filearr_write("file.txt", ios::app);
  	filearr_write << endl << "res: " << c;
	filearr_write.close();

  	return 0;
}

