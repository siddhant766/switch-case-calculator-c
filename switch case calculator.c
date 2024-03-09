// You are using GCC
#include<stdio.h>
int main(){
    int a,b,r;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case'+':
        r=a+b;
        printf("%d",r);
        break;
        case '-':
        r=a-b;
        printf("%d",r);
        break;
        case '*':
        r=a*b;
        printf("%d",r);
        break;
        default:
        printf("INVALID");
    }
    return 0;
}
