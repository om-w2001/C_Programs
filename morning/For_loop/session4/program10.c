
/* Take no of rows from the user ROWS=4
    4 3 2 1
    C B A
    2 1 
    A

    */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		char ch='A'+x-i;
		int num=1+x-i;
		for(int j=x;j>=i;j--){
			if(i%2==0){
				printf("%c ",ch);
			}
			else{
				printf("%d ",num);
			}
			ch--;
			num--;
		}
		printf("\n");
	}
}
