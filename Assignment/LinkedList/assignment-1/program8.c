/* WAP to print minimum integer data from the above node */

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
void min(){
	demo *temp=head;
	int min =temp->data;
	while(temp!=NULL){
		if(min>temp->data){
			min=temp->data;
		}
		temp=temp->next;
	}
	printf("minimum data is=%d\n",min);
}

void main(){
	int node;
	printf("Enter the number of node:");
	scanf("%d",&node);
	for(int i=1;i<=node;i++){
		addnode();

	}
	 min();
}

