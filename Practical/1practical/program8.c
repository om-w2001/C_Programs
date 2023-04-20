/* Program 8:
Write a Program that takes the angles of a triangle from the user and
print whether that triangle is valid or not.
{Note: Addition of angles of the triangle has to be 180 in order to
consider it as a valid one}
Input: 30 60 70
Output: The triangle with angles 30 60 & 70 is an invalid one */




#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter the angal =");
	scanf("%d%d%d",&x,&y,&z);
	if (x+y+z==180){
	      printf("The triangle is valid one\n");
	}
	else{
		printf("The triangle is Invalid one\n");
	}
}
