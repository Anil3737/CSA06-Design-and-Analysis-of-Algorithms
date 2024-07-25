#include<stdio.h>
int main()
{
	int rem,rev=0,n,x;
	printf("enter the number: ");
	scanf("%d",&n);
	x=n;
	while(n!=0){
		rem=n%10;
		rev=rev+rem*rem*rem;
		n=n/10;
	}
	if(x==rev){
		printf("It is armstrong number");
	}
	else{
		printf("it is not armstrong number");
	}
}
