#include<stdio.h>

void DisplayR(int Arr[], int iSize)
{
    static int iCnt = 0;

    if(iCnt < iSize)
    {
        printf("%d\n",Arr[iCnt]);
        iCnt++;
        DisplayR(Arr,iSize);
    }
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    DisplayR(Arr,5);

    return 0;
}
