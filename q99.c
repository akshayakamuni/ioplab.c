#include<stdio.h>
int main()
{
	
	FILE *fptr;
	fptr=fopen("D:\\student.txt","w+");
	char  ch;
	int count;
	while((ch=getchar())!='\0')
	{
		put(ch,fptr);
		switch(toupper(ch))
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				count++;
				break;
		}
	}
	printf("%d",count);
	fclose(fptr);
}
