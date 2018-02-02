#include<stdio.h>
void main()
{
int digit,a,b,i,sum,num;
printf("\n enter two number:");
scanf("%d\t%d",&a,&b);
 for(i=a;i<=b;i++)
 {
   sum=0;
   num=i;
   while(num!=0)
   {
     digit=num%10;
     sum=sum+digit*digit*digit*digit;
num=num/10;
}
if(sum==i)
{
printf("\n num is%d",i);
}
  getch();
}
