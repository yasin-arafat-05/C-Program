#include<stdio.h>
/*

1
2 3
4 5 6
7 8 9 10

*/
int main(){
    int n=4,k=1;
    for(int i=0;i<n;i++){
        int start = i+1;
        while(start--){
            printf(" %d",k);
            k++;
        }
        printf("\n");
    }
}