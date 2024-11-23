#include<stdio.h>
int main()
{
	int num,sum=0,q,i;
	printf("enter the value of number");
	scanf("%d",&num);
	i=num;
	while(num!=0)
	{
		q=num%10;
		sum=sum+q*q*q;
		num=num/10;
	}
	if(sum==i)
	printf("num is armstrong number");
	else
	printf("num is not an armstrong number");
}
