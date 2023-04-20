/* Program 10:
Write a program, take two characters if these characters are equal then print them as it is
but if they are unequal then print their difference.
Input: va1=s var2=s
Output: va1=s var2=s
Input: va1=a var2=p
Output: The difference between a and p is 15 */










#include<stdio.h>
void main(){
	int x;
	char var1,var2;
	printf("var1=");
	scanf("%c",&var1);
	printf("var2=");
	scanf("%c",&var2);
	if(var1==var2){
		printf("var1=%c  var2=%c",var1,var2);
	}
	else {
		x=var2-var1;
		printf("The difference between a and p is %d",x);
	}
}
