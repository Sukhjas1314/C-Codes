#include<stdio.h>
int powlog(int a,int b){
    if(b==0) return 1;
    if(b==1) return a ;
    int x=powlog(a,b/2);
    if(b%2==0)
        return x*x;
    else
        return x*x*a;
}

int main(){
    int a,b;
    printf("Enter the base : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    int x = powlog(a,b);
    printf("%d raised to power %d : %d",a,b,x);
    return 0;
}