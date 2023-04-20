/* WAP that searches aa the palindrome data element from a singly liner linked list and print the position of palindrome data
   Input:linked list:|12|->|121|->|30|->|252|->|35|->|151|->|70|
   output:
   palindrome found at 2
   palindrome found at 4
   palindrome found at 6

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
	int ren;
	*emp temp=head;
	while(temp->data!=0){
		ren=x%10;


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
