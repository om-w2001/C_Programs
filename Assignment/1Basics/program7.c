/* 7. Write a program to print a table of 12 */


#include<stdio.h>
void main(){
	int x;
	printf("Enter the value table:");
	scanf("%d",&x);
	for(int i=1;i<=10;i++){
		printf("%d\n",x*i);
	}
}
