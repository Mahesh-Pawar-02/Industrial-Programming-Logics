#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    DisplayR(4);

    return 0;
}
