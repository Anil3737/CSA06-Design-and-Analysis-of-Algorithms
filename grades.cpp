#include<stdio.h>
int main()
{
	int n;
	printf("Enter the marks: ");
	scanf("%d",&n);
	if(n>90){
		printf("A");
	}
	else if(n>80 && n<=90){
		printf("B");
	}
	else if(n>70 && n<=80){
		printf("C");
	}
	else if(n>60 && n<=70){
	printf("D");
	}
	else 
		printf("Fail");
}
