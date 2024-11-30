#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>

using namespace std;

namespace ns1{
	int i_const = 0;
	float ShowArr(int n, float arr[]){
		for (int i = 0; i<n; i++){
	 		cout << arr[i] << "  ";
	 	}
	 	cout << endl;
	 	return 0;
	}
	
	void v(int n, float arr[], float a, float b) {
		srand(time(NULL));
		for (int i=0; i<n; i++){
			arr[i] = a + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (b)));
		}
	}                

	void min(int n, float a[]){
  		float s=0;
  		float min=a[0];
  		for(int i=1;i<n;i++){
	    	if(min>a[i]){ 
	    		min=a[i];
	  		}
  		cout << min << endl;
  		}
  	}
  	void del(int n, float arr[], int indx){
    	int c = 0;
    	for (int i = 0; i<n; i++){
       		if (i == indx){
         		c++;
      		}
     	}
     	int indx2 = 0;
     	float arrres[n-c];
    	for (int i = 0; i<n; i++){
	       	if (i != indx){
	         	arrres[indx2] = arr[i];
	         	indx2++;
	      	}
     	}
    	ShowArr(n-c, arrres);
	} 	
}

namespace ns2{
	int i_const = 0;
	float s = 0;
	float ShowArr(int n, float arr[]){
		for (int i = 0; i<n; i++){
	 		cout << arr[i] << "  ";
	 	}
	 	cout << endl;
	 	return 0;
	}
  	void v(int n, float arr[], float a, float b) {
      	for (int i=0;i<n;i++) {
          	if(arr[i]>a && arr[i]<b){
            	cout<<arr[i] << " ";
        	}
      	}
    	cout<<endl;
  	}

  	void max(int ns, float arrsum[]){
      	float maxs = arrsum[0];
		for(int i=0; i<ns;i++){
			if (maxs<arrsum[i]){
				maxs = arrsum[i];
			}
		}
		cout << maxs << endl;
    } 
    void del(int n, float arr[], float value){
    	int c=0;
    	for (int i = 0; i<n; i++){
       		if (arr[i] == value){
         		c++;
      		}
     	}
     	int indx2 = 0;
     	float arrres[n-c];
    	for (int i = 0; i<n; i++){
       		if (arr[i] != value){
         		arrres[indx2] = arr[i];
         		indx2++;
      		}
     	}
     	ShowArr(n-c, arrres);
  	}
}


float ShowArr(int n, float arr[]){
	for (int i = 0; i<n; i++){
 		cout << arr[i] << "  ";
 	}
 	cout << endl;
 	return 0;
}

int main(){
	int n;
	
	cout << "Enter n: ";
	cin >> n;
	
	
	float arr[n];
	
	ns1::v(n, arr, -10, 20);
	cout << "Array from -10 to 10" << endl;    
	ns1::ShowArr(n, arr);
	
	int ns = n/3;
	
	float arrsum[ns];
	int c = 0;
	int indx = 0;
	for (int i=0; i<n; i++){
		ns2::s += arr[i];
		c++;
		if (c==3){
			arrsum[indx] = ns2::s;
			ns2::s = 0;
			indx++;
			c = 0;
		}
	}
	cout << "Array from sum 3 elements: " << endl;
	ShowArr(ns, arrsum);
	cout << "Max of array from sum 3 elements: " << endl;
	ns2::max(ns, arrsum);
	
	float arre1, arre2;
	for (int i=ns1::i_const; i<n; i++){
		int j = ns2::i_const;
		for (j+1; j<n; j++){	
	 		arre1 = arr[i];
	 		arre2 = arr[j];
	 		if (arr[i]<arr[j]){
	 			arr[i] = arre2;
				arr[j] = arre1;	
			}
			else{
				arr[i] = arre1;
				arr[j] = arre2;
			}
	 	}
	}
	cout << "Array from -5 to 10 values" << endl;
	ns2::v(n, arr, -5, 10);
	cout << "Sorted array" << endl;
	ShowArr(n, arr);
	cout << "Del 1 index element: "<< endl;
	ns1::del(n, arr, 1);
	cout << "Del value element (0 element): "<< endl;
	ns2::del(n, arr, arr[0]);
	
	return 0;
}
	                