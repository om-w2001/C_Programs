/* Take no of ROWS from the user ROWS =5
   1 2 3 4 5
   2 3 4 5
   3 4 5
   4 5
   5
   */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int num=0+i;
		for(int j=5;j>=i;j--){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
 
