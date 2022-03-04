#include<stdio.h>
int n=0;int array[30];
void bubblesort(int [] );
int main()
{
printf("enter a array size");
scanf("%d",&n);
printf("enter a array of elements");
for(int i=0;i<n;i++)
 {
   scanf("%d",&array[i]);
 }
bubblesort(array);
return 0;
}
void bubblesort( int array[])
{
 for(int r=0;r<n-1;r++)
 {
  for(int k=0;k<n-r-1;k++)
  {
   if (array[k]>array[k+1])
   {
    int temp=array[k];
   array[k]=array[k+1];
    array[k+1]=temp;
   }
  }
}
printf("the array sorted in asscending order\n");
for(int kt=0;kt<n;kt++)
  {
  printf("%d",array[kt]);
  }
}
