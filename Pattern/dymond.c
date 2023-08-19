#include<stdio.h>
/*

#include<stdio.h>
/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/
int main(){

    int n=5;
    //upper part
    for(int i=0;i<n;i++){
        int space = n-i;
        while(space--){
            printf("  ");
        }
        int star = i+1;
        while (star--){
            printf(" *");
        }
        int k = i;
        while(k--){
            printf(" *");
        }
        
        printf("\n");
    }
    //lower part
    for(int i=0;i<n;i++){
        int space = i;
        while(space--){
            printf("  ");
        }
        int star = n-i;
        while (star--){
            printf(" *");
        } 
        int k = n-i;
        while(k--){
            printf(" *");
        }
        printf("\n");
    }
}