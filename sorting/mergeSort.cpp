#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int left,int mid,int right){
    int i=left;
    int j=mid+1;
    vector<int> temp;
    
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }

        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=right){
            temp.push_back(arr[j]);
            j++;

        }
        for(int k=left;k<=right;k++){
            arr[k]=temp[k-left];
        }

    }
}
void ms(vector<int> &arr, int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr, low,mid,high);
}

int main(){
    int n;
    vector<int> arr;
    cin >> n;
    arr.resize(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    ms(arr,0,n-1);

    cout << "sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}