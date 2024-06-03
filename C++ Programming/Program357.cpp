#include<iostream>
using namespace std;

float Addition(float No1, float No2)
{
    float Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float Value1 = 10.9, Value2 = 11.6, Ret = 0.0;

    Ret = Addition(Value1, Value2);

    cout<<"Addition is : "<<Ret<<"\n";
    
    return 0;
}