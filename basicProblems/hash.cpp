//Hash == precomputing and fetching

//program for counting how many times the numbers are present in array
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   // for fetching of single element
cout << " enter element which u want to find ";
int q;
cin >> q;

//precompute
int hash[13]= {0};                 // we can use size up to 10^6  only in main method for integers but globally it can be 10^7
for(int i=0;i<n;i++){                                 // in main method int hash[10^13] then it gives segmentation fault
    hash[arr[i]]++;
}
// for fetching of one element;
cout << hash[q]<<endl;

// for multiple numbers to find

int num;
cout << "enter how much numbers to find"<<endl;
cin >> num;
while(num--){
    int number;
    cin >> number;

    // fetching
    cout << hash[number]<<" ";
}
 return 0;
}