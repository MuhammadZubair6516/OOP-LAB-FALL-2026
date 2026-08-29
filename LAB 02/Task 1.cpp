#include<iostream>
using namespace std;
int main()
{
int a ,b , c ;
cout<<"Enter Three Numbers : " ;
cin>>a>>b>>c;

if (a>b && a>c){
cout<<"The Larger Number is :" << a << endl ;
}
else if (b>a && b>c)
{
cout<<"The Larger Number is :" << b << endl ;
}
else if (c>a && c>b)
{
cout<<"The Larger Number is :" << c << endl ;
}

else {
cout<<" Check the numbers again ! "<<endl ;
}
return 0 ;

}
