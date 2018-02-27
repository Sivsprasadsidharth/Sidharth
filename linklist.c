#include<stdio.h>
#include<malloc.h>
struct stack
{
 int data;
 struct stack *next;
};
struct stack *top=NULL;
void push()
{
 int val;
 struct stack *newnode;
 printf("ENTER A VALUE\n");
 scanf("%d",&val);
 newnode=(struct stack*)malloc((sizeof(struct stack)));
 newnode->data=val;
 if(top==NULL)
 newnode->next=NULL;
 else
  newnode->next=top;
  top=newnode;
 
}

void pop()
{
 struct stack*ptr;
 if(top==NULL)
  printf("Underflow"); 
 else 
 {
  ptr=top;
  top=top->next;  
  free(ptr);
 }
}

void display()
{
 struct stack *ptr;
 if(top==NULL)
  printf("Underflow");
 else
 {
  ptr=top;
  while(ptr!=NULL)
  {
   printf("%d",ptr->data);
   ptr=ptr->next;
  }
}
} 
void main()
{
 int op;
 printf("\n1.Insert \n2.Delete\n3.Display\n4.Exit\n");
do
{
 printf("Enter your choice\n");
 scanf("%d",&op);
 switch(op)
 {
  case 1:
         
         push();
         break;
  case 2:
         pop();
         break;
  case 3:
         display();
         break;
  case 4:
         printf("Exiting");
         break;
  default:
         printf("Invalid Choice");
  }
}while(op!=4);
}

