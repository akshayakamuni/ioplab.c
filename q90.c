#include<stdio.h>
#include<string.h>
int main()
{
	char st[40];
	int *aptr,count=0,i,count1;
	
	printf("enter the string\n");
	gets(st);
	aptr=st;
	printf("\n string");
	puts(aptr);
	count=strlen(st);
	printf("including spaces count=%d\n",count);
	count1=count;
	while(i!='\0')
	{
		if(*aptr==" ")
		count1--;
		i++;
	}
	printf("excluding spaces count=%d\n",count1);
}
