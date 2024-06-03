#include<stdio.h>

int strlenXR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenXR(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = strlenXR(Arr);

    printf("Length of string is : %d\n",iRet);
    return 0;
}
