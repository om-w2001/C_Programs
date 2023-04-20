/* WAP to find element in array present or not present */

#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the size of array:");
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element:");
	scanf("%d",&y);
    int	flag=0;
	for(int j=0;j<x;j++){
		if(y==arr[j]){
			flag=1;
		}
	}
	if(flag=1){
		printf("Element is present\n");
	}
	else{
		printf("Element is not present\n");
	}
}
				
