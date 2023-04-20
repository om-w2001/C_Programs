/* Take no of rows from the user     ROWS=4
   1 2 3 4
   5 6 7 
   8 9
   10
   */


#include<stdio.h>
void main(){
	int x;
	int num=1;
	printf("Enter the Rows:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=4;j>=i;j--){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
