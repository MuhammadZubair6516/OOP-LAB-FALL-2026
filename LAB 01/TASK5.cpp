#include<iostream>
using namespace std;
int main()
{
int a[5] ;
int b = 0 ;
for(int i =0 ; i<5 ; i++){

cout<< "Enter Number :";
cin>>a[i];

}

for(int i =0 ; i<5 ; i++){
if(a[i]>b)
{
b=a[i];
}
}
cout<< "Largest : "<<b<<endl;

return 0;
}

