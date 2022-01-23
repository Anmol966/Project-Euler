#include<bits/stdc++.h>
using namespace std;

long long int A[11]={0};

long long fact(long long n){
    return (n==0) || (n==1) ? 1:n*fact(n-1);
}


long long int power(long long int x,long long int y){
    long long int ans=1;
    for(long long int i=0;i<y;i++){
        ans=ans*x;
    }
    return ans;
}


long long int u(long long int n){
    long long int value = 1 ;
    for(int i=1;i<=10;i++){
        value=value + (power(-1*n,i));
    }
    return value;
}

long long int cube(long long int n){
    return n*n*n;
}

long long int f(long long int x,long long int l){
    long long int ans=0;
    for(long long int i=0;i<l;i++){
        long long int term=A[i];
        for(long long int j=i;j>0;j--){
            term=term*(x-j);
        }
        ans=ans+term;                                                                       
    }
    return ans;
}



int main(){
    A[0]=u(1);

    for(long long int i=1;i<=11;i++){
        A[i]= (u(i+1)-f(i+1,i))/fact(i);
    }
    long long sum=0;
    for(long long int i=1;i<=10;i++){
        sum=sum+f(i+1,i);
        cout<<f(i+1,i)<<" ";
    }
    cout<<"\n"<<sum<<"\n";
    for(long long int i=0;i<4;i++){
        cout<<A[i]<<" ";
    }

}