#include<stdio.h>
#include<stdlib.h>
typedef struct Node * lstptr;
struct Node{
        int data;
        lstptr link;
        };
lstptr first=NULL;
lstptr getnode()
{
lstptr node;
node=(lstptr)malloc(sizeof(struct Node));
return node;
}

void insertBegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
new->link=first;
first=new;
}

void insertEnd(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
temp=first;
while(temp->link!=NULL)
temp=temp->link;
temp->link=new;
}
else
{
first=new;
}
}

void display()
{
lstptr temp;
if(first==NULL)
{
printf("list is empty");
exit(0);
}
temp=first;
while(temp->link!=NULL)
{
printf("\n%d",temp->data);
temp=temp->link;
}
printf("\t%d",temp->data);
}

void deleteBegin()
{
lstptr temp;
if(first==NULL)
{
printf("list is empty");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
first=first->link;
free (temp);
}
}

void deleteEnd()
{
lstptr temp,prev;
if(first==NULL)
{
printf("list is empty");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
{
prev=temp;
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
prev->link=NULL;
}
free (temp);
}
}
}

void deleteSpecific()
{
}
void delete()
{
lstptr temp;
if(first==NULL)
{
printf("list is empty");

}
else
{
temp=first;
if(first->link=NULL)
first=NULL;
else
first=first->link;
free (temp);
}
}
void main()
{
int ch,ele,opt=1;
while(opt)
{
printf("\n1.INSERT_BEGIN\n2.INSERT_END\n3.DELETE_BEGIN\n4.DELETE_END\n5.DELETE SEPCIFIC\n6.DISPLAY");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: 
printf("enter the element to be inserted:");
scanf("%d",&ele);
insertBegin(ele);
break;
case 2: 
printf("enter the element to be inserted:");
scanf("%d",&ele);
insertEnd(ele);
break;
case 3:deleteBegin();
break;
case 4:deleteEnd();
break;
case 5:deleteSpecific()
break;
case 6:display();
break;
}
printf("Do you want to continue:");
scanf("%d",&opt);
}
}

