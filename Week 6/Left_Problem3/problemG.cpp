#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n),nw;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto [x,y]:mp){
            if(y>=k){
                nw.push_back(x);
            }
        }
        sort(nw.begin(),nw.end());
        if(nw.empty()){
            cout<<"-1"<<endl;
        }
        else{
            int L=-1,R=-1,dif=-1;
            int s=nw.front(),p=nw.front();
            for(int i=1; i<nw.size(); i++){
                if(nw[i]==p+1){
                    p=nw[i];
                }
                else{
                    if(p-s>dif){
                        dif=p-s;
                        L=s;
                        R=p;
                    }
                    s=nw[i];
                    p=nw[i];
                }
            }
            if(p-s>dif){
                L=s;
                R=p;
            }
            if(L==-1){
                cout<<L<<endl;
            }
            else{
                cout<<L<<" "<<R<<endl;
            }
        }
    }
    return 0;
}
