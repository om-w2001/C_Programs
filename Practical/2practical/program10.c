#include<stdio.h>
void main(){
	int x,y,sum;
	printf("Enter the value:");
	scanf("%d",&x);
	while(sum!=8){
		y=x%10;
		sum=y+sum;
		printf("%d",sum);
	}
	/*while(i<=8){
		i++;
	sum=sum+y;
		printf("%d ",sum);
	}*/
}

