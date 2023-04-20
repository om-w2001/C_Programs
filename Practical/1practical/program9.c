/* Program 9: WAP to print the count of divisors of the entered num.
Ip: 16
Op: Divisors of 16 are
1
2
4
8 */


#include<stdio.h>
void main(){
	int x,y=1;
	scanf("%d",&x);
	printf("Divisors of %d are\n",x);
	for(int y=1;y<x;y++){
	if(x%y==0){
		printf("%d\n",y);
		
	}
	}

}
