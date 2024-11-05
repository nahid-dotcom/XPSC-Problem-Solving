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
        map<int,set<int>>mp;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            mp[a].insert(i);
        }
        while(k--){
            int a,b;
            cin>>a>>b;

            if(mp.find(a)==mp.end() || mp.find(b)==mp.end()){
                cout<<"NO"<<endl;
            }
            else{
                auto it1=mp[a].begin();
                auto it2=mp[b].rbegin();
                if(*it1<*it2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        
    }

    return 0;
}