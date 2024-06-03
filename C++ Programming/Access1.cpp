#include<iostream>
using namespace std;

class Demo
{
        int i;
    public:
        int j;
    private:
        int k;
    protected:
        int a;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }
        void Display()
        {
            cout<<"Value of i : "<<i<<"\n"; // A
            cout<<"Value of j : "<<j<<"\n"; // A
            cout<<"Value of k : "<<k<<"\n"; // A
            cout<<"Value of a : "<<a<<"\n"; // A                               
        }
};

class Hello : public Demo
{
    public:
        void HelloDisplay()
        {
            //cout<<"Value of i : "<<i<<"\n"; // NA
            cout<<"Value of j : "<<j<<"\n"; // A
            //cout<<"Value of k : "<<k<<"\n"; // NA
            cout<<"Value of a : "<<a<<"\n"; // A                             
        }
};

int main()
{
    Hello hobj;
    hobj.HelloDisplay();

    return 0;
}