#include<stdio.h>
int factorial(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f=f*i;
    }
return f;
}
int main(){
    int n,r;
    printf("Enter value of n= ");
    scanf("%d",&n);
    printf("Enter value of r= ");
    scanf("%d",&r);
    int ncr= factorial(n)/(factorial(r)*factorial(n-r));
    printf("%dC%d = %d",n,r,ncr);
    return 0;
}