#include<bits/stdc++.h>
using namespace std;

int B[100001][2]={0};


int main(){
    int n=100001;
    B[0][0]=1;
    for(int i=0;i<n;i++){
        B[i][1]=1;
    }
    
    for(int i=2;i<=100000; i++){
        for(int j=0;j<=n;j++){
            int value=0;
            for(int k=0;k<=j/i;k++){
                value=(value+B[j-k*i][(i-1)%2])%1000000;
            }
            B[j][i%2]=value;
        }
        cout<<i<<" = "<<B[i][i%2]<<endl;
        if(B[i][i%2]%1000000==0){
            cout<<" hahahahaha ";
            break;
        }
    }
    
}