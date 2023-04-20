/* WAP to check the prime number present in the data from the above nodes */

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
void prime(){
	demo *temp=head;
	int flag=0;
	while(temp!=NULL){
		for(int i=2;i<temp->data;i++){
			if(temp->data%i!=0){
				flag=1;
			}
		}
		temp=temp->next;
		
	}
	if(flag=1){
	printf("prime number is present");
	}
}

void main(){
	int node;
	printf("Enter the number of node:");
	scanf("%d",&node);
	for(int i=1;i<=node;i++){
		addnode();

	}
	 prime();
}

