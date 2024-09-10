#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    int search;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the no. you want to search for: ");
    scanf("%d",&search);
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            printf("The no. you are searching for is %d at %dth place in this array\n",search,i+1);
            break;
        }
        if(i==size){
            printf("The no. you are searching for is not in this array");
        }
    }
    return 0;
}