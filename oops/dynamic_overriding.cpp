#include<iostream>

using namespace std;

class Base
{
    protected:
    int a;
    string str;
    double d;
    public:
    Base(int a = 0,string s = "NIL",double val = 0.0)
    {
        cout<<"from parent\n";
        this->a = a;
        str = s;
        d = val;
    }
    /*with out vitural*/
    virtual void print(void)
    {
        cout << "from parent function\n";
        cout <<"a = " << a << " str = " << str << " d = " << d <<endl;
    }
};
class Child : public Base
{
    char c;
    float f;
    public :
    Child(int a,string s,double val,char ch,float fl):Base(a,s,val)
    {
        cout << "from child\n";
        c = ch;
        f = fl;
    }
    void print(void)
    {
        cout<< "From child\n";
        cout <<"a = " << a << " str = " << str << " d = " << d <<endl;
        cout <<"c = " << c << " f = " << f << endl;
    }
};
int main()
{
    Base *obj1 = new Base(10,"Banglore",123.456);
    obj1->print();
    Base *obj2 = new Child(10,"Chennai",456.789,'A',23.45f);
    obj2->print();
    return 0;
}