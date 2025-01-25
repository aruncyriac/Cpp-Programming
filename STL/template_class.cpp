#include<iostream>
using namespace std;
template <class T> //we can use typename instead of class
class Array
{
    int size;
    T *ptr;
    public:
    Array(T *p,int s)
    {
        size = s;
        ptr = new T[size];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = p[i];
            /* code */
        }
    }
    void print()
    {
        for(int i = 0; i < size;i++)
        {
            cout<<ptr[i]<<" ";
         }
    }
    
};
int main()
{
    float arr[5] = {1.1,2.3,3.2,4.1,5.34};
    Array <float>obj(arr,5);
    obj.print();
    return 0;
}