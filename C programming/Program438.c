#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}
