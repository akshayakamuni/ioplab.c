#include<stdio.h>
int main()
{
	int num,b;
	printf("enter the value of num");
	scanf("%d",&num);
	int i=1;
	for(b=2;b<=num/2&&i!=0;b++)
	{
		if(num%b==0)
		{
			i=0;
		}
	}
	if(i=1)
	printf("it is prime number");
	else
	printf("it is composite number");
}
