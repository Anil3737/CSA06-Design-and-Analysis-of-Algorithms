#include<stdio.h>
int main(){
	int count=0;
	char s[1000];
	printf("enter your character : ");
	gets(s);
	printf("the vowels are : ");
	for(int c=0;s[c];c++){
		if(s[c]=='a'||s[c]=='A'||s[c]=='e'||s[c]=='E'||s[c]=='i'||s[c]=='I'||s[c]=='o'||s[c]=='O'||s[c]=='u'||s[c]=='U'){
			printf(" %c ",s[c]);
		count++;
	}
	}
	printf("\n");
	printf("no of vowels is %d",count);
	return 0;
}
