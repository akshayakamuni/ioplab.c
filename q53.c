#include<stdio.h>
int main()
{
	int i,j,n=10,temp;
	int a[10]={6,5,7,4,8,3,9,1,0,11};
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
            {
            	temp=a[j];
            	a[j]=a[j+1];
            	a[j+1]=temp;
			}
		}
	}
	for(j=0;j<n;j++)
	{
	
	printf("%d \t",a[j]);
}
}
