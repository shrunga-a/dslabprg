#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,h,a[20],mid,high,low=0,key;
 printf("enter a value of n");
 scanf("%d", &h);
 printf("enter a array of elements");
 for(i=0;i<h;i++)
 scanf("%d",&a[i]);
 printf("enter thr elements to be searched");
 scanf("%d",&key);
low=0;
 high=h-1;
while(low<=high)
{
 mid =(low+high)/2;
if(key==a[mid])
{
  printf("item found at thr location %d",mid);
  exit (0);
}
else if (key<a[mid])
high=mid-1;
else
low=mid+1;
}
printf("item not found");
}

