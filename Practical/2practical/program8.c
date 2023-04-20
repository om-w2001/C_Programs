/* Program 8: Take input from the user and print the product of digits
Input = 134
Output = product of digits is 12 */






#include<stdio.h>
void main(){
	int x,y,count=0,pro=1;
	printf("Enter the value:");
	scanf("%d",&x);
	while(x!=0){
		y=x%10;
		count++;
		x=x/10;
		pro=pro*count;
	}
	printf("product of digits is %d",pro);
}
