/* Take no of ROWS from the user ROWS =4
    d d d d
    C C C
    b b
    A


    ROWS=3
    c c c
    B B
    a

    */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	char ch1='a'+x-1;
	char ch2='A'+x-1;
	for(int i=1;i<=x;i++){
		for(int j=x;j>=i;j--){
			if(i%2==0){
				printf("%c ",ch2);
			}
			else{
				printf("%c ",ch1);
			}
			
		}
		ch1--;
		ch2--;
		printf("\n");
	}
}

