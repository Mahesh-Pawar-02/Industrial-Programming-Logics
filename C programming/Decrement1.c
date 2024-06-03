#include<stdio.h>

// Predecrement

int main()
{
    int i = 10;
    int No = 0;

    No = --i;

    printf("%d\n",No);  // 9
    printf("%d\n",i);   // 9

    return 0;
}