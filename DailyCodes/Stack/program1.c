/* stack using array*/

#include<stdio.h>
int top=-1;
int size=0;
int arr[20];
void push(int data){
	top++;
	arr[top]=data;
}
void main(){
	int x;
	int y;
	printf("Enter the number of stack:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		printf("Enter the element:");
		scanf("%d",&y);
		push(y);
	}
	for(int i=top;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}
