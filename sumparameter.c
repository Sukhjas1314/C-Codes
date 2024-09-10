// #include<stdio.h>
// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     return;
// }
// int main(){
//     int x;
//     printf("Enter a no.= ");
//     scanf("%d",&x);
//     sum(x,0);
//     return 0;
// }

                //OR

#include<stdio.h>
int sum(int n){
    if(n==1 || n==0)  return 1;
        int recans= n+ sum(n-1);
        return recans;
    }
int main(){
    int x;
    printf("Enter a no.= ");
    scanf("%d",&x);
    int s = sum(x);
    printf("The sum : %d",s);
    return 0;
}