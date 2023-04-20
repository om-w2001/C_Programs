#include<stdio.h>
void main(){
	int x;
	printf("Enter the value of array:");
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<x;i++){
		printf("%d\n",arr[i]);
				}
}

