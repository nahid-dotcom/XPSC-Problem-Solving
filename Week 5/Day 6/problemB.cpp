#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        map<char,int>mp;
        for( char i='a'; i<='z'; i++){
            mp[i]=0;
        }
        for(int i=0; i<n; i++){
            for(auto [x,y]:mp){
                if(y==v[i]){
                    s.push_back(x);
                    mp[x]++;
                    break;
                }
            }
        }
        cout<<s<<endl;
        
    }

    return 0;
}