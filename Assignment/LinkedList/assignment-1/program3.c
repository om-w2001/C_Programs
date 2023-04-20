/* WAP for linked list of festivals in india. take input for user in linked list and print its data */



#include<stdio.h>
#include<stdlib.h>

typedef struct festivals{
	char name[20];
	int data;
	struct festivals *next;
}fest;
fest *head=NULL;
fest *createNode(){
	getchar();
	fest *newnode=(fest*)malloc(sizeof(fest));

	printf("Enter a festivals name:");
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*newnode).name[i]=ch;
		i++;
	}
	printf("Enter a data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;

}
void addnode(){
	fest *newnode=createNode();
	if(head==NULL){
		head=newnode;
	}
	else{
		fest*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}


}
void printll(){
	fest *temp=head;
	while(temp!=NULL){
		printf("%s||",temp->name);
		printf("%d||",temp->data);
		temp=temp->next;
	}
}

void main(){
	int node;
	printf("Enter the number of node:");
	scanf("%d",&node);
	for(int i=1;i<=node;i++){
		addnode();

	}
	 printll();

}

