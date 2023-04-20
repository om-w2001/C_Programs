/* Program 7 :
Take an input number from the user and print the sum of digits.
Input = 1234
Output = sum of digits is 10*/







#include<stdio.h>
void main(){
	int x,y,sum=0;
	printf("Enter the vlaue=");
	scanf("%d",&x);
	while(x!=0){
		y=x%10;
		x=x/10;
	sum=sum+y;
	}
	x=sum;
	printf("sum of digits is %d",x);
}
