#include<stdio.h>
/*

*
* *
* * *
* * * *
* * * * *

*/
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int start = i+1;
        while(start--){
            printf(" *");
        }
        printf("\n");
    }
}