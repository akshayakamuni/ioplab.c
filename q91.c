#include<stdio.h>
#include<math.h>
int main()
{
	int a,*aptr,square,cube;
	printf("enter the value of a");
	scanf("%d",&a);
	aptr=&a;
	square=pow(*aptr,2);
	cube=pow(*aptr,3);
	printf("square=%d",square);
	printf("cube=%d",cube);
}
