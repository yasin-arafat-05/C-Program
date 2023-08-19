#include<stdio.h>
/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int start = 1;
        while(start<=(i+1)){
            printf(" %d",start);
            start++;
        }
        printf("\n");
    }
}