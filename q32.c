#include<stdio.h>
int main()
{
	int N,fmax=0,smax=0;
	while(N!=0)
	{
		printf("enter the value of N");
		scanf("%d",&N);
		if(N>fmax)
		{
			smax=fmax;
			fmax=N;
		}
		else if(N>smax)
		{
         smax=N;	
		}
	}
	printf("%d%d",fmax,smax);
}
