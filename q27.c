#include <stdio.h>
int main()
{
	int n,i,q=0;
	printf("enter any number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		q=1;
	}
	if(q==0)
	printf("it is a prime number");
	else
	printf("it is not a prime number");
return 0;
}
