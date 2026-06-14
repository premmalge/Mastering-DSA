#include<bits/stdc++.h>
using namespace std;


void largest(int n, vector<int> arr){
      int max;
      max=arr[0];
      for(int i=0;i<n;i++){
        if(arr[i]>max)
           max=arr[i];
      }
      cout << max;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
   for(int i=0;i<n;i++){
    cin >> arr[i];
   }

   largest(n,arr);
}