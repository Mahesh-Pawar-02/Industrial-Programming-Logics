#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("%d\n",Arr);     // 100  
    printf("%d\n",&Arr);    // 100  

    printf("%d\n",Arr+1);   // 104  
    printf("%d\n",&Arr+1);  // 120  

    printf("%d\n",Arr[1]);   // 20

    printf("%d\n",Arr[3]);   // 40
    printf("%d\n",*(Arr+3));   // 40
    printf("%d\n",*(3+Arr));   // 40
    printf("%d\n",3[Arr]);   // 40

    return 0;
}


