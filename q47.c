#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='D';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
			
		}
		printf("\n");
	}
}
