#include<stdio.h>
void main(){
	int x;
	printf("Enter the row:");
	scanf("%d",&x);
	char ch2='A';
	char ch='a';
	for(int i=1;i<=x;i++){
		for(int j=1;j<i;j++){
			printf("  ");
		}
		for(int z=i;z<=x;z++){
			if(z%2==0){
				printf("%c ",ch2);
			}
			else{
				printf("%c ",ch);
			}
			ch2++;
			ch++;
		}
		printf("\n");
	}
}
		
