#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 90.88;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("%c\n",*cp); // A
    printf("%d\n",*ip); // 11
    printf("%f\n",*fp); // 90.99
    printf("%f\n",*dp); // 90.88

    void *vp = NULL;
    vp = &ch;
    printf("%c\n",*(char *)vp); // A

    vp = &i;
    printf("%d\n",*(int *)vp); // 11

    vp = &f;
    printf("%f\n",*(float *)vp); // 90.99

    vp = &d;
    printf("%f\n",*(double *)vp); // 90.88

    return 0;
}


