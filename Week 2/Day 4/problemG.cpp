#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int odd=0;
        for(auto[x,y]:mp){
            if(y%2==1){
                odd++;
            }
        }
        if(k>=n || k<odd-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}