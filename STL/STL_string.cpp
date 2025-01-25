#include<iostream>
using namespace std;
int main()
{
    string s1;
    string s2 = "hello worldy";
    string s3(s2);
    string s4(s2,1,3);
    string s5(5,'*');
    cout << "s1= "<< s1 <<endl ;
    cout << "s2= "<< s2 <<endl ;
    cout << "s3= "<< s3 <<endl ;
    cout << "s4= "<< s4 <<endl ;
    cout << "s5= "<< s5 <<endl ;
    cout<<"s1 length ="<<s1.length()<<endl;
    cout <<"s1 capacity = " << s2.capacity() <<endl;
    s2.resize(5);
    cout <<"s2 after resize h"<<s2<<s2.capacity()<<endl;
    return 0;
 }