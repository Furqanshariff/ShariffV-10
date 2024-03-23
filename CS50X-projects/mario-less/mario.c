#include<stdio.h>
int main(){
    int i,j,k,Height;
    do{
        printf("Height:\t");
        scanf("%d",&Height);
        printf("\n");
    }while(Height <=0);
    if(Height>0){
        for(i=1;i<=Height;i++){
            for(j=i;j <Height;j++){
                printf(" ");
            }
            for(k=1;k<=i;k++){
                printf("#");
            }
            printf("\n");

        }
    }




    return 0;
}
