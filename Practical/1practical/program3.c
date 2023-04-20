//write a program to find min number among three number//
#include<stdio.h>
void main(){
	int num1 ,num2,num3;
       printf("Enter the value of num1=");
           scanf("%d",&num1);
       printf("Enter the value of num2=");
           scanf("%d",&num2);
        printf("Enter the value of num3=");
           scanf("%d",&num3);
	   if(num1<num2 && num1<num3){
		   printf("%d\n",num1);
	   }
	   if(num2<num1 && num2<num3){
                   printf("%d\n",num2);
           }
            else {
		    printf("%d\n",num3);
	    }
}

