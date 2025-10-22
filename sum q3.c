#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int pos=0,neg=0,zero=0;
	for( i=0;i<n;i++)
	{
		if(arr[i]>0){
			pos++;
		}
		else if(arr[i]<0){
		}
		else{
			zero++;
		}
	}
	printf("positive : %d\n",pos);
	printf("negative : %d\n",neg);
	printf("zero : %d",zero);
	return 0;
}
