#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int max,min;
	for(int i=0;i<5;i++){
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
		}
		printf("min is %d \n",min);
		printf("max is %d",max);
}
