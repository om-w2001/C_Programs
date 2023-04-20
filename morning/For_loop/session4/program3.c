/* Take no of rows from the user     ROWS=4
      * * * *
      * * *
      * *
      * 

      */
 
#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=4;j>=i;j--){
			printf("* ");
		}
		printf("\n");
	}
}
