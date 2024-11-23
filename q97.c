#include<stdio.h>
#include<string.h>
int main()
{
	char st[20],*aptr,i,count;
	printf("enter the string");
	aptr=st;
	gets(aptr);
	puts(aptr);
	while(*aptr!='\0')
	{
		switch(*aptr)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				count++;
		}
		aptr++;
	}
	printf("total vowels=%d",count);
}
