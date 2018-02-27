#include<stdio.h>
void main()
{
 int A[50],i,e,n,f=0,p;
 printf("Enter size");
 scanf("%d",&n);
 printf("Input array");
 for(i=0;i<n;++i)
  scanf("%d",&A[i]);
 printf("Enter element to be searched");
 scanf("%d",&e);
 for(i=0;i<n;++i)
 {
  if(A[i]==e)
   {
    f=1;
    p=i+1;
    break;
   }
 }
if(f)
 printf("Element found at %d",p);
else
 printf("Element not found");
}
