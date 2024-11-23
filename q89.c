#include<stdio.h>
int main()
{
	int a[5],b[5],i,j,*aptr,*bptr;
	aptr=a;
	bptr=b;
	printf("enter the values of a array");
	for(i=0;i<5;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("\n values of a array elements");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<5;i++)
	{
	
			*(bptr+i)=*(aptr+4-i);
		
	}
	printf("copied elements\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
}
