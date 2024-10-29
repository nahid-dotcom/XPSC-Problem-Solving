#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n; i++){
        string a;
        cin>>a;
        mp[a]++;
        if(mp[a]==1){
            cout<<"OK"<<'\n';
        }
        else{
            string s=a+to_string(mp[a]-1);
            cout<<s<<'\n';
        }
    }

    return 0;
}