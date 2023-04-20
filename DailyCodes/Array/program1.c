/* First code of array */
#include<stdio.h>
void main(){
	int x;
	printf("Enter the array input:");
	scanf("%d",&x);
        int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<x;j++){
		printf("%d\t",arr[j]);
	}
}
