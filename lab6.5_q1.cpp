#include <iostream>
using namespace std;
// function that include cost of the single unit, no of units,tax rate and returns the value for calling modules
	
	void func1(int &unitCst,int &units, int&taxRt){
	cout<<"the cost of the single unit ";
	cin>>unitCst;
	
	cout<<"the total number of units";
	cin>>units;
	
	cout<<"the tax rate of the unit ";
	cin>>taxRt;
	cout<<endl;
   }

	//function receives cost of the single unit , no of units, tax rate and returns to the calling module the sales tax and total cost.
	void func2(int unitCst, int units, int taxRt, int &salestx, int &totaldue){
	salestx = (unitCst*taxRt/100);
	totaldue = units*(unitCst+salestx);
	
	}
	
	//function receives cost of the single unit, no of units, tax rate ,sales tax and total cost and outputs in readable format
	void func3(int unitCst, int units, int taxRt, int salestx, int totaldue){
	cout<<"the cost of the single unit"<<unitCst<<endl;
	cout<<"the total number of units "<<units<<endl;
	cout<<"the tax rate of the unit"<<taxRt<<endl;
	cout<<"the sales tax of the unit"<<salestx<<endl;
	cout<<"the total cost of the"<<units<<"unit"<<totaldue<<endl;
	
    }
	//main function with variables called unitcost, unitspurch,tax rate,sales tax, and totaldue.
	int main(){
	int unitCst,units,taxRt,salestx,totaldue;
	func1(unitCst,units,taxRt);
	func2(unitCst,units,taxRt,salestx,totaldue);
	func3(unitCst,units,taxRt,salestx,totaldue);
	
	return 0;

	}

