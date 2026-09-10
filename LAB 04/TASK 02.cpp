#include<iostream>
using namespace std ;
class Student{
    private:
    string name ; const string rollNumber ; static int totalStudents;
    public:
    Student(string n , string r ): name(n), rollNumber(r){totalStudents++;}
    ~Student(){
        totalStudents--;
    cout<< "Student's object is being destroyed of Roll : "<<rollNumber<<" , "<<totalStudents<<endl;
    }
    static int gettotalStudents(){ return totalStudents;}
};
int Student ::totalStudents = 0 ;
int main()
{
    cout<<"Student Count :"<<Student::gettotalStudents()<<endl;
    {
        Student s1("Ali", "25K-6500");
        Student s2("Hamza", "25K-6230");
        cout<<"Student Count Again :"<<Student::gettotalStudents()<<endl;
    } 
    return 0;
}
