#include<iostream>
using namespace std ; 
int countdigits(int a)
{
 if (a >= 1 && a<10 ) {  return 1;}
    else if (a <100)  {  return 2;}
    else if (a <1000) {  return 3;}
    else if (a <10000) {  return 4;}
    }
int main () 
{
int a ;
cout<<"Enter Num (1 to 9999 ) to count digits : ";
cin>>a;
cout<< a << " has " << (countdigits(a))<< " digits"<< endl;
return 0 ; 
}
