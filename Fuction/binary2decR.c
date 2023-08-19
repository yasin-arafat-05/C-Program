#include<stdio.h>
#include<math.h>
typedef long long int ll;
void binaryToDec(){
    ll in,out=0,i=0;
    printf("Enter a binary number: ");
    scanf("%lld",&in);
    while(in){
        out+=(in%10)*pow(2,i);
        i++;
        in/=10;
    }
    printf("    %lld    \n",out);
}
void decToBinary(){
    ll in,out=0,i=1;
    printf("Enter a decimal number: ");
    scanf("%lld",&in);
    while(in){
        out+=(in%2)*i;
        i*=10;;in/=2;
    } 
    printf("    %lld    ",out);
}
int main(){
    binaryToDec();
    decToBinary();
}