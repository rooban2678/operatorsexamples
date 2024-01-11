# include<stdio.h>
int main()
{
int n;
int a=0;
int sum =0;
int temp;
int m;
int g;
int r;
armstrongnumber(m,r,sum,temp);
printf("Enter the Number:");
scanf("%d",&n);
m=n;
temp=n;
while (n!=0)
{        
n=n/10;   
}
printf("\n Number of digits in the given Number:%d");
return 0;
}

