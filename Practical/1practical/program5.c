/*
Program 5: Write a program that takes a number from 1 to 5 and prints its
spelling,
if the number is greater than 5 print entered number is greater than 5
(use switch case)
Input : var4= 4
Output: four
Input : 9
Op: 9 is greater than 5
*/

#include<stdio.h>
void main(){
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	switch(x){
		case 0:printf("Zero");
			break;
		case 1:printf("one");
		       break;
		case 2:printf("Two");
		       break;
		case 3:printf("Three");
		       break;
		case 4:printf("four");
		       break;
		case 5:printf("Five");
		       break;
		default:printf("You enter the greater number than 5");

	}
}
