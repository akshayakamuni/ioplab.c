#include<stdio.h>
int main()
{
	int a[9],i,ecount=0,ocount=0;
	printf("enter the values");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		ecount=ecount+1;
		else
		ocount=ocount+1;
	}
	printf("\n ecount=%d",ecount);
	printf("\n ocount=%d",ocount);
}
