#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter value of base : ");
    scanf("%d",&a);
    printf("Enter value of power : ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised to powewr %d : %d",a,b,p);
    return 0;
}