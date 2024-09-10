#include<stdio.h>
void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("The elements of arr[%d] = %d\n",i,arr[i]);
    }
}
int main(){
    int arr[5]={10,20,30,40,50};
    display(arr,5);
    return 0;
}
                        //For strings

// #include<stdio.h>
// #include<string.h>
// void display(char *str){
//     int n=strlen(str);
//     printf("The value of n = %d\n",n);
//     for(int i=0;i<n;i++){
//         printf("str[%d] = %c\n",i,str[i]);
//     }
// }
// int main(){
//     char str[]="Singh";
//     display(str);
//     return 0;
// }