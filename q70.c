#include<stdio.h>
int main()
{
	int arr[10],i,j,count=0;
	printf("enter the elements of array\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number to search\n");
	scanf("%d",&j);
	for(i=0;i<=9;i++)
	{
		if(j==arr[i])
		{
			printf("%d is in the arrayit is in the entry %d",j,i+1);
			count=count+1;
			printf("\n %d has appeared %d in the array",j,count);
		}
		else
		{
			printf("%d is not appeared in array",j);
		}
	}
}
