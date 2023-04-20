/* WAP a program that searches for the first occurrence of a particular element from a singly linear linked list.
  Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
  Input :Enter the element:30
  Output :3

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
void find(int y){
	int count=0;
	emp*temp=head;
	while(temp!=NULL){
		if(y==temp->data){
			break;
		}
		count++;
		temp=temp->next;
	}
	printf("%d\n",count+1);
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

      find(y);
}
