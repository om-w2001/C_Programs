#include<stdio.h>
int factorial(int x){
	if(x<=1){
		return 1;
	}
	return factorial(x-1)*x;
}
void main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int y=factorial(x);
	printf("factorial of %d is %d\n",x,y);
}
