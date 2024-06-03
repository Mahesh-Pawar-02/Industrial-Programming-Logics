#include<stdio.h>

int Sum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    while(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
    }
    return iSum;
}

int main()
{
    int Arr[5] = {10,20,30,40,50};
    int iRet = 0;

    iRet = Sum(Arr,5);
    printf("Summation is : %d\n",iRet);
    
    return 0;
}
