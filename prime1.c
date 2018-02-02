#include<conio.h>
void main()
{
int a,b,i,var=0;
printf("\n enter the range:");
sacnf("%d\t%d",&a,&b);
while(a<b)
{
for(i=2;i<=a/2;i++)
{
if(a%2==0)
{
var=1;
break;
}
}
if(flag==0)
printf("%d",i);
++a;
}
getch();
}
