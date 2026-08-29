#include<iostream>
using namespace std;
int main ()
{
	 int income , time ; double charge , extratime ;
	cout<< "Enter your income : ";
	cin>> income;
	cout<< "Enter your consulting time in minutes : ";
	cin>> time;
	if(income<=25000)
	 {
	 if(time<=30 ) 
	 cout<<"NO SERVICE CHARGE !" ;
	 else 
	 {
	 extratime = time - 30 ;
	 charge = 70*0.40*(extratime/60);
	 cout<<"Service Charge : "<<charge<<" pkr"<< endl ;
}
}
    else
    {
    if(time<=20 ) 
	 cout<<"NO SERVICE CHARGE !" ;
	 else
	 {
	 extratime = time - 20 ;
	 charge = 100*0.70*(extratime/60);
	 cout<<"Service Charge : "<<charge<<" pkr"<< endl ;
	}
}
	 return 0;
}
