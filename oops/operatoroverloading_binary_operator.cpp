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
    Length operator +(Length &obj) //argument depends upon oprand of the operator
    {
       int m_res = mtr + obj.mtr;
       int c_res = cm + obj.cm;
       m_res += c_res / 100;
       c_res = c_res % 100;
       Length res(m_res,c_res);
       return res;
    }
};
int main()
{
    Length obj1(10,50);
    obj1.print();
    Length obj2(15,60);
    obj2.print();
    Length res = obj1 + obj2;
    res.print();
}