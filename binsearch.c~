#include<stdio.h>
void main()
{
 int A[20],i,e,m,b,l,n,f=0;
printf("Enter size");
scanf("%d",&n);
for(i=0;i<n;++i)
 scanf("%d",&A[i]);
printf("Enter element to be searched\n");
scanf("%d",&e);
b=0;
l=n-1;
while(b<=l)
{
 m=(b+l)/2;
 if(A[m]==e)
 {
  printf("Element found at %d",m);
 f=1;
 break;
 }
 else if(A[m]<e)
  b=m+1;
 else 
  l=m-1;
}
if(f==0)
 printf("Element not found");
}
 
