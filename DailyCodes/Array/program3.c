/* code add the element */

#include<stdio.h>
void main(){
	int x;
	int add=0;
	printf("Enter the array number:");
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<x;j++){
		add=add+arr[j];
	}
	printf("add=%d\n",add);
}
