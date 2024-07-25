#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2*(n-i)-1;j++){
			printf(" ");
		}
		for(k=0;k<i*2+1;k++){
			printf("*");
		}
		printf("/n");
	}
}
	
