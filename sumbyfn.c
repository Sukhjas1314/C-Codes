#include<stdio.h>
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int x,y,sum;
    printf("Enter the 1st no.= ");
    scanf("%d",&x);
    printf("Enter the 2nd no.= ");
    scanf("%d",&y);
    sum=add(x,y);
    printf("Sum is= %d",sum);
    return 0;
}