#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("student.txt","r");
	char ch;
	int characters=0,words=0,lines=0;
	while((ch=getc(fptr))!=EOF)
	{
		characters++;
	}
	printf("no.of characters=%d\n",characters);
	fclose(fptr);
	fptr=fopen("student.txt","r");
	while((ch=getc(fptr))!=EOF)
	{
		if(ch++==' ' && ch!=' ')
		words++;
	}
	printf("no.of word=%d\n",words+1);
	fclose(fptr);
	fptr=fopen("student.txt","r");
	while((ch=getc(fptr))!=EOF)
	{
		if(ch=='\n')
		lines++;
	}
	printf("no.of lines=%d\n",lines);
	fclose(fptr);
}
