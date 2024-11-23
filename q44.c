#include<stdio.h>
int main()
{
	float unit,charge;
	printf("enter no.of units");
	scanf("%f",&unit);
	if(unit>=0&&unit<=200)
	charge=0.50*unit;
	else if(unit>=210&&unit<=400)
	charge=100+0.65*(unit-200);
	else if(unit>=410&&unit<=600)
	charge=230+0.80*(unit-400);
	else if(unit>600)
	charge=425+1.25*(unit-600);
	printf("the rate of charge is %f",charge);
	return 0;
}
