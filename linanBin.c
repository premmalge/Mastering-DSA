#include<stdio.h>
int lin(int arr[],int n,int key){
     for(int i=0;i<n;i++){
        if(arr[i]==key)
           return i;
    }
    return -1;
}
int bin(int arr[], int n,int key){
     int low=0, high=n-1;
     int mid=(low+(high-low)/2);

     while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
     return -1;
}
int main(){
   int n, arr[10],key,choice,pos;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   scanf("%d",&key);

   printf("1.lin");
   printf("2.bina");
   printf("enter choice");
   scanf("%d",&choice);

   if(choice==1)
        pos=lin(arr,n,key);
    if(choice==2)
        pos=bin(arr,n,key);
    
    if(pos!=-1){
        printf("elemet found at position %d",pos);
    }
    else{
        printf("elem not found");
    }
  
}