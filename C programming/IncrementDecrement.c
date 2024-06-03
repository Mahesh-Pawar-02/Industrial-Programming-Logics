#include<stdio.h>

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;

    a++;    // Increment
    ++b;    // Increment

    c--;    // Decrement
    --d;    // Decrement

    printf("%d\n",a);   // 11
    printf("%d\n",b);   // 11

    printf("%d\n",c);   // 9
    printf("%d\n",d);   // 9

    return 0;
}