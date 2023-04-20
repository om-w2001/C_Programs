/* 3. Write a program to print the first ten, 3 digit number */



#include<stdio.h>
void main(){
	int x=100;
	printf("Enter the value=");
       scanf("%d",&x);
       for(int i=1;i<=10;i++){
	       printf("%d\n",x);
	       x++;
       }
}
                                
