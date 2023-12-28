#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=40;
int b=40;
int c;
int d=4;
int e=3;
int f=2;
additionprogram(a,b);
subtractionprogram(a,b);
multiplicationprogram(a,b);
divisionprogram(a,b);
modulusprogram(a,b);
incrementprogram(a,b);
decrementprogram(a,b);
logicalprogram(a,b);
assignmentprogram(a,b,d,e,f);
comparisonprogram(a,b,d);
return 0;
}

int additionprogram (int a, int b)
{
int c=a+b;
printf("\n ADDITION \n Added Value of A and B is:%d\n",c);
}
int subtractionprogram (int a, int b)
{
int c=a-b;
printf("\n SUBTRACTION \n Subtracted Value of A and B is:%d\n",c);
}
int multiplicationprogram (int a, int b)
{
int c=a*b;
printf("\n MULTIPLICATION \n Multiplied Value of A and B is:%d\n",c);
}
int divisionprogram (int a, int b)
{
float c=(float)a/b;
printf("\n DIVISION \n Divided Value of A and B is:%f\n",c);
}
int modulusprogram (int a, int b)
{
int c=a%b;
printf("\n MODULUS \n Modulus Value of A and B is:%d\n",c);
}
int incrementprogram (int a, int b)
{
a++;
printf("\n INCREMENT \n Increment Value of A is:%d\n",a);
}
int decrementprogram (int a, int b)
{
b--;
printf("\n DECREMENT \n Decrement Value of B is:%d\n",b);
}
int logicalprogram(int a, int b)
{
printf("\n LOGICAL \n For AND Logical operation:%d\n", a>30 && a<50);
printf("\n For OR Logical operation:%d\n", b>15 || b<12);
printf("\n For NOT Logical operation:%d\n", !(b>15 || b<12));
}
int assignmentprogram (int a, int b, int d, int e, int f)
{
    d+=a;
    e-=b;
    f*=a;
printf("\n ASSIGNMENT\n The value of d:%d \n The value of e:%d \n The value of f:%d\n",d,e,f);
}
int comparisonprogram (int a, int b, int d)
{
    a==b;
    a>d;
    printf("\n COMPARISON\n The value of a=b:%d \n The value of a>d:%d",a==b, a>d);
}
