#include<stdio.h>
#include<malloc.h>
struct node
 {
  int data;
  struct node *next;
 };
struct node *front=NULL;
struct node *rear=NULL;

void enq(int data)
 {
  struct node *nptr;
  nptr=(struct node *)malloc(sizeof(struct node));
  nptr->data=data;
  nptr->next=NULL;
  if(rear==NULL)
  {
   front=nptr;
   rear=nptr;
  }
  else
  {
   rear->next=nptr;
   rear=nptr;
  }
 }
void dequeue()
 {
  struct node *ptr;
  ptr=front;
  if(front==NULL)
  {printf("underflow");
   return;
  }
  else
  {if(ptr->next!=NULL)
   {ptr=ptr->next;
    free(front);
    front=ptr;
   }
   else
   {free(front);
    front=rear=NULL;
   }
  }
 }
void display()
 {
  struct node *ptr;
  ptr=front;
  if((front==NULL)&&(rear==NULL))
  {printf("Underflow");
   return;
  }
  else
  {while(ptr!=rear)
   {printf("%d",ptr->data);
    ptr=ptr->next;
   }
   if(ptr==rear)
    printf("%d",ptr->data);
  }
 } 
void main()
 {
  int data,ch;
  printf("1.enqueue 2.dequeue 3.Display 4.Exit");
  
  do
  {
   printf("Enter choice\n");
   scanf("%d",&ch);
   switch(ch)
    {
     case 1:
		printf("Enter data");
		scanf("%d",&data);
		enq(data);
		break;
     case 2:
		dequeue();
		break;
     case 3:
		display();
		break;
     case 4:
		break;
    }
  }while(ch!=4);
}
  
  


    







