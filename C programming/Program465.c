#include<stdio.h>

int EvenCount(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEven = 0;

    while(iCnt < iSize)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        iCnt++;
    }
    return iEven;
}

int main()
{
    int Arr[5] = {11,20,31,40,51};
    int iRet = 0;

    iRet = EvenCount(Arr,5);
    printf("Even count is : %d\n",iRet);
    
    return 0;
}
