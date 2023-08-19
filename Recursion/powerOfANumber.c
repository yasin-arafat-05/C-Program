#include<stdio.h>
int power(int base,int n){
    if(n==0){
        return 1;
    }
    return base*power(base,n-1);
}
int main(){
    int base = 3,n=3;
    int x = power(base,n);
    printf("%d",x);
}