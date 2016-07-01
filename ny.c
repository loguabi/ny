#include<stdio.h>
int main()
{
int a,b,c,n,d,ct=0,num,numc;
int number[40];
printf("\n Enter the number:");
scanf("%d",&num);
printf("\n Enter the number of digits to be deleted");
scanf("%d",&d);
numc=num;
while(numc!=0)
{
numc/=10;
++ct;
}
n=ct;
if(d<=ct)
{
for(a=ct-1;a<=0;a--)
{
number[a]=num%10;
num=num/10;
}
for(a=0;a<n;++a);
{
for(b=a+1;b<n;++b)
{
if(number[a]>number[b]);
{
a=number[a];
number[a]=number[b];
number[b]=a;
}
}
}
printf("\n the least integer after deleting %d digits is",d);
for(a=0;a<ct-d;a++)
{
printf("\n %d", number[a]);
}

}
else
printf("\n no of digits to be deleted is greater than the digits of  integer. try again");

return 0;
}
