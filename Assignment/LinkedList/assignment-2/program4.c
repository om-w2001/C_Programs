/* WAP that add the digits of a data element from a singly linear linked list and changes the data(sum of data element digits)
   Input linked list:|11|->|12|->|13|->|141|->|2|->|158|
   Output linked list:|2|->|3|->|4|->|6|->|2|->|14|

   */

#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
	int data;
	struct employee *next;
}emp;

emp *head=NULL;

emp* createNode(){
	emp *newnode=(emp*)malloc(sizeof(emp));
	printf("enter the data:\n");
	scanf("%d",&newnode->data);

	newnode->next=NULL;
	return newnode;
}
emp* addNode(){
	emp *newnode=createNode();

	if(head==NULL){
		head=newnode;
	}else{
		emp *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return newnode;
}
void add(){
	emp*temp=head;
	int y;
	while(temp!=NULL){
		int sum=0;
		while(temp->data!=0){
			y=temp->data%10;
			temp->data=temp->data/10;
			sum=sum+y;
		}
		temp->data=sum;
		temp=temp->next;
	}

}
void printLL(){
	if(head==NULL){
		printf("Wrong Input");
	}else{
	emp *temp=head;
	while(temp->next!=NULL){
		printf("|%d|->",temp->data);
		temp=temp->next;
	}
	printf("|%d|",temp->data);
	}
	printf("\n");

}

void main(){
	int x;
	printf("Enter the node:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		addNode();
	}
	printLL();
	add();
	printLL();
}
