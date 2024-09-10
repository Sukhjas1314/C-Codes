#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8};
    int size=8;
    int search=8;
    int index=-1;
    int start=0;
    int last=size-1;
    int mid;
    while(start<=last){
        mid=(start+last)/2;
        if(arr[mid]==search){
            index=mid;
            break;
        }
        else if(arr[mid]<search){
            start=mid+1;
        }
        else{
            last=mid-1;
        }
    }
        if(index!=-1){
            printf("The no. you are searching for is %d and is at index %d.",search,index);
        }
        else{
            printf("The no. you are searching for is not in this array.");
        }
   
    return 0;
}