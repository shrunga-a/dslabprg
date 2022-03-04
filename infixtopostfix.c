#include<stdio.h>
#include<ctype.h>
char infix[100],postfix[100],stack[100];
int top=-1;
void infixtopostfix();
void push(char);
char pop();
int preced(char);

void infixtopostfix()
{
 int i=0,k=0;
 char ele;
while ((ele=infix[i++])!='\0')
{
 if(ele=='(')
  push(ele);
  else if(ele==')')
   {
    while(stack[top]!='(')   
     postfix[k++]=pop();
   }
     else if(isalnum(ele))
       {
       postfix[k++]=ele;
       }
 else
 { 
  while(preced(ele)<=preced(stack[top]))
  {
   postfix[k++]=pop();
  }
 push(ele);
  }
}
  while(stack[top]!='$')
  {
  if(stack[top]=='('||(stack[top]=='$'))
  pop();
  postfix[k++]=pop();
 }
}
void push(char ele)
{
 stack[++top]=ele;
}
char pop()
{
 char ele;
 ele=stack[top--];
return ele;
}
int preced (char ele)
{
 switch(ele)
{
 case '$': return -1;
 case '(': return 0;
 case '-':
 case '+': return 1;
case '*':
case '/': return 2;
case '^': return 3;
}
}
void main()
{
 printf("enter the infix expression:\n");
 scanf("%s",infix);
 infixtopostfix();
printf("postfix expression is \n");
puts(postfix);
}
