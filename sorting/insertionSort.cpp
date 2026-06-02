#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
    int temp , j;
    for(int i=0;i<=n;i++){
        j=i;
        while(j>0 && arr[j-1]>arr[j]){
            temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j++;
        }
        
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
}
int main(){
int n;
 int arr[10];
cin >> n ;
for(int i=0;i<n;i++){
    cin >> arr[i];
}
sort(arr,n);

}