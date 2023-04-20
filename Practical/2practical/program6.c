/* Program 6 :
Take an input number from the user and count the no of digits.
Input = 2534
Output = Number of Digits in 2534 is 4 */




#include<stdio.h>
void main(){
	int x,y,count=0;
	printf("Enter the number=");
	scanf("%d",&x);
	
	while(x!=0){
	    y=x%10;
	    count++;
	    x=x/10;
	}
	printf("count:%d",count);
}
