#include<iostream>
using namespace std;

void Swap(int No1, int No2)
{
    int Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    int iValue1 = 10;
    int iValue2 = 20;

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    Swap(iValue1, iValue2);
    
    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";
    
    return 0;
}