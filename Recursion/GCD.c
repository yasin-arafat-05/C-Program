#include<stdio.h>
/*
    lcm = (a*b)/gcd
*/
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(a,b%a);
}
int main(){
    int a=1980,b=1617;
    int ans =  gcd(a,b);
    printf("    %d    ",ans);
}