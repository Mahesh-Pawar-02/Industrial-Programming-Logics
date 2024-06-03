#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        DisplayR(iNo-1);
        printf("%d\n",iNo);
    }
}

int main()
{
    DisplayR(5);

    return 0;
}
