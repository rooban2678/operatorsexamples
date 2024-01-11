#include<stdio.h>
int main()
{
int a,b,c;
float d;
printf("Enter how many tables you want: ");
scanf("%d",&a);
printf("Division table upto %d\n",a);
for(b=1;b<=a;b++)
{
for(c=1;c<=10;c++)
printf("%d/%d=%f\n",b,c,d=(float)b/c);
printf("-*-*-*-*-*-*-*-*\n");
}
return 0;
}