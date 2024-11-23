#include<stdio.h>
int main()
{
	int num,i,q=0,j;
	printf("enter the value of number");
	scanf("%d",&num);
	i=num;
	while(num!=0)
	{
		j=num%10;
		q=q*10+j;
		num=num/10;
	}
    printf("reversed number=%d",q);
}
