#include<stdio.h>
void main()
{
	int A[20],i,j,n,temp,pos=0,min;
	printf("Enter no. of terms");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n-1;++i)
	{
		min=A[i];
		for(j=i+1;j<n;++j)
		{	
			if(A[j]<min)
			{
				min=A[j];
				pos=j;
			}
			
		}
		temp=A[i];
		A[i]=A[pos];
		A[pos]=temp;
	}
	printf("Sorted array is:");
	for(i=0;i<n;++i)
		printf("%d",A[i]);
}
 
