/* WAP to print the factorial of given input number for user.
   Input:5
Output: Factorial of 5 is 120
*/

#include<stdio.h>
void main(){
	int x;
	long store=1;
	printf("Given input:");
	scanf("%d",&x);
	int y=x;
	while(y>=1){
		store=store*y;
		y--;
	}
	printf("Factorial of %d is %ld\n" ,x,store);
}
