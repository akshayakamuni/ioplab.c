#include<stdio.h>
#include<string.h>

int main(){
	char str[50];
	printf("enter string: ");
	//scanf("%[^\n]s",str);
	fgets(str,50,stdin);
	
//copying string	
	char strcopy[50];
	
	for(int i=0;str[i]!='\0';i++){
		strcopy[i]=str[i];
	}
	
	printf("copy is %s\n",strcopy);
	
//compare strings
	char str2[50];
	printf("enter another string: \n");
	//scanf("%[^\n]s",strcpr);
	fgets(str2,50,stdin);
	int sum=0;
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==str2[i])
			continue;
		else{
			sum+=str[i]-str2[i];
		}
	}
	
	printf("comparsion: %d\n",sum);
	
//concating strings
	int a;
	a=strlen(str);
	int j=0;
	for(int i=a-1;str2[j]!='\0';i++){
		strcopy[i]=str2[j];
		j++;
	}
	
	printf("concatinated string is %s\n",strcopy);
	
//reversing a string
for(int i=0;i<=a/2-1;i++){
	int temp=str[i];
	str[i]=str[a-i-1];
	str[a-1-i]=temp;
}

printf("reverse of str is %s\n",str);
}



