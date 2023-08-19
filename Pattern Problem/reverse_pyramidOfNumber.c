#include<stdio.h>
/*

1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1

*/
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int start =n-i,k=1;
        while(k<=start){
            printf(" %d",k);
            k++;
        }
        printf("\n");
    }
}