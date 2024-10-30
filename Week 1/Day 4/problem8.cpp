#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0; i<n; i++){
        string a,b;
        cin>>a>>b;
        mp[b]=a;
    }
    for(int i=0; i<m; i++){
        string a,b,c;
        cin>>a>>b;
        c=b;
        b.pop_back();
        cout<<a<<" "<<c<<" "<<"#"<<mp[b]<<endl;
    }

    return 0;
}