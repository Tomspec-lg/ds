#include<stdio.h>
void main()
{
int a[100],i,n,search,count=0;
printf("enter the limit of the array");
scanf("%d",&n);
printf("enter the elements");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
   printf("enter the element to be searched");
   scanf("%d",&search);
   for(i=0;i<n;i++)
   {
   if(search==a[i])
   {
   count=count+1;
   break;
   }
     }
     if(count==1)
     {
     printf("%d is present",search);
     }
     else
     {
     printf("value is not present");
     }
     }
