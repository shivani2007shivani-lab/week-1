#include<stdio.h>
#include<string.h>
int main(){
	int i,n;
	scanf("%d",&n);
	char str[n];
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			printf("Not palindrome");
			return 0;
		}
	}
	print("Palindrome");
	return 0;
}
