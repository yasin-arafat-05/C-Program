#include<stdio.h>
#include<math.h>
typedef long long int ll;
void octalToDec(){
    ll in,out=0,k=0;
    printf("Enter a octal number : ");
    scanf("%lld",&in);
    while(in!=0){
        out += (in%10)*pow(8,k);
        k++;
        in/=10;
    }
    printf("    %lld    \n",out);
}
void decToOctal(){
    ll in,out=0,k=0,i=1;
    printf("Enter a Decimal number : ");
    scanf("%lld",&in);
    while(in){
        out+=(in%8)*i;
        in/=8;i *=10;
    }
    printf("    %lld    ",out);
}
int main(){
    octalToDec();
    decToOctal();
}