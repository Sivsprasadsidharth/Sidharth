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
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		{	
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("Sorted array is:");
	for(i=0;i<n;++i)
		printf("%d",A[i]);
}
