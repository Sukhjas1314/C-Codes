#include<stdio.h>
int minimum(int a,int b){
    int min=a;
    if(b<a) min=b;
    return min;
}
int main(){
    int x,y,min;
    printf("Enter the value of x= ");
    scanf("%d",&x);
    printf("Enter the value of y= ");
    scanf("%d",&y);
    min=minimum(x,y);
    printf("%d",min);
    return 0;
}