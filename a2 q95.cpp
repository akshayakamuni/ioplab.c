#include<stdio.h>
struct employee{
	int empno;
	char empname[100];
	float basicpay;
}employ[50];
int main(){
	int n,a,b,c;
		
	struct employee *ptr=employ;
	
	printf("enter n");
	scanf("%d",&n);
	
	for(int j=0;j<n;j++){
		scanf("%d\n %f %[^\n]s\n",&employ[j].empno,&employ[j].basicpay,&employ[j].empname);
	
		printf("emp no is %d\n emp name is %s\n basic pay is %f\n",(ptr+j)->empno,(ptr+j)->empname,(ptr+j)->basicpay);
	}
	
	
}
