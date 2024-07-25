#include<stdio.h>
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	if(a%3==0)
	{
		printf("div by 3");
	}
	else
	{
		printf("not divisible by 3");
	}
	return 0;
}
