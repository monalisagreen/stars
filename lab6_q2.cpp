#include <iostream>
using namespace std;
int main(){
         int n , j , i;
	 cout <<"n = ";
	cin>>n;
         for (int i = 0; i < n; i++){
        //print stars for 1st and last row
	if (i == 0 || i == n-1 ){
	  for (int j = 0; j < n ; j++){
         cout<<"*";
         }
	}
        else {
        cout<<"*";
	for (j = 0; j< (n-2); j++){
		cout<<" ";
	}
	cout<<"*";
	}
	cout<<endl;
	}
    return 9;
}
        
        
