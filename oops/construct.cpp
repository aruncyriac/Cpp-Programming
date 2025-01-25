#include<iostream>
using namespace std;
class Student
{
    private:
        int roll;
        string name;
    public:
    Student();
    void print();
};
Student :: Student()
{
    cout << "Classing constructor\n";
    roll = 123;
    name = "ajay";
}
void Student :: print()
{
    cout<< "Roll no:" << roll << endl;
    cout << "Name : " << name << endl;
}
int main()
{
    Student s1;
    s1.print();
}