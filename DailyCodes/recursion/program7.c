#include<stdio.h>
int fun(int x){
	static int f=1;
	f=f*x;
	if(x!=1){
		fun(--x);
	}
	return f;
}
void main(){
	int x;
	printf("enter the number:");
	scanf("%d",&x);
	int f=fun(x);
	printf("%d\n",f);
}
