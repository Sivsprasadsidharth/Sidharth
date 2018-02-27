#include<stdio.h>
#include<string.h>
#define max 20
void initialize(int p[],int d)
{
 int i;
 d=max;
 for(i=0;i<d;i++)
  p[i]=0;
}

void sum(int p1[], int p2[],int p3[])
{
 int i=0;
 for(;i<max;i++)
  p3[i]=p1[i]+p2[i];
}

void product(int p1[],int p2[],int p3[])
{
 int i,j;
 initialize(p3,max);
 for(i=0;i<max;i++)
 {
  for(j=0;j<max;j++)
   p3[i+j]+=p1[i]*p2[j];
 }
}

void main()
{
  int p1[10],p2[10],p3[10],m,n,a,choice,i;
  printf("Enter the order of first polynomial\n");
  scanf("%d",&m);
  printf("Enter the order of second polynomail\n");
  scanf("%d", &n);
  initialize(p1,m);
  initialize(p2,n);
  printf("Enter the value of the first polynomial\n");
  for(i=0;i<=m;i++)
  {
    printf("Enter the co-efficient of x^%d:",i);
    scanf("%d",&a);
    p1[i]=a;
  }
  printf("Enter the value of the second polynomial\n");
   for(i=0;i<=n;i++)
  {
    printf("Enter the co-efficient of x^%d:",i);
    scanf("%d",&a);
    p2[i]=a;
  }

  printf("1 for sum\n2 for product\n3 to exit\n");  
  do
  {
    printf("Enter the choice\n");
    scanf("%d", &choice);
    switch(choice)
    {
     case 1: sum(p1,p2,p3);
             for(i=0;p3[i];i++)
                  printf("co-efficient of x^%d is :%d\n" ,i, p3[i]);
             break;
     case 2: product(p1,p2,p3);
             for(i=0;p3[i];i++)
                  printf("co-efficient of x^%d is :%d\n ",i , p3[i]);
             break;
     case 3 : break;
     default: printf("Invalid choice\n");
    }
  }while(choice!=3);
}
   
