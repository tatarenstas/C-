#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int n, c;
	
	n = 0;
	ifstream filearr_read("D:\\Zavd3.txt");
  	while(!filearr_read.eof()){
  		filearr_read >> n;
  		if (n % 2 == 0){
  			c++;
		}
	}
	cout << c;
	
	filearr_read.close();
	
	ofstream filearr_write("D:\\Zavd3.txt", ios::app);
  	filearr_write << endl << "res: " << c;
	filearr_write.close();

  	return 0;
}

