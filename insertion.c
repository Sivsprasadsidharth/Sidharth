#include<stdio.h>
void main()
{
	int A[20],i,j,n,temp;
	printf("Enter no. of terms");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&A[i]);
	}
	for(i=1;i<n;++i)
	{
		temp=A[i];
		j=i-1;
		while(temp<A[j]&&j>=0)
		{	
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=temp;
	}
	printf("Sorted array is:");
	for(i=0;i<n;++i)
		printf("%d",A[i]);
}
