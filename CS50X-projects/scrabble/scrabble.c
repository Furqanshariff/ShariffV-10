#include<stdio.h>
#include<string.h>

char s1[100];
char s2[100];
int main(){
    char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int alpha_val[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int i,j,value1=0,value2=0;
    printf("Player 1: ");
    scanf("%s",s1);
    printf("Player 2: ");
    scanf("%s",s2);
    for (i = 0; s1[i]!='\0'; i++) {
      if(s1[i] >= 'a' && s1[i] <= 'z') {
         s1[i] = s1[i] -32;
      }
   }
   for (i = 0; s2[i]!='\0'; i++) {
      if(s2[i] >= 'a' && s2[i] <= 'z') {
         s2[i] = s2[i] -32;
      }
   }
    for(i=0;i<strlen(s1);i++){
        for( j=0;j<strlen(alpha);j++){
            if(s1[i]==alpha[j]){
                value1 = value1 + alpha_val[j];
            }
        }
    }
    for( i=0;i<strlen(s2);i++){
        for(j=0;j<strlen(alpha);j++){
            if(s2[i]==alpha[j]){
                value2 = value2 + alpha_val[j];
            }
        }
    }
        if(value1==value2){
        printf("Tie!\n");
        }else if(value1>value2){
        printf("Player 1 wins!\n");
        }else{
          printf("Player 2 wins!\n");
        }
    return 0;
}


