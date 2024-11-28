#include<stdio.h>
struct item{
	char item_name[50];
	int quantity;
	float price;
	float amount;
}i;

void amount(char in[50],int qty,float price){
 	float amount=qty*price;	
 	printf("amount is %f",amount);
}
int main(){
	printf("enter members of structures");
	scanf("%s%d%f",i.item_name,&i.quantity,&i.price);
	
	amount(i.item_name,i.quantity,i.price);
}
