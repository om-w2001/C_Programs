/* Take no of rows from the user ROWS=4
      d d d d
        c c c
	  b b
	    a

	    */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the rows:");
	scanf("%d",&x);
	char ch='a'+x-1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<i;j++){
			printf("  ");
		}
		for(int z=i;z<=x;z++){
			printf("%c ",ch);
		}
		printf("\n");
		ch--;
	}
	
}
