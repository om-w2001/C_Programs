/* Program 2:
Write a program to print the addition of 1 to 10 with 10 to 1.
Output:
1 + 10 = 11
2 + 9 = 11
3 + 8 = 11
.
.
10 + 1 = 11 */











#include<stdio.h>
void main(){
	int z,j=11,i,x;
	for(int i=1;i<=10;i++){
		z=j-i;
		x=i+z;
		printf("%d+%d=%d\n",i,z,x);
	}

	}

 
