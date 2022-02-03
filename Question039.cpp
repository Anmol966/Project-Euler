#include<bits/stdc++.h>
using namespace std;

int main(){

    int no=0;
        int ans=0;
    for(int i=0;i<=100 0;i++){
        int no1=0;
        for(int j=1;j<i/2;j++){
            if((i*(i-2*j))%(2*(i-j))==0){
                no1++;
            }
        }
        if(no1>no){
            no=no1;
            ans=i;
        }
    }
    cout<<ans<<" "<<no/2;

}