#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int width, height;
    string shape_name;
    public:
    Polygon(int a,int b,string name)
    {
        width = a;
        height = b;
        shape_name = name;
    }
    string get_name(void)
    {
        return shape_name;
    }
    //pure virtual function
    virtual int get_area(void) = 0;
    void print_area()
    {
        cout << "The area of " << this->get_name() << " is " << this->get_area() << endl;
    }
};
class Rectangle:public Polygon
{
    public:
    Rectangle(int a,int b,string name):Polygon(a,b,name){}
    int get_area()
    {
        return width*height;
    }
};
class Triangle:public Polygon
{
    public:
    Triangle(int a,int b,string name):Polygon(a,b,name){}
    int get_area()
    {
        return width*height/2;
    }
};
int main()
{
    Polygon *shape[2];
    shape[0] = new Rectangle(10,20,"Rectangle");
    shape[1] = new Triangle(10,20,"Triangle");
    for(int i = 0;i < 2;i++)
    {
        shape[i]->print_area();
    }
    return 0;
}