/* Take no of rows from the user ROWS=4
  
  D C B A
  C B A
  B A
  A
  */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		char ch='A'+x-i;
		for(int j=4;j>=i;j--){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
}
