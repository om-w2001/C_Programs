/* WAP to interchange number with the help pointer */

#include<stdio.h>
void main(){
	int x=10,y=20;
	int *ptr1=&x;
	int *ptr2=&y;

	int a=*ptr2;
	int b=*ptr1;

	printf("%d\n",a);
	printf("%d\n",b);
}
