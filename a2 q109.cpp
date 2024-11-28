#include<stdio.h>
int main(){
	int a=5;
	int *ptr=&a;
	
	//modifying value
	*ptr=7;
	
	printf("value of a is %d",a);
}
