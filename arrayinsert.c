#include<stdio.h>
void main()
{
int a[10],i,n,in,pos;
printf("enter the limit\n");
scanf("%d",&n);
printf("enter the number\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to be inserted");
scanf("%d",&in);
printf("enter the position of the number");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=in;
for(i=0;i<n+1;i++)
printf("%d\n",a[i]);
}
