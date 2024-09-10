#include<stdio.h>
int isprime(int x){
    int i;
    if(x==0) return 0;
    else{ 
        for(i=2;i<=x-1;i++){
            if(x%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter any positive integer no.= ");
    scanf("%d",&n);
    if(isprime(n)){
        printf("It is a prime no..");
    }
    else{
        printf("It is not a prime no..");
    }
    return 0;
}