/* Program 9: Take an input number from the user and print the number in reverse
Input: 120654
Output: 456021 */




#include<stdio.h>
void main(){
	int x,ren;
	printf("Enter the number:");
	scanf("%d",&x);
	while(x!=0){
		ren=x%10;
		printf("%d",ren);
	        x=x/10;
	}
}

