#include<stdio.h>

int i;
int j = 11;

extern int no;

int main()
{
    printf("Value of i : %d\n",i);  // 0
    printf("Value of j : %d\n",j);  // 11
    printf("Value of no : %d\n",no);

    return 0;
}

// gcc Main.c Helper.c -o Myexe
// ./Myexe

// gcc Helper. Main.c c -o Myexe
// ./Myexe
