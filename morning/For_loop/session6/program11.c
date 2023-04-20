#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	int num=1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<i;j++){
			printf("  ");
		}
		for(int z=i;z<=x;z++){
			if(i%2==0){
				printf("%d ",num);
				num=num-2;
			}
			else{
			printf("%d ",num);
			num=num+2;
		       }
		}
		
		printf("\n");
	}
}
