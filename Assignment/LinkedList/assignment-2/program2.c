/* WAP that searches for the second last occurrence of a particular element from a singly linear linked list 
      Input linked list :|10|->|20|->|30|->|40|->|30|->|30|->|70|
      Input element :30
       
      Output :5

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
void second(int y){
	if(head==NULL){
		printf("Invalid input");
	}else{
		if(head->next==NULL){
			printf("single node is present:");
		}else{
	int count=0;
	emp*temp=head;
	while(temp!=NULL){
		if(y==temp->data){
			count++;
		}
		temp=temp->next;
	}
	emp*temp2=head;
	int count2=0;
	if(count!=0){
	while(temp2!=NULL&&count-1){
		if(y==temp2->data){
			count--;
		}
		temp2=temp2->next;
		count2++;
	}
	printf("%d\n",count2);
		}
	else{
		printf("The element not found in node\n");
	}
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

      second(y);
}
