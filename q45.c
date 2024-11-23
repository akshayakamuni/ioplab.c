#include<stdio.h>
int main()
{
	int ln=160,guess,attempts=0;
	printf("guess number between 1 to 200\n");
	while(1)
	{
		printf("guess number");
		scanf("%d",&guess);
		attempts=attempts+1;
		if(guess==ln)
		{
			printf("guess number is lucky number");
			break;
		}
		else
		{
			printf("guess number is not lucky number");
		}
		
	}
}
