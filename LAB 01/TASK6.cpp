#include<iostream>
#include<string>
using namespace std;
int main()
{
int number ;
int *ptr =&number ;

cout<<"Enter an integer  : " ;
cin>>number;
cout<<"Value : " <<number << endl ;
cout<<"Address : " <<&number << endl ;
cout<<"pointer : " <<ptr << endl ;
cout<<"Dereference  : " <<*ptr << endl ;

return 0;

}
