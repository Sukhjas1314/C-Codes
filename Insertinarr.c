#include<stdio.h>
int main(){
    int arr[100]={1,3,5,9,11};
    int pos,x,size=5;
    x=7;
    for(int i=0;i<size;i++){
        printf("The array is: %d\n",arr[i]);
    }
    printf("\n");
    pos=4;
    size++;
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];  
    }
    arr[pos-1]=x;
    for(int i=0;i<size;i++){
        printf("The updated array is: %d\n",arr[i]);
    }
    return 0;
}