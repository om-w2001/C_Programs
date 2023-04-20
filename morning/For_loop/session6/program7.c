#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int num=1+x-1;
		for(int j=1;j<i;j++){
			printf("  ");
			num--;
		}
		for(int z=i;z<=x;z++){
			printf("%d ",num);
			num--;
		}
		printf("\n");
	}
}
