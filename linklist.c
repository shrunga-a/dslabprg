#include<stdio.h>
#include<stdlib.h>
typedef struct node*lstptr;
struct node
{
  int data;
  lstptr link;
};
lstptr First=NULL;
lstptr getnode()
{
  lstptr ptr;
  ptr=(lstptr)malloc(sizeof(struct node));
  return ptr;
}
void insertBegin(int ele)
{
  lstptr new;
  new=getnode();
  new->data=ele;
  new->link=NULL;
  if(First!=NULL)
  {
    new->link=First;
  }
  First=new;  
}

void insertEnd(int ele)
{
  lstptr new,temp;
  new=getnode();
  new->data=ele;
  new->link=NULL;
  if(First==NULL)
  {
    First=new;  
  }
  else
  {
  temp=First;
  while(temp->link!=NULL)
  {
    temp=temp->link;
  } 
    temp->link=new;  
 }
}
void deleteBegin()
{
  lstptr temp;
  if(First==NULL)
  {
    printf("\nList is empty");
    exit(0);
  }
  temp=First;
  First=First->link;
  free(temp);    
}
void deleteEnd()
{
  lstptr temp,prev;
  if(First==NULL)
  {
    printf("\nList is empty");
    exit(0);
  }
  temp=First;
  if(First->link==NULL)
  {
    First=NULL;
    free(temp);
  }
  else
  {
   prev=First;  
   while(temp->link!=NULL)
  {
    prev=temp;
    temp=temp->link;
  }
  prev->link=NULL;  
  free(temp);    
 }
}
void deletespecific(int ele)
{
  lstptr temp,prev;
    temp=First;
  if(First==NULL)
  {
    printf("\nList is empty");
  }
  else if(First->data==ele)
  {
   if(First->link!=NULL)
    First=First->link;
    else
    First=NULL;
  }
   else
   { 
      while(temp->data!=ele && temp->link!=NULL)
      {
        prev=temp;
        temp=temp->link;
      }  
      if(temp->link==NULL && temp->data!=ele)
      {
         printf("item not found");
         return;
      }   
          else if(temp->link!=NULL)
          prev->link=temp->link;
          else
          prev->link=NULL;
   }
      free(temp);
}         
void display()
{
  lstptr temp;
  temp=First; 
  if(First==NULL)
  {
    printf("List is empty\n");
    exit(0);
  }
  while(temp->link!=NULL)
  {
    printf("%d\t",temp->data); 
    temp=temp->link;
  } 
    printf("%d\t",temp->data); 
}
void main()
{
  int ch,ele;
  while(1)
  {
  printf("\n1.Insert Begin \n2.Insert End \n3.Delete Begin \n4.Delete End \n5.Deletespecific \n6.Display\n 7.Exit");
  printf("\nEnter your choice:\t");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:printf("enter a element:\t");
           scanf("%d",&ele);
           insertBegin(ele);
           break;
    case 2:printf("enter a element:\t");
           scanf("%d",&ele);
           insertEnd(ele);
           break;       
    case 3:deleteBegin();
           break;
    case 4:deleteEnd();
           break;       
    case 5:printf("enter a element:\t");
           scanf("%d",&ele);
           deletespecific(ele);
           break;
    case 6:display();
           break;
    case 7:exit(0);
  }
 }
}  
