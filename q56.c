#include<stdio.h>
int main()
{
	int a[9],i,pcount=0,ncount=0,zcount=0;
	printf("enter the values");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		pcount=pcount+1;
		else if(a[i]<0)
		ncount=ncount+1;
		else if(a[i]==0)
		zcount=zcount+1;
	}
	printf("\n pcount=%d",pcount);
	printf("\n ncount=%d",ncount);
	printf("\n zcount=%d",zcount);
}
