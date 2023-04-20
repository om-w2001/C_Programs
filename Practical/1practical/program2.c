//write a program to find mix number among three number
#include<stdio.h>
void main(){
	int num1 ,num2 ,num3;
	printf("Enter the number");
	scanf(" %d %d %d ",& num1,&num2,&num3);
	if(num1>num2 && num1>num3){
		printf("%d\n",num1);
	}
	if(num2>num1 && num2>num3 ){
                printf("%d\n",num2);
        }
	else{
                printf("%d\n",num3);
        }
}
