#include<stdio.h>

struct Demo
{
    int no;
    float f;
    int x;
    float d;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;

    obj1.no = 11;
    obj1.f = 10.5;
    obj1.x = 21;
    obj1.d = 20.5;

    obj2.no = 51;
    obj2.f = 50.5;
    obj2.x = 101;
    obj2.d = 60.5;

    printf("size of structure is %d\n",sizeof(obj1));
    
    return 0;
}