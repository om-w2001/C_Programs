/* WAP stack using linked list */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct employee{
	int data;
	struct employee *next;
}emp;
int countnode=0;
emp *head=NULL;
emp*top=NULL;
int flag=0;
int elecount(){
	emp*temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
bool isfull(){
	if(elecount()==countnode){
		return true;
	}else{
		return false;
	}
}
emp* createNode(){
	getchar();
	emp *newnode=(emp*)malloc(sizeof(emp));
	printf("Enter the data:\n");
	scanf("%d",&newnode->data);

	newnode->next=NULL;
	return newnode;
}
emp* addNode(){
	emp *newnode=createNode();

	if(head==NULL){
		head=newnode;
		top=newnode;
	}else{
		emp *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		top=newnode;
	}
	return newnode;
}
int push(){
	if(isfull()){
		return -1;
	}else{
		addNode();
		return 0;
	}
}
bool isempty(){
	if(top==NULL){
		return true;
	}
	else{
		return false;
	}
}
int pop(emp *head){
	if(isempty()){
		flag=0;
		return -1;
	}else{
		if(head->next==NULL){
			int y=head->data;
			free(head);
			return y;
		}else{
		top=head;
		while(top->next->next!=NULL){
			top=top->next;
		}
		int x=top->next->data;
		free(top->next);
		top->next=NULL;
		return x;
		}
		flag=1;
	}
}
int peek(emp*head){
	if(isempty()){
		flag=0;
		return -1;
	}else{
		int val=top->data;
		flag=1;
		return val;
	}
}
void main(){
	printf("Enter the size of stack:");
	scanf("%d",&countnode);
	char choice;
	do{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.Isempty\n");
		printf("5.Isfull\n");		
		printf("6.elecount\n");
		int ch;
		printf("Enter the choice:");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				int ret=push(head);
				if(ret==-1){
					printf("stack is full\n");
				}

				break;
			case 2:{
				       int ret;
				ret=pop(head);
				if(flag==0){
					printf("Stack is empty");
				}else{
					printf("%d is popped",ret);
				}
			       }
				break;
			case 3:{
				       int ret;
				ret=peek(head);
				printf("%d\n",ret);
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
			case 6:{
				int count=elecount();
				printf("Count is %d",count);
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
