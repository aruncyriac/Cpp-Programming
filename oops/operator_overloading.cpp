#include<iostream>
using namespace std;

class Length
{
    int mtr;
    int cm;
    public:
    Length(int m,int c)
    {
        mtr = m;
        cm = c;
    }
    void print()
    {
        cout<< mtr <<":" << cm <<endl;
    }
    void operator++()
    {
        mtr++;
    }
};
int main()
{
    Length obj1(100,200);
    ++obj1;
    obj1.print();
}