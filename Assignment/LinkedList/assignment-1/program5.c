/* WAP a demo structure consisting of integer data Take the number of the node from the user  & print the addition of the integer data */

#include<stdio.h>
#include<stdlib.h>

typedef struct demo{
	int data;
	struct demo *next;
}demo;
demo *head=NULL;
demo *createNode(){
	getchar();
	demo *newnode=(demo*)malloc(sizeof(demo));

	printf("Enter a data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;

}
void addnode(){
	demo *newnode=createNode();
	if(head==NULL){
		head=newnode;
	}
	else{
		demo*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}


}
void add(){
	demo *temp=head;
	int x=0;
	while(temp!=NULL){
		x=temp->data+x;
		temp=temp->next;
	}
	printf("Addition of data=%d\n",x);
}

void main(){
	int node;
	printf("Enter the number of node:");
	scanf("%d",&node);
	for(int i=1;i<=node;i++){
		addnode();

	}
	 add();
}

