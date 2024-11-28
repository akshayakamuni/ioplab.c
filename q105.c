#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="ABCD";
	int n=strlen(arr);
	permute(arr,0,n-1);
	return 0;
}
void permute(char *s,int l,int r)
{
	int i;
	if(l==r)
	printf("%s\n",s);
	else
	{
		for(i=l;i<=r;i++)
		{
			swap((s+l),(s+i));
			permute(s,l+1,r);
			swap((s+l),(s+i));
		}
	}
}
void swap(char *t,char *a)
{
	char temp;
	temp=*t;
	*t=*a;
	*a=temp;
}
