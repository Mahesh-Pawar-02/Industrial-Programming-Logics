#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("%d\n",iCnt);
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}
