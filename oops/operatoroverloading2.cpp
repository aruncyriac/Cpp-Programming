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
    Length operator++() //pre increment
    {
        Length res(++mtr,cm);
        return res;
    }
    Length operator++(int) //pre increment
    {
        Length res(mtr++,cm);
        return res;
    }
};
int main()
{
    Length obj(10,20);
    Length nw = obj++;
    obj.print();
    nw.print();
    nw = ++obj;
    obj.print();
    nw.print();
    return 0;
}