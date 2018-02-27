#include<stdio.h>
#include<stdlib.h>
int a[20],top1=-1,top2=-2;

void push1(int n)
{
	if((top1+1)>=10)
	printf("The stack is full\n");
	else
	{
		top1++;
		a[top1]=n;
	}
}

void push2(int m)
{
	if((top2-1)>=20)
	printf("The stack is full\n");
	else
	{
           if(top2==-2)
                top2=10;
           else
               ++top2;
                
		a[top2]=m;
	}
}

void pop1()
{
	if(top1==-1)
	printf("The stack is empty.\n");
	else{
	printf("%d deleted\n",a[top1]);
	top1--;
	}
}

void pop2()
{
	if(top2==-2)
	printf("The stack is empty.\n");
	else{
	printf("%d deleted\n",a[top2]);
	 if(top2==10)
              top2=-2;
         else
              --top2;
	}
}

void display1()
{
	int i;
	printf("Stack 1:");
	if(top1==-1)
	printf("empty\n");
	else{
	for(i=0;i<=top1;i++)
	{
		printf("\n%d",a[i]);
	}
	}
	printf("Stack 2:");
	if(top2==-2)
	printf("empty\n");
	else{
	for(i=10;i<=top2;i++)
	{
		printf("\n%d",a[i]);
	}
	}
}

void main()
{
	int value1,value2,ch1,ch2,ch3;
	int y=1;
	while(y==1)
	{
	printf("\n\n\n\n\nWhich stack do you want to acess?\n1.Stack 1\n2.Stack 2\n3.Display both stacks\n4.Exit\n");
	scanf("%d",&ch1);
	if(ch1==1)	
	{
			printf("_____Stack 1_____\nEnter your choice\n1.Insert an element\n2.Delete an elemnt\n3.Display stack\n");
			scanf("%d",&ch2);
			if(ch2==1){
			printf("Enter the value\n");
				scanf("%d",&value1);
				push1(value1);
			}
			else if(ch2==2){			
				pop1();
			}
			else if(ch2==3)
			display1();
	}
	else if(ch1==2)
	{
			printf("_____Stack 2_____\nEnter your choice\n1.Insert an element\n2.Delete an elemnt\n3.Display stack\n");
			scanf("%d",&ch3);
			if(ch3==1){
			printf("Enter the value\n");
				scanf("%d",&value2);
				push2(value2);
			}
			else if(ch3==2){			
				pop2();
			}
			else if(ch3==3)
			display1();
	}
	else if(ch1==3)
	display1();
	else
	break;
	}
}
