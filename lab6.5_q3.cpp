// maximum
#include <iostream>
using namespace std;
//finding the maximum number by value
	int sum(int m, int n){
 	int sum = m + n;
	if (m>n){
	cout<<m;}
	else {
         cout<< n;}
	return sum;
}
void sumr(int m,int n, int &c){
	 c = m + n;
	if (m>n){
	cout<<m;}
	else {
         cout<< n;}
       
}
	
	int main(){
	int d,e;
        cout<< " the two number are ";
        cin>>d>>e;
        cout<< sum(d,e);
        int sum;
        sumr(d,e,sum);
        cout<<sum;
	return 0;
}
