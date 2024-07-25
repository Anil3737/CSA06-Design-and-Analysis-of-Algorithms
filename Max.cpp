#include<stdio.h>
int main()
{
	int num[10]={12,34,23,5,1,6,45,39,5,6},max=num[0],i;
	for(i=1;i<10;i++)
	{
		if (max<num[i])
		{
			max=num[i];
		}
	}
	printf("MAX:%d",max);
}
