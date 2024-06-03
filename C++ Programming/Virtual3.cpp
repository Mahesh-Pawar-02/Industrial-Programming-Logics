#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()  // Defination
        {   cout<<"Inside Base fun\n";  }
        void Gun()  // Defination
        {   cout<<"Inside Base gun\n";   }
        void Sun()  // Defination
        {   cout<<"Inside Base Sun\n";  }
        void Run()  // Defination
        {   cout<<"Inside Base Run\n";  }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()  // Redefination
        {   cout<<"Inside derived gun\n";   }
        void Run()  // Redefination
        {   cout<<"Inside derived Run\n";  }
};

int main()
{
    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();
    return 0;
}