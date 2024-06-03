#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1;
    int iFact = 1;

    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number : %d\n",iRet);
    return 0;
}