#include<iostream>
using namespace std;
namespace global
{
    int x = 10;
} //no semicolon needed it is just a space
int main()
{
    
    double x = 10.5;
    
    cout << global :: x <<endl;
    return 0;
}
