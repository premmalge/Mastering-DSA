#include<stdio.h>
int main(){
    int n,min,arr[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        }
    }

    printf("sorted:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}