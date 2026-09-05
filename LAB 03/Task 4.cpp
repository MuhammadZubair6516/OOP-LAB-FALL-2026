#include <iostream>
using namespace std ;
class vehicle {
  private :
  int year ; string manufacturer ; int speed ;
   public : 
    vehicle (int vyear , string vmanufacturer )
    {
     year = vyear ; manufacturer = vmanufacturer ; speed = 0 ;}
    int getaccelerate(int i){
    	return speed = speed + 5 ;
	}
    int getbrake(int i){
    	return speed = speed - 5 ;
	}
    int getSpeed(int i){
    	return speed ;
	}
};
   int main()
   {
   	vehicle rick( 2005 , "Tri-Wheeler" );
   	vehicle bike( 2012 , "Honda");
   	cout<< ".....For Rickshaw....." <<endl;
   	for(int i=0 ; i<5 ; i++){
	   rick.getaccelerate(i);
   	cout<< " Speed After Acc : "<< rick.getSpeed(i) << endl;
   };
   for(int i=0 ; i<2 ; i++){
	   rick.getbrake(i);
   	cout<< " Speed After Break : " << rick.getSpeed(i) << endl;
   };
   
   cout<< "\n.....For Bike....." <<endl;
   	for(int i=0 ; i<5 ; i++){
	   bike.getaccelerate(i);
   	cout<< " Speed After Acc : " << bike.getSpeed(i) << endl;
   };
   for(int i=0 ; i<2 ; i++){
	   bike.getbrake(i);
   	cout<< " Speed After Break : " << bike.getSpeed(i) << endl;
   };
   return 0;
   }
