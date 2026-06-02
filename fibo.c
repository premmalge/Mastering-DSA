#include<stdio.h>
void fibo(int n, int t1,int t2){
    if(n<=0)  return;
    
    printf("%d",t1);
    fibo(n-1,t2,t1+t2);
    
}
int main(){
   int n;
   scanf("%d",&n);
   fibo(n,0,1);
   return 0;
}
