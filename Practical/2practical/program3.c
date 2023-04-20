/* Program 3 :
WAP to print the divisors & count of divisors of the entered num.
Input: 15
Output: the divisors are 1 3 5 15
The count of divisors is 4
Additions of divisors 24 */






#include<stdio.h>
void main(){
	int x=0,i=0,z=0,count;
	printf("Enter the input:");
	scanf("%d",&x);
	for(int i=1 ;i<=x; i++){
		if(x%i==0){
			printf("the divisors are %d\n",i);
			z=i+z;
			count++;
		}
	}
	printf("the count of divisors is %d\n",count);
	printf("Addition of divisors %d",z);
}

