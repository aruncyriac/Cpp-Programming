#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a + b;
}
float add(float a,float b)
{
    return a + b;
}
string add(string a,string b)
{
    return a + b;
}
int add(int a,int b,int c)
{
    return a + b + c;
}
int main()
{
    cout << add(10,20) << endl;
    cout << add(10,20,30) << endl;
    cout << add(10.5f,20.6f) << endl;
    cout << add("Arun ","Cyriac") << endl;
}