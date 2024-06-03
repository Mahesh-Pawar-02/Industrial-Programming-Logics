#include<stdio.h>

void Display()
{
    register int no = 11;        // auto int no = 11;
    register int i;              // auto int i;

    printf("Value of no : %d\n",no);
    printf("Value of i : %d\n",i);
}

int main()
{
    Display();

    // printf("%d",no);

    return 0;
}