#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 21;
    float f = 12.31f;
    double d = 89.90;



    printf("Size of character is : %d bytes\n",sizeof(ch)); // 1
    printf("Size of integer is : %d bytes\n",sizeof(i)); // 4
    printf("Size of float is : %d bytes\n",sizeof(f)); // 4
    printf("Size of double is : %d bytes\n",sizeof(d)); // 8

    printf("Base address of chracter is : %u\n",&ch);
    printf("Base address of integer is : %u\n",&i);
    printf("Base address of float is : %u\n",&f);
    printf("Base address of double is : %u\n",&d);

    return 0;
}