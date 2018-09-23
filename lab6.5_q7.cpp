
#include<iostream>
using namespace std;

//user defined fuctiontoUpper() that returns uppercaseof inputChar cll-by-value

char toUpper(char a) {
        char b;
               if (a>93) {b=a-32;};
return b;
         }



char toLower(char a) {
        char b; 
               if(a<93) {b=a+32;};
return b;
        }

//write main program

int main () {
        char x,ch,ch1;
                      cout<< "welcome to question 7"<<endl;
                      cout<< "type any alphabetical character:";
                      cin>> x ;
            ch = toUpper(x) ;
            ch1 = toLower(x) ;
         if(x > 93) (cout<< "the character is in lower case,the upper case is" <<ch<< endl);
         else{cout<<"the character is in upper case ,thr lower case is"<<ch1<<endl;}
return 0;}
