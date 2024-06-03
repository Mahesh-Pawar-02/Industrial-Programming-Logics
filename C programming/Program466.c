#include<stdio.h>

int EvenCountR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iEven = 0;

    if(iCnt < iSize)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        iCnt++;
        EvenCountR(Arr,iSize);
    }
    return iEven;
}

int main()
{
    int Arr[5] = {11,20,31,40,51};
    int iRet = 0;

    iRet = EvenCountR(Arr,5);
    printf("Even count is : %d\n",iRet);
    
    return 0;
}
