#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int stack[MAXSIZE],top=1;
void push(int ele)
{
if (top==MAXSIZE-1)
{
printf("stack is full");
exit (0);
}
stack[top++]-ele;
}
int pop()
{
if(top==-1)
{
printf("stack is empty");
return ele;
void display()
{
int i;
if(top==-1)
for(i=0;i=0;i++)
printf("%d",stack[i]);
}
void main()
{
int ch;
printf("\n 1.Push \n 2.Pop \n3.Display");
printf("enter your choice");
scanf("%d",&ch);
while(true)
{
switch(ch)
{
case 1:printf("enter a element to be inserted");
scanf("%d",&ele);
push(ele);
break:
exit(0);
}
