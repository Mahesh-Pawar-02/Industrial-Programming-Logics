#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Primary School Portal\n");
    printf("Enter your devision : \n");
    scanf("%d",&Standard);
    // If else if ladder
    if(Standard == 1)
    {
        printf("Your exam is at 1 PM\n");
    }
    else if(Standard == 2)
    {
        printf("Your exam is at 2 PM\n");
    }
    else if(Standard == 3)
    {
        printf("Your exam is at 3 PM\n");
    }
    else if(Standard == 4)
    {
        printf("Your exam is at 4 PM\n");
    }
    else 
    {
        printf("Invalid standard\n");
    }
    return 0;
}