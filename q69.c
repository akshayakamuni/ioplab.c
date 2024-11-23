#include<stdio.h>
int main()
{
	int a[10],search,flage=0,i,pos;
	printf("enter the array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("value of array element");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("enter the search element\n");
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if(search==a[i])
		{
		
		flage=1;
		pos=i;
		break;
     	}
	}
	if(flage=1)
	{
		printf("element=%d is present in array at pos=%d",search,pos);
	}
	else
	{
		printf("element=%d is not present in array",search);
	}
}
