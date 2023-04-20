/* WAP to find number divdied by 4 and 5 */

#include<stdio.h>
void main(){
	int size;
	printf("Enter the size :");
	scanf("%d",&size);
	int arr[size];

	printf("Enter the array element :\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int flag=0;
	for(int j=0;j<size;j++){
		if(arr[j]%4==0 && arr[j]%5==0){
			flag=1;
		}
	}
	if(flag==1){
		printf("found element\n");
	}
	else{
		printf("Not found element\n");
	}
}
