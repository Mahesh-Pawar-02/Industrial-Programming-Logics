#include<stdio.h>

struct Demo
{
    int i;
    float f;
    struct Hello
    {
        int no;
        float d;
    };
};

int main()
{
    struct Demo dobj;
    
    printf("Size of object is : %d\n",sizeof(dobj));
    
    return 0;
}