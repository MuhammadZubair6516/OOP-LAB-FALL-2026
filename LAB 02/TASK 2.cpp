#include<iostream>
using namespace std ; 
bool isprime(int a)
{
 if (a == 2 || a == 3 || a == 5 || a == 7)
    {  return true;}
    else if (a == 1)  {  return false;}
    else if (a % 2 == 0) {  return false;}
    else if (a % 3 == 0) {  return false;}
    else if (a % 5 == 0) {  return false;}
    else if (a % 7 == 0) {  return false;}
    else  {  return true; }
}
int main () 
{
int a ;
cout<<"Enter Num : ";
cin>>a;
if(isprime(a)) 
cout<< a << " is a Prime." << endl;
else cout<< a << " is not a Prime." << endl;
return 0 ; 
}
