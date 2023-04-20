/* WAP to interchange the address of two pointer */

#include<stdio.h>
void main(){
	int x=10,y=20;
	int *ptr=&x;
	int *ptr2=&y;

	ptr=ptr2;
	ptr2=ptr;

	printf("%d\n",*ptr);
	printf("%d\n",*ptr2);
}
