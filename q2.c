#include<stdio.h>
void main()
{
    int a,b,c,d,e,sum;
    printf("enter the values of a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("sum=%d",sum);
    float percentage;
    int total_marks=500;
    int sored=sum;
    percentage=(float)scored/total_marks*100;
    printf("percentage=%.2f%%",percentage);
}
