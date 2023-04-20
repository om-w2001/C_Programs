/* WAP to copy array element in other array for last */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the size of element:");
	scanf("%d",&x);
	int arr[x],arr2[x];

	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=x-1;j>=0;j--){
		arr2[j]=arr[x-1-j];
	}
	for(int i=0;i<x;i++){
		printf("%d\n",arr2[i]);
				}
}
