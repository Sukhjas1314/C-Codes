// #include<stdio.h>
// void increasing(int a,int n){
//     if(a>n) return;
//     printf("%d\n",a);
//     increasing(a+1,n);
//     return;
// }
// int main(){
//     int x;
//     printf("Enter the no. : ");
//     scanf("%d",&x);
//     increasing(1,x);
//     return 0;
// }
          // OR
#include<stdio.h>
void increasing(int n){
    if(n==0) return;
    increasing(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int x;
    printf("Enter the no. : ");
    scanf("%d",&x);
    increasing(x);
    return 0;
}