#include<stdio.h>
int main(){
    int i,j,k;
   for(i=1;i<=7;i+=2){
        for(k=1;k<=(7-i);k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
   
    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
            if(j==1 || j<=i ){
               
                printf(" *");
            }
            else if( j==7 || i+j>=8){
               
                printf(" *");
            }
            else{
               
                printf("  ");
            }
            
        }
        printf("\n");
    }
    for(i=3;i>=1;i--){
        for(j=7;j>=1;j--){
            if(j==1 || j<=i){
               
                printf(" *");
            }
            else if( j==7 || i+j>=8){
               
                printf(" *");
            }
            else{
              
                printf("  ");
            }
            
        }
        printf("\n");
    }
    
      for(i=7;i>=1;i-=2){
        for(k=(7-i);k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    
}
