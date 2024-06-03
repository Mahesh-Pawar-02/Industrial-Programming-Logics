#include<stdio.h>

int main()
{
    int no = 11;
    int *p = &no;
    
    printf("%d\n",no);  // 11
    printf("%d\n",&no); // 100
    printf("%d\n",sizeof(no));  // 4
    printf("%d\n",p);   // 100
    printf("%d\n",&p);  //200
    printf("%d\n",*p);  // 11
    printf("%d\n",sizeof(p));   // 8

    return 0;
}