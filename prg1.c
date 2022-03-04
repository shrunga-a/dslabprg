#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,h,a[20],key;
 printf("enter a value of n");
 scanf("%d", &h);
 printf("enter a array of elements");
 for(i=0;i<h;i++)
 scanf("%d", &a[i]);
 printf("enter thr elements to be searched");
 scanf("%d", &key);
 for(i=0;i<h;i++)
{
   if(key==a[i])
   {
    printf("item found at location %d",i);
    exit(0);
   }
}
printf("item not found");
}

