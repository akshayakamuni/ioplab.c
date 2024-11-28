#include<stdio.h>
struct student
{
	int rollno;
	char sname[20];
	float tmarks;
};
int main()
{
	FILE *fptr;
	fptr=fopen("student.txt","w");
	int n,i;
	printf("enter no.of students");
	scanf("%d",&n);
	struct student aih[n];
	for(i=0;i<n;i++)
	{
		printf("enter student roll no");
		scanf("%d",&aih[i].rollno);
		printf("enter student name");
		scanf("%s",aih[i].sname);
		printf("enter student marks");
		scanf("%f",&aih[i].tmarks);
	}
	printf("student information");
	for(i=0;i<n;i++)
	{
		printf("%d",aih[i].rollno);
		printf("%s",aih[i].sname);
		printf("%f",aih[i].tmarks);
    }
    for(i=0;i<n;i++)
	{
		fprintf(fptr,"%d",aih[i].rollno);
		fprintf(fptr,"%s\t",aih[i].sname);
		fprintf(fptr,"%f\t",aih[i].tmarks);
    }
}
