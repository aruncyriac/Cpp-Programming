#include<iostream>
using namespace std;
class Student
{
    private:
        int roll;
        string name;
    public:
    Student(int,string);
    void print();
};
Student :: Student(int r_num,string  s_name)
{
    cout << "Classing constructor\n";
    roll = r_num;
    name = s_name;
}
void Student :: print()
{
    cout<< "Roll no:" << roll << endl;
    cout << "Name : " << name << endl;
}
int main()
{
    Student s1(111,"Ram");
    Student s2(222,"Ajay");
    s1.print();
    s2.print();
    return 0;
}