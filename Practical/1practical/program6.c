/* Program 6:
WAP to get 10 numbers from Users and find their sum and average.
IP: 1 2 3 4 5 6 7 8 9 10
OP :
sum is 55
Average is 55.50
*/
#include<stdio.h>
void main(){ 
         int x ,add =0;
	
	for (int i=1; i<=10; i++){
                scanf("%d",&i);
		add=add+i;
		
	}
	printf("add =%d",add);

}
