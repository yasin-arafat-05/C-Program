#include<stdio.h>
/*

 A
 B B
 C C C
 D D D D
 E E E E E

*/
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int start = i+1;
        char ch = 'A'+i;
        while(start--){
            printf(" %c",ch);
            
        }
        printf("\n");
    }
}