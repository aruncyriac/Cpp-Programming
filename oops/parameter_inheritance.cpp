#include<iostream>
using namespace std;

class Base
{
    protected:
    int parent_data1;
    float parent_data2;
    public:
    Base(int a,float b)
    {
        cout << "base\n";
        parent_data1 = a;
        parent_data2 = b;
    }
    void print()
    {
        cout << "From Base parent_data1 = " <<parent_data1<<endl;
        cout << "From Base parent_data2 = " <<parent_data2<<endl;
    }
};
class  Child : public Base
{
    int child_data1;
    float child_data2;
    public:
    Child(int a,float b,int c,float d):Base(a,b)
    {
        cout<< "child\n";
        child_data1 = c;
        child_data2 = d;

    }
    void print()
    {
        cout << "From child parent_data1 = " <<parent_data1<<endl;
        cout << "From child parent_data2 = " <<parent_data2<<endl;
        cout << "From child data1 = " <<child_data1<<endl;
        cout << "From child data2 = " <<child_data2<<endl;
    
    
        
    }
};
int main()
{
    Base obj1(100,(float)1.234);
    obj1.print();
    Child obj2(100,(float)1.234,200,(float)5.678);
    obj2.print();
    return 0;
}
