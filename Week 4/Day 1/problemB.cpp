#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a=x%3;
        int b=y%3;
        if(a<=b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
        
    }

    return 0;
}