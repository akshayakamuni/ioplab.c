#include<stdio.h>
int main()
{
	int i,n;
	int a=0,b=1;
	int nt=a+b;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("fibonacci series:%d%d",a,b);
	while(nt<=n)
	{
	printf("%d",nt);
	a=b;
	b=nt;
	nt=a+b;
}
}
