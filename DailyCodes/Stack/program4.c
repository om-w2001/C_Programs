/* WAP implacement TWO stack using  array*/

#include<stdio.h>
#include<stdbool.h>
int flag1=0,flag2=0;
int size;
int top1=0;
int top2=0;
bool isfull1(){
	if(top1==top2-1){
		return true;
	}else{
		return false;
	}
}
bool isempty1(){
	if(top1==-1){
		return true;
	}else{
		return false;
	}
}
int push1(int arr[]){
	if(isfull1()){
		return -1;
	}else{
		top1++;
		printf("Enter the data:");
		scanf("%d",&arr[top1]);
		return 0;
	}
}
int pop1(int arr[]){
	if(isempty1()){
		flag1=0;
		return -1;
	}else{
		int val=arr[top1];
		top1--;
		flag1=1;
		return val;
	}
}
int peek1(int arr[]){
	if(isempty1()){
		flag1=0;
		return -1;
	}else{
		int val=arr[top1];
		flag1=1;
		return val;
	}
}
bool isfull2(){
	if(top1==top2-1){
		return true;
	}else{
		return false;
	}
}
bool isempty2(){
	if(top2==size){
		return true;
	}else{
		return false;
	}
}
int push2(int arr[]){
	if(isfull2()){
		return -1;
	}else{
		top2--;
		printf("Enter the data:");
		scanf("%d",&arr[top2]);
		return 0;
	}
}
int pop2(int arr[]){
	if(isempty2()){
		flag2=0;
		return -1;
	}else{
		int val=arr[top2];
		top2++;
		flag2=1;
		return val;
	}
}
int peek2(int arr[]){
	if(isempty2()){
		flag2=0;
		return -1;
	}else{
		int val=arr[top2];
		flag2=1;
		return val;
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
		printf("1.push->1\n");
		printf("2.pop->1\n");
		printf("3.peek->1\n");
		printf("4.Isempty->1\n");
		printf("5.Isfull->1\n");
		printf("6.push->2\n");
		printf("7.pop->2\n");
		printf("8.peek->2\n");
		printf("9.Isempty->2\n");
		printf("10.Isfull->2\n");
		int ch;
		printf("Enter the choice:");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				int ret=push1(arr);
				if(ret==-1){
					printf("stack is full\n");
				}

				break;
			case 2:{
				       int ret;
				ret=pop1(arr);
				if(flag1==0){
					printf("Stack is empty");
				}else{
					printf("%d is popped",ret);
				}
			       }
				break;
			case 3:{
				       int ret;
				ret=peek1(arr);
				if(flag1==0){
					printf("stack is empty");
				}else{
				printf("%d\n",ret);
				}
			       }
				break;
			case 4:
				if(isempty1()){
					printf("yes\n");
				}else{
					printf("no");
				}

				break;
			case 5:
				if(isfull1()){
					printf("yes\n");
				}else{
					printf("no\n");
				}
				break;
			case 6:
				int s;
                                s=push2(arr);
                                if(s==-1){
                                        printf("stack is full\n");
                                }

                                break;
                        case 7:{
                                       int ret;
                                ret=pop2(arr);
                                if(flag2==0){
                                        printf("Stack is empty");
                                }else{
                                        printf("%d is popped",ret);
                                }
                               }
                                break;
                        case 8:{
                                       int ret;
                                ret=peek2(arr);
                                if(flag2==0){
                                        printf("stack is empty");
                                }else{
                                printf("%d\n",ret);
                                }
                               }
                                break;
                        case 9:
                                if(isempty2()){
                                        printf("yes\n");
                                }else{
                                        printf("no");
                                }

                                break;
                        case 10:
                                if(isfull2()){
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
