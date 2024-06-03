#include<stdio.h>

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
