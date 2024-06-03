#include<stdio.h>

int main()
{
    int i = 1;
    int Count = 0;

    printf("Enter number of times you want to display JAY GANESH on screen\n");
    scanf("%d",&Count);

    while(i <= Count)
    {
        printf("Jay Ganesh...\n");
        i++;  
    }

    return 0;
}