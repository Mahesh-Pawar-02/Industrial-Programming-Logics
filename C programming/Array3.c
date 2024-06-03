#include<stdio.h>

int main()
{
    // 1
    int Arr[5] = {10,20,30,40,50};

    // 2
    int Brr[ ] = {10,20,30,40,50};

    // 3
    int Crr[7] = {10,20,30};

    // 4

    int Drr[3];
    Drr[0] = 10;
    Drr[1] = 20;
    Drr[2] = 30;

    int Arr[4] = {10,20,30,40};

    const int Brr[4] = {10,20,30,40};


    Arr[1] = 21;        // A
    Brr[1] = 21;        // NA

    Arr[2]++;           // A
    Brr[2]++;           // NA

    return 0;
}