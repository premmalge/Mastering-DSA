#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set s;

    for(int i=0;i<5;i++){
        s.insert(i);
    }

    for(auto it=s.begin(); it!=s.end();it++){
        cout << * it;
    }
}