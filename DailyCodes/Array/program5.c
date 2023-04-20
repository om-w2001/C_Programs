/* Search the element in arrays 
 */

#include<stdio.h>
void main(){
	int size;
	printf("Enter the size=");
	scanf("%d",&size);
	int arr[size];

	printf("Enter the element in Array:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int search;
	int flag=0;
	printf("Enter the search number=");
	scanf("%d",&search);
	for(int j=0;j<size;j++){
		if(search==arr[j]){
		         flag=1;
		}
	}
	if(flag==1){
	printf("It is in array present\n");
	}
	else{
		printf("Not present\n");
	}
}
	

