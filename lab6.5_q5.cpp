#include <iostream>
using namespace std;

// fuction that ask the user to input 2 variables and asks the user what operation does he want to perform.
	int sum(int m, int n){
	int sum = m + n;
	return sum;
	    }
	int max(int m, int n){
	if (m>n) { int maximum = m;
                       return maximum; }
	else { int maximum = n;
                       return maximum; }
	      }
	int min(int m, int n){
	if (m<n) { int minimum = m;
                       return minimum; }
	else { int minimum = n;
                       return minimum; }
	      }

	int main () {
	      int m, n, p, option;
	cout<< "question no. 5"<<endl;
        cout<< "enter the first number";
        cin>>m;
	cout<< "enter the second number";
	cin>>n;
	cout<< "enter the number of the operation do you want to perform"<<endl;
	cout<<" 1. sum "<<endl;
        cout<<" 2. finding maximum"<<endl;
        cout<<" 3. finding minimum"<<endl;
	cin>>option;
	if (option==1) { p = sum(m,n);
	cout<<"the sum of the two numbers is"<<p<<endl;}
	else if (option==2) {p = max(m,n);
	cout<<"the maximum of the two numbers is"<<p<<endl;}
	else if (option==3) {p = min(m,n);
	cout<<"the minimum of the two numbers is"<<p<<endl;}
	else { cout<< "invalid optional! please try again!!"<<endl;}
        return 0;
	}


















	
