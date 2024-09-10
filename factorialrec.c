#include<stdio.h>
int factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}
int main(){
    int x;
    printf("Enter the no. : ");
    scanf("%d",&x);
    int fact= factorial(x);
    printf("The factorial of %d is: %d",x,fact);
    return 0;
}
