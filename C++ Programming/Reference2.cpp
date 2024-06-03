#include<iostream>
using namespace std;

int main()
{
    int Arr[4] = {10,20,30,40};
    int (&Brr) [4] = Arr;

    cout<<Arr[0]<<"\n";
    cout<<Brr[0]<<"\n";

    return 0;
}