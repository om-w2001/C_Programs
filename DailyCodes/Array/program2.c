/* code divided by 2
 */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the array element:");
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<x;j++){
		if(arr[j]%2==0){
		printf("%d\n",arr[j]);
		}
	}
}
