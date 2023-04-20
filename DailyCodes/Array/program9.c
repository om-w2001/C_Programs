/* WAP to sum the even and odd element in array */

#include<stdio.h>
void main(){
	int x,y,sum1=0,sum2=0;
	printf("Enter the size of array:");
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<x;j++){
		if(arr[j]%2==0){
			sum1=sum1+arr[j];
		}
		else{
			sum2=sum2+arr[j];
		}
	}
	printf("sum of even number is %d\n",sum1);
	printf("sum of odd number is %d\n",sum2);
}
