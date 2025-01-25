#include<iostream>
using namespace std;
void add(int a,int b =10,int c = 0) //always starts from last to first
{
    cout << "a = " << a << " b = " << b << " c= " << c<<endl;
}
int main()
{
    add(1,2,3);
    add(1,2);
    add(1);
    return 0;
}