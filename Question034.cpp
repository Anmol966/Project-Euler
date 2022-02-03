#include<bits/stdc++.h>
using namespace std;

bool f(int a){
    int A[10]={1,1,2,6,24,120,720,5040,40320,362880};

    int value=0;
    for(int x=a;x>0;x=x/10){
        value+=A[x%10];
    }
    if(value==a)
        return true;
    return false;
}

int main(){
    int sum=0;
    for(int i=3;i<10000000;i++){
        if(f(i)){
            sum+=i;
            cout<<i<<"    "<<sum<<endl;
        }
    }
    
}