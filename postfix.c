#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
char postfix[50];
int stack[50];
int top=-1;
void push(int);
int pop();
int eval();
void push(int ele)
{
 stack[++top]=ele;
}
int pop()
{
 int ele;
 ele=stack[top--];
return ele;
}
int eval()
{
 int symbol;
 int i=0,op1,op2;
  while((symbol=postfix[i++])!='\0')
  {
 if(isalnum(symbol))
{
  push(symbol-'0');
}
else
{
 op2=pop();
 op1=pop();
switch(symbol)
{
 case '+':push(op1+op2);
           break;
 case '-':push(op1-op2);
           break;
 case '*':push(op1*op2);
           break;
 case '/': if(op2!=0)
 {
 push(op1/op2);
          break;
}
else
{
 printf("out from loop");
break;
}
case '^':push(pow(op1,op2));
break;
}
}
}
return(pop());
}
void main()
{
int val;
 printf("enter the postfix expression:\n");
 scanf("%s",postfix);
 val=eval();
printf("evalution of postfix expression is%d\n",val);
}
