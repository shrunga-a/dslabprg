#include<stdlib.h>
#include<stdio.h>

#define MAXSIZE 4
int top =-1;
int stack[30];
void push(int element)
{
if(top == MAXSIZE -1){
printf("Stack full");
exit(0);
}
stack[++top] =element;
}
int pop(){
if(top == -1){
printf("Stack empty");
exit(0);
}
return stack[top--];
}
void display(){
printf("Stack elements are:");
for(int i=0;i<MAXSIZE;i++){
printf("%d",stack[i]);
}
}
void main()
{
int choice=0;
int ch=1;
int element=0;
while(ch){
printf("Menu\n1.Push\n2.Pop\n3.Display\n");
scanf("%d",&choice);
switch(choice){
case 1: printf("Enter elements to be pushed:");
scanf("%d",&element);
push(element);
break;
case 2: printf("%d",pop());
break;
case 3: display();
break;
default: printf("Enter correct choice:\n");
}
printf("Do you want to continue for 1 else 0:");
scanf("%d",&ch);
printf("\n");
}
}
