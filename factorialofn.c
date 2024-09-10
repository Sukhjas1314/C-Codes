#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a;
    printf("Enter the no : ");
    scanf("%d",&a);
    int fact=factorial(a);
    printf("The factorial of %d is : %d",a,fact); 
    return 0;
}