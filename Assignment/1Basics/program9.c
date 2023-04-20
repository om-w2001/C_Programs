/* 9. Write a program to print the sum of the first 10 odd numbers */






#include<stdio.h>
void main(){
	int x,z=0;
	printf("Enter the value:");
	scanf("%d",&x);
	for(int i=1;i<=10;i++){
	      if(x%2==1){
		  z=z+x;
	      }
	      printf("%d\n",z);
	}
}

