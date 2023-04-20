/* Take no of rows from the user ROWS=4
 1 2 3 4
 4 5 6
 6 7
 7
 */

#include<stdio.h>
void main(){
	int x,y=1,num=0;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		for(int j=4;j>i;j--){
			printf("%d ",y-num);
			y++;
		}
		num++;
		printf("\n");
	}
}
