#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int mod=s/n;
        int x;
        if(mod<=a){
            x=mod*n;
        }
        else{
            x=a*n;
        }
        int remain=s-x;
        if(remain<=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}