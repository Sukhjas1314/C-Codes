#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose of the above matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[j][i]);
        } 
        printf("\n");
    }
    return 0;
}