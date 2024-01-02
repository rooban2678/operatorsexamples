#include<stdio.h>
int floating()
{
    int a;
    int b;
    float c;
    printf("Give the value to a:");
    scanf("%d", &a);
    printf("Give the value to b:");
    scanf("%d",&b);
    c=(float) a/b;
    printf("The divided value of A and B is:%f", c);
    return 0;
}
