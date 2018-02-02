#include<stdio.h>
void main()
{
int i,n,prod;
printf("\n enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
prod=n*i;
printf("%d\t",prod);
}
getch();
}
