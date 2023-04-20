/* WAP that searches for the occurrence of a particular element from a singly linear linked list
       Input linked list:|10|->|20|->|30|->|40|->|50|->|30|->|70|
       Input Enter the element:30
       Output:5
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
void Time(int y){
	if(head==NULL){
		printf("Invalid input");
	}else{
	int count=0;
	emp*temp=head;
	while(temp!=NULL){
		if(y==temp->data){
			count++;
		}
		temp=temp->next;
	}
	if(count==0){
		printf("%d is not present in linked list",y);
	}else{
	printf("%d times",count);
	}
	}
}
void main(){
	int x;
	printf("Enter the node:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		addNode();
	}
	int y;
	printf("Enter the element:");
	scanf("%d",&y);

      Time(y);
}
