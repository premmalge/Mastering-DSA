#include<stdio.h>
int main(){
    int r,c,a[10][10],b[10][10],add[10][10];

    scanf( "%d %d",&r, &c);

    printf("enter mat 1");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter mat 2");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("add of mat is:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

}