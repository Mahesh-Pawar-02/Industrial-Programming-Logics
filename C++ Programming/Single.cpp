#include<iostream>
using namespace std;

class Demo
{
    public:
        int x,y;

        Demo()
        {
            cout<<"Inside Demo constructor\n";
            x = 10;
            y = 20;
        }
        ~Demo()
        {
            cout<<"Inside Demo destructor\n";
        }
        void fun()
        {
            cout<<"Inside fun of Demo\n";
        }      
};

// class Hello extends Demo
class Hello : public Demo
{
    public:
        int a,b,c;
        Hello()
        {
            cout<<"Inside Hello constructor\n";
            a = 30;
            b = 40;
            c = 50;
        }
        ~Hello()
        {
            cout<<"Inside Hello destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of hello\n";
        }
};

int main()
{
    Hello hobj;

    cout<<sizeof(hobj)<<" bytes \n";   // 20

    cout<<hobj.x<<"\n";
    cout<<hobj.y<<"\n";
    cout<<hobj.a<<"\n";
    cout<<hobj.b<<"\n";
    cout<<hobj.c<<"\n";
    
    hobj.fun();
    hobj.gun();

    return 0;
}