//write a program weather the input is leep year or not
//i/o=2000 leep
//i/p =1999
#include<stdio.h>
void main(){
	int year;
	printf("Enter the year =");
	scanf("%d",&year);
	if(year%4==0){
		printf("%d is Leep year",year);
	}
	else {
		printf("%d is not Leep year",year);
	}
}
