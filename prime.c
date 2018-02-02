#include<stdio.h>
void main()
{
int i,n,var=0;
printf("\n enter a number:");
sacnf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
var=1;
break;
}
}
if(var==0)
printf("\n the given is prime");
else
printf("\n the given number is not a prime number");
getch();
}
