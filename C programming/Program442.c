#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    Display(4);

    return 0;
}
