/* print the maximum integer data from the above node */

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
void addnode(int *ptr){
	demo *newnode=createNode();
	*ptr=newnode->data;
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
void main(){
	int node;
	printf("Enter the number of node:");
	scanf("%d",&node);
	int arr[node];
	int *ptr=arr;
	for(int i=1;i<=node;i++){
		addnode(ptr);
		ptr++;

	}

	for(int i=0;i<node;i++){
		for(int j=1;j<node;j++){
			if(arr[i]<arr[j]){
					int temp;
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					}
					}
	}
	printf("The maximum number is :%d",arr[0]);
}

