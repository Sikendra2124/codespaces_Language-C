#include<stdio.h>
#define size 5
int main(){
    int i,n[size],sum=0;
    float avg;
    for(i=0;i<(size-1);i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    printf("\n array values are: \n");
    for(int i=0;i<=(size-1);i++){
        printf("%d\t",n[i]);
        sum=sum+n[i];
    }
    avg=(float) sum/size;
    printf("sum =%d\n",sum);
    printf("average=%f\n",avg);
    return 0;
}