#include<stdio.h>
int main(){
	int n=6;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		//printf("%d",arr[i]);
	}
	for(int i=0;i<n;i++){
		//sum=sum+arr[i]
		printf("%d",arr[i]);
	}
	printf("%d",sum);
}

