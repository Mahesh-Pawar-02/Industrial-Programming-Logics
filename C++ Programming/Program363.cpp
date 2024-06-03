#include<iostream>
using namespace std;

void Swap(float &No1, float &No2)
{
    float Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    float fValue1 = 10.9;
    float fValue2 = 20.9;

    cout<<"Value of iValue1 : "<<fValue1<<"\n";
    cout<<"Value of iValue2 : "<<fValue2<<"\n";

    Swap(fValue1, fValue2);
    
    cout<<"Value of iValue1 : "<<fValue1<<"\n";
    cout<<"Value of iValue2 : "<<fValue2<<"\n";
    
    return 0;
}