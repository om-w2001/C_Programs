#include<stdio.h>
void main(){
        int x;
        printf("Enter the ROWS:");
        scanf("%d",&x);
        char ch1='a';
        char ch2='A';
        for(int i=1;i<=x;i++){
                for(int j=1;j<i;j++){
                        printf("  ");
			ch1++;
			ch2++;
                }
                for(int z=i;z<=x;z++){
                        if(i%2==0){
                                if(z%2==0){
                        printf("%c ",ch2);
                                }
                                else{
                                        printf("%c ",ch1);
                                }
                                ch1++;
                                ch2++;
                        }
                        else{
                                if(z%2==0){
                                        printf("%c ",ch1);
                                }
                                else{
                                        printf("%c ",ch2);
                                }
                                ch1++;
                                ch2++;
                        }
                }
                printf("\n");
        }
}

