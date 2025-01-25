#include<iostream>
using namespace std;
template <typename T>
T Max (T a,T b)
{
    return b < a ? a: b;
}
int main()
{
    cout << Max(10, 20) << endl;
    cout << Max(33.5, 20.2) << endl;
    cout << Max(30.5, 10.2) << endl;
    cout << Max('A', 'B') << endl;
    cout << Max('Z', 'Y') << endl;
    return 0;
}