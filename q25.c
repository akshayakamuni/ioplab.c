#include<stdio.h>
int main()
{
	int n,i=0,n1;
	printf("enter the value of n");
	scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
    	n1=n*i;
    	printf("%d*%d=%d\n",n,i,n1);
	}
}
