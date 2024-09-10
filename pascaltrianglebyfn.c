#include<stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int comb=factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n;
    printf("Enter value of n= ");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
            for(int j=0;j<=i;j++){
                int icj=combination(i,j);
                printf("%d ",icj);
            }
            printf("\n");
            }
        return 0;
}