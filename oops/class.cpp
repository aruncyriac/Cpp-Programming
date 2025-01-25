#include<iostream>
using namespace std;
class Employee
{
    private:
        int id;
        string name;
    public:
        string address;
        void get_data(void)
        {
            cout << "Enteer id " ;cin >> id;
            cout << "Enteer name " ;cin >> name;
            cout << "Enteer address " ;cin >> address;
        }
        void print_data(void)
        {
            cout <<"The id is "; cout << id ;cout<< endl;
            cout <<"The name is "; cout << name;cout<< endl;
            cout <<"The address is "; cout << address;cout<< endl;

        }

};
int main()
{

    Employee emp1;
    cin >> emp1.address;
    emp1.get_data();
    emp1.print_data();
    return 0;
}