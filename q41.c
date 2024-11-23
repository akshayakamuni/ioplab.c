#include<stdio.h>
int main()
{
	int num,i=1;
	printf("enter the value of num");
	scanf("%d",&num);
	while(i!=0&&i<=num)
	{
		if(num%i==0)
		printf("%d",i);
		i=i+1;
	}
}
