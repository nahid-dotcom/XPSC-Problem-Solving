#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        char f=s[0],l=s[n-1];
        char mn=min(f,l),mx=max(f,l);
        deque<int>idx;
        for(int i=0; i<n; i++){
            if(s[i]>=mn && s[i]<=mx){
                idx.push_back(i);
            }
        }
        int cost=int(mx-mn);
        int sz=idx.size();
        cout<<cost<<" "<<sz<<endl;
        if(f>l){
            sort(idx.begin()+1,idx.end()-1, [&](int a, int b){
                return s[a]>s[b];
            });
        }
        else{
            sort(idx.begin()+1,idx.end()-1,[&](int a, int b){
                return s[a]<s[b];
            });
        }
        for(auto it:idx){
            cout<<it+1<<" ";  
        }cout<<endl;
    }
    return 0;
}