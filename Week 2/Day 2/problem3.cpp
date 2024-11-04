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
        map<int,int>mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        priority_queue<int>pq;
        for(auto [x,y]:mp){
            pq.push(y);
        }
        while(!pq.empty()){
            if(pq.size()<2){
                break;
            }
            int a,b;
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            a--;
            b--;
            if(a>=1){
                pq.push(a);
            }
            if(b>=1){
                pq.push(b);
            }
        }
        int ans=0; 
            while(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
        cout<<ans<<endl;


    }

    return 0;
}