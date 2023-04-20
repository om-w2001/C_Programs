/* WAP to print all the divised of givem no
 */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the  input:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		if(x%i==0){
			printf("%d\t",i);
		}
	}
}
