// fibonacci series
#include<stdio.h>
int fibo(int x){
	if(x==1){
		return 1;
	}
	if(x==0){
		return 0;
	}
	return fibo(x-1)+fibo(x-2);
}
void main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int y=fibo(x);
	printf("fibonacci of %d is %d\n",x,y);
}
