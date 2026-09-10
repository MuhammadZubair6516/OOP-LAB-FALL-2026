#include<iostream>
using namespace std ;
class Product{
    private:
    string name ;  double price ; static int totalUnitsSold ;
    public:
    Product(string n , double p): name(n), price(p){}
    void sell(){
        totalUnitsSold++;
    }
    static int gettotalUnitsSold(){
        return totalUnitsSold;
    }
};
int Product ::totalUnitsSold = 0 ;
int main()
{
    Product p1("Book", 100);
    Product p2("Bag" , 2500);
    p1.sell();
    p2.sell();
    p1.sell();
    cout<<"The total number of units sold : "<<Product::gettotalUnitsSold()<< endl; 
    return 0;
}
