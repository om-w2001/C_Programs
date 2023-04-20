/* WAP using array */

#include<stdio.h>
#include<stdbool.h>
int top=-1,size=0;
int flag=0;


bool isfull(){
	if(top==size-1){
		return true;
	}else{
		return false;
	}
}
bool isempty(){
	if(top==-1){
		return true;
	}else{
		return false;
	}
}
int push(int arr[]){
	if(isfull()){
		return -1;
	}else{
		top++;
		printf("Enter the data:");
		scanf("%d",&arr[top]);
		return 0;
	}
}
int pop(int arr[]){
	if(isempty()){
		flag=0;
		return -1;
	}else{
		int val=arr[top];
		top--;
		flag=1;
		return val;
	}
}
int peek(int arr[]){
	if(isempty()){
		flag=0;
		return -1;
	}else{
		int val=arr[top];
		flag=1;
		return val;
	}
}

void main(){
	printf("Enter the size of stack:");
	scanf("%d",&size);
	int arr[size];
	char choice;
	do{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.Isempty\n");
		printf("5.Isfull\n");		
		int ch;
		printf("Enter the choice:");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				int ret=push(arr);
				if(ret==-1){
					printf("stack is full\n");
				}

				break;
			case 2:{
				       int ret;
				ret=pop(arr);
				if(flag==0){
					printf("Stack is empty");
				}else{
					printf("%d is popped",ret);
				}
			       }
				break;
			case 3:{
				       int ret;
				ret=peek(arr);
				if(flag==0){
					printf("stack is empty");
				}else{
				printf("%d\n",ret);
				}
			       }
				break;
			case 4:
				if(isempty()){
					printf("yes\n");
				}else{
					printf("no");
				}

				break;
			case 5:
				if(isfull()){
					printf("yes\n");
				}else{
					printf("no\n");
				}
				break;

			default:
				printf("wrong Input");
		}
		getchar();
		printf("Do you want to continue:");
		scanf("%c",&choice);
	}while(choice=='y'||choice=='Y');
}
