#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int x,y;
    printf("Enter value of x= ");
    scanf("%d",&x);
    printf("Enter value of y= ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("Value of x & y= %d & %d respectively.",x,y);
    return 0;
}