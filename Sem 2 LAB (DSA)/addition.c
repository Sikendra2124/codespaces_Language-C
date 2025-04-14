#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the number of matrix:");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n],arr3[n][n];
    printf("enter the elements of first matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the elements of second matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("first matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("second matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    //addition of matrix
    printf("sum of matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}