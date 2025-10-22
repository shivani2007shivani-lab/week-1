#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0],min=arr[0];
	for( i=0;i<n;i++)
	{
		if(arr[i]>max)
	{
		max=arr[i];  
	}
	else
    {
    	min=arr[i];
	}
}
printf("maximum : %d\n",max);
printf("minimum : %d",min);
return 0;
}
