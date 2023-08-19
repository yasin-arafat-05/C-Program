#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef long long int ll;
void binToOct(){
    ll in,out=0,dec=0,i=0;
    printf("Enter a Binary Number: ");
    scanf("%lld",&in);
    while(in!=0){
        dec +=(in%10)*(pow(2,i));
        i++;
        in/=10;
    }
    int k=1;
    while(dec!=0){
        out +=(dec%8)*k;
        dec/=8;
        k *=10;
    }

    printf("    %lld  \n",out);
}
void octToBin(){
    ll in,out=0,dec=0,k=0;
    printf("Enter a octal Number: ");
    scanf("%lld",&in);
    while(in!=0){
        dec += (in%10)*pow(8,k);
        k++; in /=8;
    }
    int i=1;
    while(dec!=0){
        out +=(dec%2)*i;
        dec/=2;
        i *=10;
    }
    printf("    %lld    \n",out);
}
int main(){
    binToOct();
    octToBin();
}