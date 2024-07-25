
#include<stdio.h>
int main()
{
	int n,bin=0,rem,i=1;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("the binary no is: ");
	int rev=0;
	while(n!=0){
    rem=n%2;
    n=n/10;
    bin=bin+rem*i;
    i=i*10;
	printf("%d",bin);
	}
	return 0;
}

