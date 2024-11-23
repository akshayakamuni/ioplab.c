#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20],ch,*aptr,*bptr;
	aptr=st1;
	int l;
	l=strlen(st1);
	bptr=st1+strlen(st1)-1;
	int i;
	printf("enter the string 1");
	gets(aptr);
	puts(aptr);
	for(i=0;i<l/2;i++)
	{
		ch=*bptr;
		*bptr=*aptr;
		*aptr=ch;
		bptr--;
		aptr++;
	}
	printf("the reverse of string 1\n");
		printf("%s",ch);
	
	

}
