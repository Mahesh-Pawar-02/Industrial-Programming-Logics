#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &ref = no;
    int &x = ref;

    int *p = &no;
    int *(&q) = p;

    no++;

    cout<<no<<"\n";     // 11
    cout<<ref<<"\n";    // 11

    cout<<&no<<"\n";    // 100
    cout<<&ref<<"\n";   // 100

    cout<<*p<<"\n";     // 11
    cout<<*q<<"\n";     // 11

    return 0;
}