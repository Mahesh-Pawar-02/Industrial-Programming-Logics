#include<stdio.h>

int main()
{
    int Arr[5] = {11,21,51,101,111};

    int *p = Arr;   // int *p = &(Arr[0]);
    int *q = &(Arr[4]);

    return 0;
}


/*
    Arr         100
    &Arr        100
    Arr[2]      51
    Arr[4]      111
    &(Arr[3])   112
    sizeof(Arr) 20
    p           100
    &p          200
    sizeof(p)   8
    *p          11
    q           116
    &q          300
    *q          111

*/