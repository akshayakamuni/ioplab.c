#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("kamuni.txt","a");
	char ch;
	while((ch=getchar())!='\0')
	{
		putc(ch,fptr);
	}
	fclose(fptr);
}
