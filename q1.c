#include<stdio.h>;
void main()
{
     int p,t,r,simple_interest;
     printf("enter the values of p,t,r");
     scanf("%d%d%d",&p,&t,&r);
     simple_interest=p*t*r/100;
     printf("simple_interest=%d",simple_interest);
}
