/* Take no of ROWS from the user ROWS =4
         a b c d
         a b c
         a b
         a
 
 */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		char ch='a';
		for(int j=4;j>=i;j--){
			printf("%C ",ch);
			ch++;
		}
		printf("\n");
	}
}
