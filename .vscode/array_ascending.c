#include<stdio.h>
void main(){
    int i,j,t,arr[5];
    for(i=0;i<=4;i++){
        printf("enter an element:");
        scanf("%d",&arr[i]);
    }
    printf("accepted elements are:");
    for(i=0;i<=4;i++){
        printf("%d\t",arr[i]);
    }
    //now arranging
    for(i=0;i<=4;i++){
        for(j=i+1;j<=5;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("after arranging:");
    for(i=0;i<=4;i++){
        printf("%d\t",arr[i]);
    }
}