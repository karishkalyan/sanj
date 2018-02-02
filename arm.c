#include<stdio.h>
void main()
{
int digit,sum=0,result,num;
printf("\n enter the number:");
result=num;
while(num!=0)
{
digit=num%10;
sum=sum+digit*digit*digit*digit;
num=num/10;
}
if(result==sum)
{
printf("yes");
}
else
printf("no");
getch();
}
