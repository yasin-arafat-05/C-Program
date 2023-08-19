#include<stdio.h>
typedef long long int ll;
ll fact(int n){
    if(n<=0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    ll n=0;
    ll ans = fact(n);
    printf("    %lld    ",ans);
}