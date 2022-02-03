#include <bits/stdc++.h>
#include<math.h>
using namespace std;

bool isPrime(int n){
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){

    int A[20][20],mul=0;

    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<17;j++){
            int mul1=1;
            for(int k=j;k<j+4;k++)
                mul1*=A[i][k];
            mul=max(mul,mul1);
        }
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<17;j++){
            int mul1=1;
            for(int k=j;k<j+4;k++)
                mul1*=A[k][i];
            mul=max(mul,mul1);
        }
    }
    
    for(int i=0;i<17;i++){
        for(int j=0;j<17-i;j++){
            int mul1=1;
            for(int k=j;k<j+4;k++)
                mul1=mul1*A[k][k+i];
            mul=max(mul,mul1);
        }
    }
    for(int i=0;i<17;i++){
        for(int j=0;j<17-i;j++){
            int mul1=1;
            for(int k=j;k<j+4;k++)
                mul1=mul1*A[k+i][k];
            mul=max(mul,mul1);
        }
    }
    for(int i=19;i>=3;i--){
        for(int j=0;j<=i-4;j++){
            int mul1=1;
            for(int k=j;k<j+4;k++)
                mul1*=A[i-k][k];
            mul=max(mul,mul1);
        }
    }

    for(int i=19;i>=3;i--){
        for(int j=0;j<=i-4;j++){
            int mul1=1;
            for(int k=j;k<j+4;k++)
                mul1*=A[k][i-k];
            mul=max(mul,mul1);
        }
    }


    cout<<mul;
    
}