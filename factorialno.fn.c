#include<stdio.h>
#include<math.h>
int factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}
int main(){
    int x,fact;
    printf("Enter the no.= ");
    scanf("%d",&x);
    fact=factorial(x);
    printf("%d! = %d",x,fact);
    return 0;
}