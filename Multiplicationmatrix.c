#include<stdio.h>
int main(){
    //For 1st matrix
    int n,m; //n is row & m is column
    printf("For 1st matrix ->\n");
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printf("Enter no. of columns: ");
    scanf("%d",&m);
    int arr[n][m];
    printf("The elements of 1st matrix are: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    //For 2nd matrix
    int p,q; //p is row & q is column
    printf("For 2nd matrix ->\n");
    printf("Enter no. of rows: ");
    scanf("%d",&p);
    printf("Enter no. of columns: ");
    scanf("%d",&q);
    int brr[p][q];
    printf("The elements of 2nd matrix are: \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");

    //Condition if matrices can be multiplied or not
    if(m!=p){
        printf("The matrices can't be multiplied\n");
    }
    else{
    //For resultant matrix
    int res[n][q];
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<m;k++){
                res[i][j]+= arr[i][k]*brr[k][j];
            }
        }
    }
    printf("The matrices can be multiplied\n");
    printf("The resultant matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}