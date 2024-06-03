#include<iostream>
using namespace std;

class Demo      // Class Defination
{
    public:     // Access Specifier
        int i;      // Chracteristics
        int j;      // Chracteristics

        Demo()  // Default constructor
        {
            cout<<"Inside default constructor\n";
            i = 0;
            j = 0;
        }

        // int A = 11;
        // int B = 21;
        Demo(int A, int B)  // Parametrised Constructor
        {
            cout<<"Inside parametrised constructor\n";
            i = A;
            j = B;
        }

        // Demo &ref = obj2;
        Demo(Demo &ref)     // Copy constructor
        {
            cout<<"Inside Copy constructor\n";
            i = ref.i;
            j = ref.j;
        }

        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}