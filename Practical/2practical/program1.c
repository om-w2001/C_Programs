/*Program 1 :
WAP to Find the sum of numbers that are not divisible by 3 up to a given number
Input: 10
Output: sum of numbers not divisible by 3 is 37 */

#include<stdio.h>
void main(){
	int x,total=0;
	printf("enter the value");
	scanf("%d",&x);
		for(int i=1; i<=x; i++){
			if(i%3!=0){	
	       			total=total+i;
			}
	
		}
		printf("total=%d",total);

}

