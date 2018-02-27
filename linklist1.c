#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *next;
};
struct node *start=NULL;
void insert(int data,int pos);
void display();
void delete(int pos);
void len();
void main()
{
 int ch,data,pos;
 printf("\n1.Insert \n2.Display\n3.Delete\n4.Length\n5.Exit\n");
do
{
 printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
 {
  case 1:
         printf("\nEnter the data");
         scanf("%d",&data);
         printf("\nEnter the position");
         scanf("%d",&pos);
         insert(data,pos);
         break;
  case 2:
         display();
         break;
  case 3:
         printf("\nEnter the position");
         scanf("%d",&pos);
         delete(pos);
         break;
  case 4:
         len();
         break;
  case 5:
         printf("Exiting");
	 break;
  default:
         printf("Invalid Choice");
 };
}while(ch!=5);
}

void insert(int data,int pos)
{
 struct node *newnode,*curr,*prev;
 int i;
 newnode=(struct node*)malloc((sizeof(struct node)));
 newnode->data=data;
 if(start==NULL||pos==1)
  {
   newnode->next=start;
   start=newnode;
  }
 else
  {
   i=0;
   curr=start;
   while(i<=pos-2&&curr!=NULL)
    {
     prev=curr;
     curr=curr->next;
     i++;
    }
   newnode->next=curr;
   prev->next=newnode;
  }
}
void display()
{
 struct node *ptr;
 if(start==NULL)
 printf("Empty List\n");
 else
 {
  ptr=start;
  while(ptr!=NULL)
  {
   printf("%d",ptr->data);
   ptr=ptr->next;
  }
 } 
}

void delete(int pos)
{
  struct node *curr,*prev;
 int i;
 if(start==NULL)
  printf("Empty List");
 else
 {
  if(pos == 1)
    {

         start= start->next;
    }
 else
 {
  i=0;
  curr=start;
  while(i<=pos-2&&curr!=NULL)
  {
   prev=curr;
   curr=curr->next;
   i++;
  }
  
  prev->next=curr->next;
 }
}
}
void len()
{
 int c=0;
 struct node *ptr;
 ptr=start;
 while(ptr!=NULL)
 {
  c++;
  ptr=ptr->next;
 }
 printf("%d",c);
}
        
 
