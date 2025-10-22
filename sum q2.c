#include<stdio.h>
int main(){
	int i,n,sum=0;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("sum : %d\n",sum);
	printf("average : %d",sum/n);
	return 0;
	
}
