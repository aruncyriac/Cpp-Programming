#include<iostream>
using namespace std;
//pass by address
int swap_address(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    return 0;
}
//pass by refereance
int swap_ref(int &a,int &b)
{
    int t = a;
    a = b;
    b = t;
    return 0;
}
int main()
{
    int a,b;
    cout << "Enter the a,b ";
    cin >> a >> b;
    swap_address(&a,&b);
    cout <<"\n" <<a << b <<endl;
    swap_ref(a,b);
    cout <<"\n" <<a << b <<endl;
    return 0;
}