#include<stdio.h>
int main(){
    int arr[]={100,20,-90};
    int *ptr[3];
    for(int i=0;i<3;i++){
        ptr[i]=&arr[i];
    }
    for(int j=0;j<3;j++){
        printf("The array element and address are respectively: %d & %d\n",*ptr[j],j);
    }
    return 0;
}