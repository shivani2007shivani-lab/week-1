#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	scanf("%d",&key);
	for( i=n-1;i>=0;i--)
	{
		if(arr[i]==key){
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
