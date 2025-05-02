#include<stdio.h>
int main(){
    int i,n[5];
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    printf("\narray elements are\n");
    for(i=0;i<5;i++){
        printf("%d\t",n[i]);
    }
    return 0;
}