/* WAP for the Linked List of malls consisting of its name,number of shopes & revenue,connect 3 malls in the LinkedList and print their data  */


#include<stdio.h>
#include<stdlib.h>

typedef struct malls{
	char name[20];
	int nshop;
	float rev;
	struct malls *next;
}mall;
mall *head=NULL;
mall *createNode(){
	getchar();
	mall *newnode=(mall*)malloc(sizeof(mall));

	printf("Enter a mall name:");
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*newnode).name[i]=ch;
		i++;
	}
	printf("Enter a number shop:");
	scanf("%d",&newnode->nshop);
	getchar();
	printf("Enter the revenue of mall:");
	scanf("%f",&newnode->rev);
	newnode->next=NULL;
	return newnode;

}
void addnode(){
	mall *newnode=createNode();
	if(head==NULL){
		head=newnode;
	}
	else{
		mall*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	

}
void printll(){
	mall *temp=head;
	while(temp!=NULL){
		printf("%s||",temp->name);
		printf("%d||",temp->nshop);
		printf("%f||",temp->rev);
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

