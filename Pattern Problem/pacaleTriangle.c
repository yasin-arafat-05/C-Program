#include<stdio.h>
/*
https://www.youtube.com/watch?v=yKRI2icDMVM

           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1
*/
int main(){
    int row=8,i,j,coeff=1;
    for(int i=0;i<row;i++){
        for(int space=1;space<=(row-i);space++)
        printf(" ");
        for(int j=0;j<=i;j++){
            if(j==0 || i==0)
                coeff = 1;
            else
                coeff = coeff*(i-j+1)/j;
            printf(" %d",coeff);
        }
        printf("\n");
    }
}