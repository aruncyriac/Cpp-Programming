#include<iostream>
using namespace std;

class Base
{
    protected:
    int parent_data;
    public:
    Base()
    {
        cout << "base\n";
        parent_data = 100;
    }
    void print()
    {
        cout << "From Base parent_data = " <<parent_data<<endl;
    }
};
class  Child : public Base
{
    int child_data;
    public:
    Child()
    {
        cout<< "child\n";
        child_data = 200;
    }
    void print()
    {
        cout << "From child parent_data = " <<parent_data<<endl;
        cout << "From child parent_data = " <<child_data<<endl;
    
        
    }
};
int main()
{
    Base obj1;
    obj1.print();
    Child obj2;
    obj2.print();
}
