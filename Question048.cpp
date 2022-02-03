#include<bits/stdc++.h>
using namespace std;

long long int pow1(long long int x,long long int y){

    if(y==0){
        return 1;
    }
    return (x*pow1(x,y-1))%10000000000;
}




int main(){
    long long int value=0;
    for(long long int i=1;i<=1000;i++){
        value= (value+pow1(i,i))%10000000000;
    }
    cout<<value;
}

