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
    int n=1000000,m=1000000;
    int ans = 0 ,number = 0;
    int sum=0,sum1=0;

    for(int i=2;i<n;i++){
        if(isPrime(i)){
            sum=0;
            number=0;
            for(int j=i;j<n;j++){
                if(isPrime(j)){
                    number++;
                    sum+=j;
                    if(sum>m){
                        break;
                    }
                    if(isPrime(sum)){
                        if(number>ans){
                           ans=number;
                           sum1=sum; 
                        }
                    }       
                }
            }

        }
    }
    cout<<sum1<<" "<<ans;

}