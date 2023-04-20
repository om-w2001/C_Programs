/* WAP to add the  two array element */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the size of array:");
	scanf("%d",&x);
	int arr1[x],arr2[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr1[i]);
	}
	for(int j=0;j<x;j++){
		scanf("%d",&arr2[j]);
	}
	for(int z=0;z<x;z++){
		arr1[z]=arr1[z]+arr2[z];
		printf("%d\n",arr1[z]);
	}
}
