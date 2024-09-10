#include<stdio.h>
int main(){
    int n,m; //n is row & m is column
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printf("Enter no. of columns: ");
    scanf("%d",&m);
    int arr[n][m];
    printf("The elements of the matrix are: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

        for(int j=0;j<m;j++){
            if(j%2==0){
                for(int i=m-1;i>=0;i--){
                    printf("%d ",arr[i][j]);
                }
            }
            else{
                for(int i=0;i<m;i++){
                    printf("%d ",arr[i][j]);
                }
            }
            printf("\n");
        }
    return 0;
}
