#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int rotate(int n,int k){
    return (n/10)+(n%10)*pow(10,k-1);
}
int no(int x){
    int i=0 ;
    for(;x>0;x=x/10){
        i++;
    }
    return i;
}

bool check(int x){
    int imax=no(x);
    for(int i=0;i<imax;i++){
        if(!isPrime(x))
            return false;
        x=rotate(x,imax);
    }
    return true;
}

int main(){
    int no = 5;
    for(int i=11;i<1000000;i+=2){
        if(check(i)){
            cout<<no<<" = "<<i<<endl;
            no++;
        }
    }
}