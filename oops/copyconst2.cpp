#include<iostream>
using namespace std;
class Test
{
    public :
    int a;
    int *ptr;
    Test(int n1,int n2)
    {
        a = n1;
        ptr = (int *)malloc(4);
        *ptr = n2;
    }
    Test(Test &obj)
    {
        a = obj.a;
        ptr = (int*)malloc(4);
        *ptr = *obj.ptr;
    }
    void print()
    {
        cout << a << " "<< *ptr << endl;

    }
};
int main()
{
    Test obj1(10,20);
    obj1.print();

    Test obj2 = obj1;
    obj2.a = 100;
    *obj2.ptr = 200;

    obj2.print();
    obj1.print();

}