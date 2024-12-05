#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i =0; i<n; i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            cout<<s<<endl;
            continue;
        }
        priority_queue<pair<int,char>>pq;
        for (auto [x,y]:mp){
            pq.push({y,x});
        }
        string ans;
        pair<int,char>prev={0,' '};
        while(!pq.empty()){
            auto [val,ch]=pq.top();
            pq.pop();
            ans+=ch;
            if (prev.first>0) {
                pq.push(prev);
            }
            prev={val-1,ch};
        }
        cout<<ans<<endl;
    }

    return 0;
}
