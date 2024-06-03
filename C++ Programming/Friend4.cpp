#include<iostream>
using namespace std;

class Hello
{
    public:
        void fun();
        void gun();
};

class Demo
{
    public:     int i;
    private:    int j;
    protected:  int k;
    public:
        Demo()
        {
            i = 10; j = 20; k = 30;
        }
    friend class Hello;
};

// Return_Value Class_name :: Function_name()
void Hello :: fun()
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";    
}

void Hello :: gun()
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";    
}

int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();

    return 0;
}
