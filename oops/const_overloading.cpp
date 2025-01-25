#include<iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    string address;
    float grade;
    public:
    Student(int roll,string name,string address = "",float grade = 0);
    Student(string name, string address);
    Student(string name, float grade);
    void print_details();
};
Student :: Student(int roll,string name,string address,float grade)
{
    rollno = roll;
    this->name = name;
    this->address = address;
    this->grade = grade;
}
Student::Student(string name, string address)
{
    this->name = name;
    this->address = address;
}
Student::Student(string name, float grade)
{
    this->name = name;
    this->grade = grade;
}
void Student::print_details()
{
    cout << "Name = " << name << endl;
    cout << "Roll = " << rollno << endl;
    cout << "Address = " << address << endl;
    cout << "grade = " << grade << endl;
}
int main()
{
    Student s1(1,"Arun","Banglore",78.4),s2("Cyriac","Chennai"),s3(1,"Raj");
    s1.print_details();
    s2.print_details();
    s3.print_details();
    return 0;
}