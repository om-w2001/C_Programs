/* write a real time example for a linked list and print its data take 5 nodes from the user
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct state{
	char name[20];
	long int popu;
	long int bud;
	float lit;
	struct state *next;
}state;
state *head=NULL;
state *createNode(){
	getchar();
	state *newnode=(state*)malloc(sizeof(state));

	printf("Enter a state name:");
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*newnode).name[i]=ch;
		i++;
	}
	printf("Enter a population:");
	scanf("%ld",&newnode->popu);
	getchar();
	printf("Enter the budget");
	scanf("%ld",&newnode->bud);
	printf("Enter the literacy:");
	scanf("%f",&newnode->lit);
	newnode->next=NULL;
	return newnode;

}
void addnode(){
	state *newnode=createNode();
	if(head==NULL){
		head=newnode;
	}
	else{
		state*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}


}
void printll(){
	state *temp=head;
	while(temp!=NULL){
		printf("%s||",temp->name);
		printf("%ld||",temp->popu);
		printf("%ld||",temp->bud);
		printf("%f||",temp->lit);
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
