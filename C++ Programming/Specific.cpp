#include<iostream>
using namespace std;

int AdditionI(int no1, int no2)
{
    int ans = 0;
    ans = no1+no2;
    return ans;
}
float AdditionF(float no1, float no2)
{
    float ans = 0.0;
    ans = no1+no2;
    return ans;
}
double AdditionD(double no1, double no2)
{
    double ans = 0.0;
    ans = no1+no2;
    return ans;
}
int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = AdditionI(10,11);
    fRet = AdditionF(10.0f,11.0f);
    dRet = AdditionD(10.0,11.0);

    cout<<iRet<<"\n";
    cout<<fRet<<"\n";
    cout<<dRet<<"\n";

    return 0;
}