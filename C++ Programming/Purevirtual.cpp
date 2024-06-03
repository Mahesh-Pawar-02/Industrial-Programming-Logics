#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void fun()      // Concrete method 1000
        {   cout<<"Base fun\n"; }
        virtual void gun()  // Concrete method  2000
        {   cout<<"Base gun\n"; }
        // abstract method  ----
        virtual int Addition(int no1, int no2) = 0; 
};

class Derived : public Base
{
    public:
        int a,b;
        void gun()  // Concrete method  3000
        {   cout<<"Derived gun\n";  }
        virtual void sun()  // Concrete method  4000
        {   cout<<"Derived sun\n";  }
        int Addition(int no1,  int no2) // Concrete method 5000
        {
            return no1 + no2;
        }
};

int main()
{
    Base bobj;
    
    Base *bp = new Derived;
    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret = bp->Addition(10,11);
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}