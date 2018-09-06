#include <iostream>
using namespace std;
int main(){
	int n = 10;
	for (int i = 0; i < n; i++){
	//print i+1 stars for 1st,2nd and last row
	if (i == 0 || i ==1 || i == n-1){
	for (int j = 0 ; j < (i+1); j++){
	cout<<"*";
     }
	cout<<endl;
   }
    else {

	//print star
	cout<<"*";
	//print space
	for (int j = 0 ; j < (i-1) ; j++){
	cout<<" ";
	}
	//print star
	cout<<"*";
	cout<<endl;
	}
    }
	return 0;
	}
