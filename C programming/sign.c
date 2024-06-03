#include<stdio.h>

int main()
{
    int i = 10;
    signed int j = 20;
    signed int k = -30;
    
    unsigned int a = 40;

    int x = 10;             // 10/-         4 bytes
    short int y = 10;       // 8/-          2 bytes
    long int z = 20;        // 15/-         8 bytes

    printf("%d\n",i);   // 10
    printf("%d\n",j);   // 20
    printf("%d\n",k);   // -30
    printf("%d\n",a);   // 40

    printf("Size of x is : %d\n",sizeof(x));
    printf("Size of y is : %d\n",sizeof(y));
    printf("Size of z is : %d\n",sizeof(z));
    
    return 0;
}