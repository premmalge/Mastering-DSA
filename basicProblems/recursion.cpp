#include <iostream>
using namespace std;

void printNto1(int n)
{
    if (n < 1)
    
        return;
    
    cout << n << " ";
    printNto1(n - 1);
}

void print1toN(int a,int n){
   if(a>n){
    return;
   }
   cout << a << " ";
   print1toN(a+1,n);
}

int main()
{
    int n;
    int a=1;
    cin >> n;

    printNto1(n);
    cout << endl;
    print1toN(a,n);
}