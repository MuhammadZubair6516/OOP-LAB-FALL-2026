#include <iostream>
using namespace std;
class Circle
{
private:
const double radius;
static int totalcircles ;
public:
Circle(double r) :  radius(r)
{
totalcircles++ ;
}
~Circle(){
cout<< "showing the updated count." << endl ;
totalcircles-- ;
}
static int gettotalcircles(){
return totalcircles ;
}
};
int Circle :: totalcircles = 0;
int main()
{
cout << "the count before any objects are created: " << Circle :: gettotalcircles() << endl;
Circle c1(1);
Circle c2(2);
Circle c3(3);
cout << "the count after any objects are created: " << Circle :: gettotalcircles() << endl;

return 0;
}
