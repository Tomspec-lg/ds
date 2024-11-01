#include<stdio.h>
void main()
{
int a[100],i,n,left,right,middle,num;
printf("enter the limit of the array");
scanf("%d",&n);
printf("enter the elements");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
   printf("enter the element to be searched");
   scanf("%d",&num);
   
   left=0;
right=n-1;
while(left<=right)
{
middle=(left+right)/2;
if(a[middle]==num)
{
printf("the element is found at position %d",middle);
break;
}
else if(a[middle]>num)
right=middle-1;
else
left=middle+1;
}
if(left>right)
printf("element not found in the list");
}
