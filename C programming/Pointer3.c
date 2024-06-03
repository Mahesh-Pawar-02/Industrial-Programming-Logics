#include<stdio.h>

int main()
{
    int no = 21;

    int *p = &no;
    
    int *a = &no;
    
    int **q = &p;
    
    int **b = &p;
    
    int ***r = &q;
    
    int ****x = &r;
    
    int *****y = &x;


    return 0;
}

/*
no;             21
&no;            100
sizeof(no);     4
*p;             21
p;              100
&p;             200
**q;            21
*q;             100
**b;            21
&b;             400
sizeof(b);      8
**r;            100
***r            21
x;              600
***x;           100
*****y;         21
&x;             700
&y;             800
*x;             500
**y             500
sizeof(y);      8
sizeof(x);      8
sizeof(*p);     4
sizeof(**q);    4
*/