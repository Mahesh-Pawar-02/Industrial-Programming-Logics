#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
        Demo()
        {
            cout<<"Inside constructor\n";
        }
        ~Demo()
        {
           cout<<"Inside destrcutor\n"; 
        }
        void Display()
        {
            cout<<"Inside display\n";
        }
};

int main()
{
    Demo *ptr = new Demo;

    ptr->Display();

    delete ptr;
    
    return 0;
}