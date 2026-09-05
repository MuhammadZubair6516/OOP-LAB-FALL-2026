#include <iostream>
using namespace std ;
class invoice {
  private :
  string partnumber ; string partdescription ; int quantity ; float priceperitem ;
  
  public : 
  invoice(string inpartnumber ,string inpartdescription , int inquantity , float inpriceperitem ){
partnumber = inpartnumber ;
partdescription = inpartdescription; 
if(inquantity<=0){ quantity = 0 ; }
else{ quantity = inquantity ; };
if(inpriceperitem<=0) {priceperitem = 0;}
else { priceperitem = inpriceperitem ; }}

string getpartnumber() { return partnumber; }
string getpartdescription() { return partdescription; }
int getquantity() { return quantity; }
float getpriceperitem() { return priceperitem; }
float getInvoiceamount(){ return quantity * priceperitem ;} 
} ;
int main() {
  invoice in1( "A5322" , "satisfied with warranty" , 3 , 50 );
  invoice in2( "6234z" , "satisfied " , 6 , -50 );
  cout << "..... INVOICE DETAIL 1 ....."<< endl;
  cout<< "Part Number : " <<in1.getpartnumber() << endl ;
  cout<< "Part Description : " <<in1.getpartdescription() << endl ;
  cout<< "Quantity : " <<in1.getquantity() << endl ;
  cout<< "price Per Item : " <<in1.getpriceperitem() << endl ;
  cout << "\n..... Total Amount 1 ....."<< endl;
  cout<< "Total Amount : " <<in1.getInvoiceamount() << endl ;
   cout << "\n..... INVOICE DETAIL 2 ....."<< endl;
  cout<< "Part Number : " <<in2.getpartnumber() << endl ;
  cout<< "Part Description : " <<in2.getpartdescription() << endl ;
  cout<< "Quantity : " <<in2.getquantity() << endl ;
  cout<< "price Per Item : " <<in2.getpriceperitem() << endl ;
  cout << "\n..... Total Amount 2 ....."<< endl;
  cout<< "Total Amount : " <<in2.getInvoiceamount() << endl ;
    return 0;
}
