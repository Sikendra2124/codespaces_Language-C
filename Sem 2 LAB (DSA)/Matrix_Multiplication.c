#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int i,j;
    int A[n][n], B[n][n], product[n][n];
    printf("Enter first matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Enter second matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
     
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            product[i][j]=0;
            for(int k=0;k<n;k++){
                product[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    
    printf("Product of matrices:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}