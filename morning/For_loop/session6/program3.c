/* Take no of rows from the user ROWS=3
   1 2 3 4
     1 2 3
       1 2
         1

	 */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the Rows:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int num=1;
		for(int j=1;j<i;j++){
			printf("  ");
		}
		for(int z=i;z<=x;z++){
			printf("%d ",num++);
		}
		printf("\n");
	}
}
