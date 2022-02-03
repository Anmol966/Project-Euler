#include<bits/stdc++.h>
using namespace std;

int A[8]={1,2,5,10,20,50,100,200};
int ans=0;
int f(int n,int a){
    

    if(n==0){
        ans++;
        return 1;}
    if(a<0){
        return 0;
    }
    if(n<0)
        return 0;
    
    int value=0;
    for(int i=0;i<=n/A[a];i++){
           value+= f(n-i*A[a],a-1);

    }
    return value;

}



int main(){

    int n=200;
    int a=f(n,7);
    cout<<ans<<" haha "<<a;

}