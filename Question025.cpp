#include<bits/stdc++.h>
using namespace std;

int f(int a){
    return a>0 ?a:0;
}

string sum(string a,string b){
    string s="",r="0";
    if(a.size()<b.size())
        a="0"+a;
    else if(a.size()>b.size())
        b="0"+b;
    for(int i=0;i<a.size();i+=1){
        int val = (stoi(a.substr(f(a.size()-i-1),f(a.size()-i)-f(a.size()-i-1)))
        +stoi(b.substr(f(b.size()-i-1),f(b.size()-i)-f(b.size()-i-1)))+stoi(r));
        s=to_string(val%10)+s;
        r=to_string(val/10);
        
    }
    r=stoi(r)==0?"":to_string(stoi(r))  ;   
    s=r+s;
    return s;
}


int main(){
    string A[2]={"1","1"};
    for(int i=2;;i++){
        A[i%2]=sum(A[0],A[1]);
        cout<<i<<" = "<<A[i%2]<<endl;
        if(A[i%2].size()>=1000)
            break;
    }
}