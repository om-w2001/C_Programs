/* Program 4:
Write a program to take a number as input and print whether that is a prime
number or not.
{Note: Prime number is the one which is divisible by 1 and that
number only}
Input: 41
Output: 41 is the prime number! */




#include<stdio.h>
void main(){
	int x=0,count;
	printf("Enter the value:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		if(x%1==0){
			count++;
			printf("%d is prime number\n",x);
		}

		else{
			printf("%d is not prime number\n",x);
	
	}
	}
}

