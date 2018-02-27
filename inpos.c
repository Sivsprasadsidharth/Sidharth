#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
 char data;
 struct node *next;
};
typedef struct node NODE;
char pop(NODE **tp)
 {
  NODE *tmp;
  char a;
  tmp=*tp;
  *tp=(*tp)->next;
  a=tmp->data;
  free(tmp);
  return a;
 }
void push(NODE **tp,char a)
 {
  NODE *tmp=(NODE *)malloc(sizeof(NODE)); 
  tmp->data=a;
  tmp->next=*tp;
  *tp=tmp;
 }

void main()
 {
  NODE *top=NULL;
  char exp[100],newexp[100],tmp;
  int i,l,nl=0;
  printf("Enter expression\n");
  scanf("%s",exp);
  l=strlen(exp);
  for(i=l;i>0;--i)
   exp[i]=exp[i-1];
  exp[++l]=')';
  l++;
  exp[l]='\0';
  exp[0]='(';
  for(i=0;i<l;++i)
  {
   if((exp[i]>='a'&&exp[i]<='z')||(exp[i]>='A'&&exp[i]<='Z')||(exp[i]>='0'&&exp[i]<='9'))
     newexp[nl++]=exp[i];
   else if(exp[i]=='(')
    push(&top,exp[i]);
   else if(exp[i]=='+'||exp[i]=='-')
    {
     while(top->data!='(')
      newexp[nl++]=pop(&top);
      push(&top,exp[i]);
    }
   else if(exp[i]=='/'||exp[i]=='*')
    {
     while((top->data=='/'||top->data=='*')&&top->data!='(')
      newexp[nl++]=pop(&top);
      push(&top,exp[i]);
    }
   else if(exp[i]=')')
    {while(top->data!='(')
      newexp[nl++]=pop(&top);
     tmp=pop(&top);
    }
   else if(exp[i]=='^')
    push(&top,exp[i]);
 }
 newexp[nl]='\0';
 printf("Exp: %s\n",newexp);
}

     
     
    
   
