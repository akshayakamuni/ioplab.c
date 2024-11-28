#include<stdio.h>
#define big(a,b) if(a>b) \
printf("big=%d",a); \
else \
printf("big=%d",b); 
int main()
{
	int x,y;
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	big(x,y);
}
