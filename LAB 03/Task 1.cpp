#include<iostream>
using namespace std ;
class rectangle {
	private:
		double length ; double width ;
		public :
			rectangle ()
			{
				length = 1;
				width = 1;
			}
	void setLength(double l)
    {
        if (l > 0.0 && l < 20.0)
            length = l;
    }
    void setWidth(double w)
    {
        if (w > 0.0 && w < 20.0)
            width = w;
    }
     double getLength()
    {
        return length;
    }
    double getWidth()
    {
        return width;
    }
    double perimeter()
    {
        return 2 * (length + width);
    }
    double area()
    {
        return length * width;
    }
};
int main()
{
 rectangle r;
    cout << "Default Length: " << r.getLength() << endl;
    cout << "Default Width: " << r.getWidth() << endl;

    r.setLength(10);
    r.setWidth(5);

    cout << "\nValid Values:" << endl;
    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    cout << "Area: " << r.area() << endl;

    r.setLength(25);
    r.setWidth(-5);

    cout << "\nAfter Invalid Values:" << endl;
    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;

    return 0;
}



