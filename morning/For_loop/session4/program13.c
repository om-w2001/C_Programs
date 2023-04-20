/*
 * WAP to print the factorial of each number between a given range
 * Input start=1
 * End =5
 * output = factorial of 1 is 1
 *          factorial of 2 is 2
           factorial of 3 is 6
           factorial of 4 is 24
           factorial of 5 is 120
  */	   

#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the Start point:");
	scanf("%d",&x);
	printf("Enter the End point:");
	scanf("%d",&y);
	for(int i=x;i<=y;i++){
		long store=1;
		for(int j=1;j<=i;j++){
		store=store*j;
		}
	printf("factorial of %d is %ld \n",i,store);
	}
}
	

