#include<stdio.h>
// Accept number from user and check whether that number is even or odd
int main()
{
    int No = 0;
    int Ans = 0;

    printf("Enter number : \n");
    scanf("%d",&No);

    Ans = No % 2;

    if(Ans == 0)    // Jar
    {
        printf("Number is even\n");
    }
    else    // Nasel tar
    {
        printf("Number is odd\n");
    }

    return 0;
}