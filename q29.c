#include<stdio.h>
int main()
{
	int num,i,q=0;
	printf("enter the value of number");
	scanf("%d",&num);
	i=num;
	while(num!=0)
	{
		num=num%10;
		q=q*10+num;
		num=num/10;
	}
    if(q=i)
    printf("the number is palindrom");
    else
    printf("the number is not palindrom");
}
