#include<stdio.h>
int main()
{
	int i=1,s_even=0,s_odd=0,N;
	while(i<=N)      
	{
		if(i%2==0)
		s_even=s_even+i;
		else
		s_odd=s_odd+i;
	}
	printf("s_even=%d",s_even);
	printf("s_odd=%d",s_odd);
}
