#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()
        {
            cout<<"Inside derived gun\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<"\n";   // 12
    cout<<sizeof(dobj)<<"\n";   // 20
    
    bobj.Fun();

    dobj.Fun();
    dobj.Gun();
    
    return 0;
}