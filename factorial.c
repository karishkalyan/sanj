#include<stdio.h>
void main()
{
int i,n,fact=1;
printf("\n enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n factorial of the num %d is %d",n,fact);
getch();
}
