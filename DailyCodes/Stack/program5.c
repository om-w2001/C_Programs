/* WAP Impement TWO stack using array with using single function */

#include<stdio.h>
#include<stdbool.h>
int top1,size=0;
int flag=0;
int top2=0;



bool isfull(){
	if(top1==top2-1){
		return true;
	}else{
		return false;
	}
}
bool isempty(){
	if(top1==-1){
		return true;
	}else{
		return false;
	}
}
int push(int arr[]){
	if(isfull()){
		return -1;
	}else{
		
		do{
			printf("push in stack 1\n");
			printf("push in stack 2\n");
			int ch;
			printf("Enter the choice\n");
			scanf("%d",&ch);

			switch(ch){
				case 1:{
					int x=top1++;
					printf("Enter the data");
                                        scanf("%d",&arr[x]);
                                        return 0;
                                        break;
				       }
				case 2:{
					int x=top2--;
					 printf("Enter the data");
                                          scanf("%d",&arr[x]);
                                           return 0;
					break;
				       }
				default:
					printf("wrong Input");
			
			}
		}
	}
}
int pop(int arr[]){
	if(isempty()){
		flag=0;
		return -1;
	}else{
		do{
                        printf("push in stack 1\n");
                        printf("push in stack 2\n");
                        int ch;
                        printf("Enter the choice\n");
                        scanf("%d",&ch);

                        switch(ch){
                                case 1:
                                        int x=top1;
					top1--;
					flag=1;
					return x;
                                        break;
                                case 2:
                                         x=top2;
					top2++;
					flag=1;
					return x;
                                        break;
                                default:
                                        printf("wrong Input");

                        }
                }
	}
}
int peek(int arr[]){
	if(isempty()){
		flag=0;
		return -1;
	}else{
		do{
                        printf("push in stack 1\n");
                        printf("push in stack 2\n");
                        int ch;
                        printf("Enter the choice\n");
                        scanf("%d",&ch);

                        switch(ch){
                                case 1:
                                        int x=arr[top1];
					flag=1;
					return x;
                                        break;
                                case 2:
                                        int x=arr[top2];
					flag=1;
					return x;
                                        break;
                                default:
                                        printf("wrong Input");

                        }
			getchar();
                printf("Do you want to continue:");
                scanf("%c",&choice);
        }while(choice=='y'||choice=='Y');

                }
	}

void main(){
	printf("Enter the size of stack:");
	scanf("%d",&size);
	int arr[size];
	top1=-1;
	top2=size;
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
