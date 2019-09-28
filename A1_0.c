#include<stdio.h>
int main(void)
{
int a=0,b=0,temp;
printf("Enter two numbers\n");
scanf("%d %d",&a, &b);
temp=a;
a=b;
b=temp;
printf("\nThe numbers are %d and %d\n",a,b);
return(0);
}

