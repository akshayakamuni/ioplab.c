#include<stdio.h>
int main()
{
	int a[5],b[5],size,*aptr,*bptr,i;
	printf("enter the size of the array");
	scanf("%d",&size);
	aptr=a;
	bptr=b;
	printf("enter a array");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("values of a array");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	for(i=0;i<5;i++)
	{
		*(bptr+i)=*(aptr+i);
	}
	printf("\n copied array");
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
}
