#include<stdio.h>
int main()
{
	int n,a[n],*aptr,i,max;
	max=*(aptr);
	aptr=a;
	printf("\n enter the size of the array");
	scanf("%d",&n);
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("\n values of array elements");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(*(aptr)<*(aptr+i))
		*(aptr)=*(aptr+i);
	}
	printf("\n the max of the elements=%d",*aptr);
	
}
