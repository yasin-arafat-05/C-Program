#include<stdio.h>
#include<string.h>
void reverse(char ch[],int f,int n){
    if(f>=n){
        return;
    }
    char temp = ch[f];
    ch[f] = ch[n];
    ch[n] = temp;
    reverse(ch,f+1,n-1);
}

int main(){
    char ch[15] = "YASIN KHAN";
    int n = strlen(ch),f=0;
    n--;
    reverse(ch,f,n);
    printf("    %s  ",ch);
}