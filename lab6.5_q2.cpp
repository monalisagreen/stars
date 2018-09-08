#include <iostream>
using namespace std;


int function (int a, int b)
{
     int sum = a + b;
     return sum;
	
}
void function(int a,int b, int &s){
	s = a + b;
       // return sum;
}

     int main(){
	int c , d;
	cout << "the two no are";
	cin>>c>>d;
     cout<< function(c,d);
     int sum;
     function(c,d,sum);
     cout<<sum;

	return 0;
}
